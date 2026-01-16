#include <stdio.h>
#include <string.h>

int vowelCount(char *arr,char *v){
	int count=0;
	for(int i=0;arr[i]!='\0';i++){
		for(int j=0;j<10;j++){
			if(arr[i]==v[j]){
				count++;
			}
		}
	}
	return count;
}
int main(){
	char v[10]={'a','e','i','o','u','A','E','I','O','U'};
	char arr[20];
	printf("Enter the string:");
	scanf("%19s",arr);
	
	int n=vowelCount(arr,v);
	printf("vowel count in %s is %d\n",arr,n);

	return 0;
}
