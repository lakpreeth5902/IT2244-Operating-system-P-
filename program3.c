/****************************************
*   Exercise:                           *
*   First child: Slept for 1 second.    *
*   Second chid: Slept for 3 second.    *
*   Parent: Both children have finished.*
*****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid1, pid2;
    printf("Parent process started. PI: %d\n", getpid());

    pid1= fork();
    if(pid1 < 0)
    {
        perror("fork failed");
        exit(1); 
    }
    if(pid1 == 0)
    {
        printf("Child process. PID: %d, sleeping for 2 seconds....\n", getpid());
        sleep(1);
        printf("Child process exiting.\n");
        exit(0);
    }
    else 
    {
        pid2= fork(); 
        if(pid2 < 0)
        {
            perror("fork failed");
            exit(1); 
        }
        if(pid2 == 0)
        {
            printf("Child process. PID: %d, sleeping for 2 seconds....\n", getpid());
            sleep(3);
            printf("Child process exiting.\n");
            exit(0);
        }
        else 
        {
            int status;
            printf("Parent waiting for child to finish...\n");
            wait(&status);
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
    }
}