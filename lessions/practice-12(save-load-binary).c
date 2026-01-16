#include <stdio.h>

struct Data{
	int id;
	char name[20];
};

int main(){
	FILE *fg;
	struct Data d={100,"alenlajeesh"};
	
	fg=fopen("data.bin","wb");

	if(fg==NULL){
		perror("fopen error");
		return 1;
	}
	fwrite(&d,sizeof(d),1,fg);
	fclose(fg);

	struct Data s;
	fg=fopen("data.bin","rb");
	if(fg==NULL){
		perror("fopen error");
		return 1;
	}

	fread(&s,sizeof(s),1,fg);

	printf("%d %s",s.id,s.name);
	fclose(fg);


	return 0;
}
