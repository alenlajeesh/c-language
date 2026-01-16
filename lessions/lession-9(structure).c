#include <stdio.h>
#include <stdlib.h>
struct Student{
	int id;
	float marks;
	char grade;
};

int main(){
	//Normal Structure and how to use it
	struct Student s1;

	s1.id=1;
	s1.marks=95.2;
	s1.grade='A';

	printf("%d %.2f %c \n",s1.id,s1.marks,s1.grade);
	
	//Struct and pointer 
	struct Student *p =&s1;
	printf("%d\n",p->id);
	
	//Struct with heap memory
	struct Student *s =malloc(sizeof(*s));
	s->id=2;
	s->marks=66.9;
	s->grade='C';
	printf("%d %.2f %c\n",s->id,s->marks,s->grade);

	free(s);
	s=NULL;

	return 0;
}
