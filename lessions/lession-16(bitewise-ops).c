#include <stdio.h>

#define READ 1
#define WRITE 2
#define EXEC 4


int main(){
	int perms =READ | WRITE;	
	if(perms & WRITE){
		printf("Writable\n");
	}
	return 0;
}
