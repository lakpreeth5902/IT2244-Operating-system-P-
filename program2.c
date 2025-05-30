#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    printf("Parent process started. PI: %d\n", getpid());

    pid= fork();    // create new child process

    if(pid < 0)
    {
        perror("fork failed");
        exit(1);    // running not terminated
    }
    if(pid == 0)
    {
        //  child process 
        printf("Child process. PID: %d, sleeping for 2 seconds....\n", getpid());
        sleep(2);
        printf("Child process exiting.\n");
        exit(0);    // successfully terminated
    }
    else 
    {
        //  parent process
        int status;
        printf("Parent waiting for child to finish...\n");
        wait(&status);  // wait for child to finish 
        if(WIFEXITED(status))
        {
            printf("Child exited with status: %d\n", WEXITSTATUS(status));
        }
        else 
        {
            printf("Child did not exit normally.\n");
        }
        printf("Parent process ending.\n");
    }

    return 0;
}