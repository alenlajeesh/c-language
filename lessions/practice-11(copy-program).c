#include <stdio.h>

int main(int argc ,char *argv[]){
	
	FILE *src,*dest;
	char buffer[1024];
	
	if(argc!=3){
		printf("The usage: %s src dest",argv[0]);
		return 1;
	}
	src=fopen(argv[1],"r");
	if(src==NULL){
		perror("source file");
		return 1;
	}

	dest=fopen(argv[2],"a");
	if(dest==NULL){
		perror("destination file");
		return 1;
	}
	while(fgets(buffer,sizeof(buffer),src)!=NULL){
		fputs(buffer,dest);
	}

	fclose(src);
	fclose(dest);
	
	printf("Succesfully copied\n");
	return 0;
}
