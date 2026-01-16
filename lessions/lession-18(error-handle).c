#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int main(){
	int *fp=malloc(sizeof(int));

	if(fp==NULL){
		perror("Malloc error");
		return -1;
	}

	free(fp);
	fp=NULL;
	return 0;
}
