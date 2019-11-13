#include <stdio.h>

int main(){
	int a = 1;
#if 1
	a |= 1 << 1 | 1 << 20;
#endif
	printf("%d \n", a);
	return 0;
}
