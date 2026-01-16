#include <stdio.h>
#include <stdlib.h>

int main(){
	//allocate memory for array of size 5
	int size=5;

	int *arr = calloc(size ,sizeof(int));

	//Two ways to initialize memory
	//int *arr1 = malloc(size *sizeof(int));
	//int *arr2 = calloc(size ,sizeof(int));


	//checking for failure
	if(!arr){
		perror("calloc failed");
		return 1;
	}
	//Giving value to the array
	for(int i=0;i<5;i++){
		arr[i]=i*10;
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}

	//realocating memory
	int *temp =realloc(arr, (size*2) * sizeof(*arr));

	if (!temp) {
        free(arr);
        return 1;
    }
	if(temp){
		arr=temp;
	}
	
	for(int i=size;i<size*2;i++){
		arr[i]=i*10;
	}

	for(int i=0;i<size*2;i++){
		printf("%d ",arr[i]);
	}
	//free the allocated memory to prevent memory leak
	free(arr);
	arr=NULL;

	return 0;
}
