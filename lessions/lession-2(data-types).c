#include <stdio.h>

int main(){
	int age=20;
	float price=99.5;
	double pi=3.141592;
	char grade='A';

	printf("Age: %d\n",age);
	printf("Price: %.2f\n",price);
	printf("Grade: %c\n",grade);
	
	printf("int size :%lu\n",sizeof(int));
	printf("char size: %lu\n",sizeof(char));

}
