#include <stdio.h>

void hello(){
	printf("Hello\n");
}

int main(){
	void (*fp)() =hello;

	fp();

	return 0;
}
