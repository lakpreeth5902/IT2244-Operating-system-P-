#include<stdio.h>
//example No2
int main(){
	int date,a,b,c;
	printf("pick your date of birth: ");
	scanf("%d",&date);
	a=date%10;
	b=date/10;
	c=a+b
	switch(c){
		case 1:
			printf("Lucky ");
			break;
		case 2:
			printf("Carefully do your work ");
			break;
		case 3:
			printf("stroger ");
			break;
		case 4:
			printf("Happy");
			break;
		case 5:
			printf("can get help ");
			break;
		case 6:
			printf("Doubt ");
			break;
		case 7:
			printf("sad ");
			break;
		case 8:
			printf("Like ");
			break;
		case 9:
			printf("Courage ");
			break;
		default:
			printf("give a valid number: ");
			printf("pick your date of birth: ");
			scanf("%d",&date);
			a=date%10;
			b=date/10;
			c=a+b
			switch(c){
				case 1:
					printf("Lucky ");
					break;
				case 2:
					printf("Carefully do your work ");
					break;
				case 3:
					printf("stroger ");
					break;
				case 4:
					printf("Happy");
					break;
				case 5:
					printf("can get help ");
					break;
				case 6:
					printf("Doubt ");
					break;
				case 7:
					printf("sad ");
					break;
				case 8:
					printf("Like ");
					break;
				case 9:
					printf("Courage ");
					break;
				default:
					printf("give a valid number: ");
			
					
			
			
	}
}