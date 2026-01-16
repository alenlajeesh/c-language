#include <stdio.h>

int main(){
	//Opening and file for writing
	FILE *fp =fopen("data.txt","w");
	if(!fp){
		perror("fopen");
		return 1;
	}
	fprintf(fp,"Hello i am alenlajeesh\n");
	fclose(fp);

	//opening a file to read
	fp=fopen("data.txt","r");
	if(!fp){
		perror("fopen");
		return 1;
	}
	//Reading a set amount of data repeatedly
	char buff[100];
	while(fgets(buff,sizeof(buff),fp)){
		printf("%s",buff);
	}
	
	//resets pointer to the begining of the file
	rewind(fp);

	//Reading char by char
	int c;
	while((c=fgetc(fp))!=EOF){
		putchar(c);
	}

	fclose(fp);
	return 0;
}
