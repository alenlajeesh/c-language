#include <stdio.h>
#include <stdbool.h>
int main(){
	int x;
	printf("Enter a number to check:");
	scanf("%d",&x);
	bool found=true;
	for(int i=3;i<x;i++){
		if(x%i==0){
			found=false;
			printf("%d is not a prime number",x);
			return 0;
		}
	}
	if(found){
		printf("%d is a prime number",x);
	}
	return 0;
}
