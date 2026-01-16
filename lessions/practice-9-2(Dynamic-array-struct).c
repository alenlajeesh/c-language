#include <stdio.h>
#include <stdlib.h>

struct Student{
	int id;
	char name[50];
	float marks;
};

int main(){
	struct Student *arr=NULL;
	int size=0;
	int capacity=0;
	int choice; 

	while(1){
		printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
		if(choice==1){
			struct Student s;

			printf("Enter ID: ");
            scanf("%d", &s.id);

            printf("Enter Name: ");
            scanf(" %49[^\n]", s.name);

            printf("Enter Marks: ");
            scanf("%f", &s.marks);

			if (capacity == 0) {
                capacity = 2;
                arr = malloc(capacity * sizeof(struct Student));
                if (!arr) {
                    printf("Memory allocation failed\n");
                    return 1;
                }
            }

            if (size == capacity) {
                capacity *= 2;
                struct Student *temp =
                    realloc(arr, capacity * sizeof(struct Student));

                if (!temp) {
                    printf("Memory reallocation failed\n");
                    free(arr);
                    return 1;
                }
                arr = temp;
            }

            arr[size++] = s;
		}else if (choice == 2) {
            printf("\n--- Student List ---\n");
            for (int i = 0; i < size; i++) {
                printf("ID: %d | Name: %s | Marks: %.2f\n",
                       arr[i].id, arr[i].name, arr[i].marks);
            }
            printf("Size = %d, Capacity = %d\n", size, capacity);
        }else if (choice == 3) {
            break;
        }else {
            printf("Invalid choice\n");
        }
    }
	free(arr);
    arr = NULL;
	return 0;
}
