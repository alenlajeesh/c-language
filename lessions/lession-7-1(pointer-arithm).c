#include <stdio.h>

int main(){
	//Array and pointer
	
	int arr[5]={10,20,30,40,50};
	printf("%p\n",arr);
	printf("%p\n",&arr[0]);

	//Pointer arithmetic
	int *p =arr;
	printf("%d\n",*p);
	printf("%d\n",*(p+1));
	printf("%d\n",*(p+2));
	
	for(int i=0;i<5;i++){
		printf("arr[%d] =%d =at %p\n",i,arr[i],&arr[i]);
	}
	return 0;
}
