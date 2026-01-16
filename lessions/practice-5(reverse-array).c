#include <stdio.h>
#include <string.h>
void swap(char *arr,int left,int right){
	int temp=arr[left];
	arr[left]=arr[right];
	arr[right]=temp;
}
void reverse(char *arr,int n){
	int left=0;
	int right=n-1;

	while(left<right){
		swap(arr,left++,right--);
	}
}
int main(){
	char arr[20];
	printf("Enter the name:");
	scanf("%19s",arr);
	int n=strlen(arr);
	reverse(arr,n);

	printf("%s",arr);
	return 0;
}
