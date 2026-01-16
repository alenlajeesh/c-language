#include <stdio.h>
#include <string.h>
struct Student{
	int id;
	char name[20];
	float marks;
};

int main(){
	struct Student s[3];
	s[0].id=10;
	strcpy(s[0].name,"AlenLajeesh");
	s[0].marks=56.5;

	printf("%d %s %.2f",s[0].id,s[0].name,s[0].marks);
	return 0;
}
