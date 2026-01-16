#include <stdio.h>
#include <string.h>

void show(char arr[],int n){
	for(int i=0;i<n;i++){
		printf("%c",arr[i]);
	}
}
int main(){
	
	//String storage with normal array
	char s[50];
	scanf("%10s",s);
	for(int i=0;s[i]!='\0';i++){
		printf("%c",s[i]);
	}
	printf("\n");
	char name[]="Linux";
	for(int i=0;name[i]!='\0';i++){
		printf("%c",name[i]);
	}
	
	//Length of a string
	int n =strlen(s);
	printf("The Length of %s is %d\n",s,n);
	
	//Copy s into a
	char a[50];
	strcpy(a,s);	
	printf("The copyed value is  %s \n",a);

	// combines a and s and modify a with result
	strcat(a,s);
	printf("The concat is %s \n",a);
	
	//copy s into a
	strcpy(a,s);
	
	//compare a and s
	if(strcmp(a,s)==0){
		printf("The two strings are same\n");
	}
 
	show(a,n);
	
	return 0;
}
