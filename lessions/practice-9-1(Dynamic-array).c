#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr =NULL;
	int choice,value;
	int size=0;
	int capacity=0;

	while(1){
		printf("\n1. Enter value to the array");
		printf("\n2. Display the array");
		printf("\n3. Stop");
		printf("\nEnter the Choice: ");
		scanf("%d",&choice);
			
		if(choice==1){
			printf("Enter the value : ");
			scanf("%d",&value);
			if(capacity==0){
				capacity=2;
				arr=malloc(capacity*sizeof(int));
				if(arr==NULL){
					printf("Failed to allocate memory\n");
					return 1;
				}
			}
			if(capacity==size){
				capacity*=2;
				int *temp =realloc(arr,capacity *sizeof(*arr));
				if(temp==NULL){
					printf("Failed to reallocate memory\n");
					free(arr);
					return 1;
				}
				arr=temp;
			}
			arr[size++]=value;
		}else if(choice==2){
			printf("The Elements are: ");
			for(int i=0;i<size;i++){
				printf("%d ",arr[i]);
			}
			printf("\n");
		}else if(choice==3){
			printf("Program stopped");
			break;
		}else{
			printf("Invalid choice");
		}

	}
	free(arr);
	return 0;
}
