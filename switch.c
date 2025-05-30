//example no 1
#include<stdio.h>
int main(){
	int num;
	printf("Enter a number between 1 and 7: ");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("today is sunday");
			break;
		case 2:
			printf("today is Monday");
			break;
		case 3:
			printf("today is Tuesday");
			break;
		case 4:
			printf("today is wednesday");
			break;
		case 5:
			printf("today is thursday");
			break;
		case 6:
			printf("today is friday");
			break;
		case 7:
			printf("today is saturday");
			break;
		default:
			printf("give a correct number between 1 and 7");
			break;
	}
}