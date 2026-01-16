#include <stdio.h>

int mystrlen(char *arr){
	int len=0;
	for(int i=0;arr[i]!='\0';i++){
		len++;
	}
	return len;
}
int main(){
	char arr[20];
	printf("Enter the String:");
	scanf("%19s",arr);
	int n=mystrlen(arr);
	printf("Length of the string is %d:",n);

	return 0;
}
