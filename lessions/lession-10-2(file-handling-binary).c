#include <stdio.h>

struct Student {
	int id;
	float marks;
};
int main(){
	struct Student s;
	s.id=100;
	s.marks=223.12;
	//Creating a .bin file and writing the struct data into it
	FILE *fp =fopen("student.bin","wb");
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
	
	//Reading a .bin file 
	struct Student s1;
	fp=fopen("student.bin","rb");
	fread(&s1,sizeof(s1),1,fp);
	
	//printing the data
	printf("%d %.2f",s1.id,s1.marks);
	fclose(fp);
	return 0;
}
