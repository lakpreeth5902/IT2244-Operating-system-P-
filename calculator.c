#include<stdio.h>
int main(){
	char op;
	int a;
	int b;
	printf("Enter the operator");
	scanf("%e",&op);
	printf("Enter the num1:");
	scanf("%d",&a);
	printf("Enter the num2:");
	scanf("%d",&b);
	switch(op){
		case '+': return a+b;
		case '-' : return a-b;
		case '*' : return a*b;
		case '/' : return a/b;
		case '%' : return a%b;
		
	}


}
