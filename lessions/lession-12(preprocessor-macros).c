#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x)*(x))

int main(){
	
	#ifdef DEBUG
	printf("Debug mode\n");
	#endif

	printf("%.4f\n",PI);
	printf("%d",SQUARE(10));
	return 0;
}
