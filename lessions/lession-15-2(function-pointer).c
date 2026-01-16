#include <stdio.h>

int square(int n){
	return n*n;
}

int cube(int n){
	return n*n*n;
}

void process(int (*fn)(int)){
	printf("The answer is :%d\n" ,fn(5));
}

int main(){

	process(square);
	process(cube);

	return 0;
}
