#include <stdio.h>

int main(){
	
	int x=23;
	int *p =&x;

	printf("x =%d\n",x);
	printf("&x =%p\n",&x);
	printf("p =%p\n",p);
	printf("*p =%d\n",*p);
	 
	return 0;
}
