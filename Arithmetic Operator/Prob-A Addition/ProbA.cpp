#include <stdio.h>
#include <string.h>

int main(){

	int a, b, c;
	int d, e, f;
	int h, i, j;

	scanf("%d + %d =", &a, &b);
	scanf("%d + %d =", &d, &e);
	scanf("%d + %d =", &h, &i);
	getchar();
	
 	c=a+b;
	f=d+e;
	j=h+i;	
	printf("%d\n", c);
	printf("%d\n", f);
	printf("%d\n", j);
	
	return 0;
}

