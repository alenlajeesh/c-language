#include <stdio.h>

void greet(){
	printf("Hello from function");
}
void change(int x){
	x=100;
}
void valChange(int *x){
	*x=200;
}
int main(){
	//Normal function
	greet();
	printf("\nHello from main");
	
	//Pass by value
	int a=10;
	change(a);
	printf("\n%d",a);

	//pass by reference
	int b=20;
	valChange(&b);
	printf("\n%d",b);
	return 0;
}
