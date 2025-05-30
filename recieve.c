// recieving the data 
#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>


//struture for  message queue
struct mesg_buffer{
	long mesg_type; 
	char mesg_text[100]; //message size
}message;
int main(){
	key_t key; 
	int msgid;
	
	// ftok to generate the unique key
	key = ftok("progfile",65);
	
	//msgget creates  a message queue and returns identifier
	msgid =msgget(key,0666 | IPC_CREAT);

	
	
	//msgrcv to recieve the message
	msgrcv(msgid,&message,sizeof(message),1,0);
	//display the message
	printf("data Recieved is : %s\n",message.mesg_text);
	//to destroy the message queue 
	msgctl(msgid,IPC_RMID,NULL);
	return 0;
}
