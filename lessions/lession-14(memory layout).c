#include <stdio.h>
#include <stdlib.h>

int g1=10; //data segment --(initialized global/statics)
int g2; //BSS --(uninitialized globals/statics)

void func(){
	int x=5; //stack --(function calls ,local variables)
	static int y; //BSS --(uninitialized globals/statics)
}

int main(){
	int *n=malloc(sizeof(int)); //Heap --(malloc / free)
	free(n);

	//code readonly
	n=NULL;
	return 0;
}

