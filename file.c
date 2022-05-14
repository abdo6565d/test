#include <stdio.h>
#define y 10
#define x 5
#if x>y
int main(){
	printf("x value= %d",x);
}
#elif x<y
int main(){
	printf("y value= %d",y);
}
#else
int main(){
		printf("equal");
}
#endif
