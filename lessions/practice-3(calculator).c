#include <stdio.h>

int main(){
	int a,b;
	long result=0;
	char op;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the operator:");
	scanf(" %c",&op);

	switch(op){
		case '+':
			result=a+b;
			printf("The answer is: %ld",result);
			break;
		case '-':
			result=a-b;
			printf("The answer is %ld",result);
			break;
		case '*':
			result =a*b;
			printf("The answer is %ld",result);
			break;
		case '/':
			if(b==0){
				printf("Divisible by zero not allowed");
				return 0;
			}

			result =a/b;
			printf("The answer is %ld",result);
			break;
		default:
			printf("Please enter a valid operator");
	}
	return 0;
			
}
