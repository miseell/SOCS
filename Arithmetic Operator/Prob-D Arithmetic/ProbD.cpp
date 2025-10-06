#include <stdio.h>
#include <string.h>

int main(){
	int a,b;
	int c,v,x,n,m;
	
	scanf("%d %d", &a, &b);
	getchar();
	
	c= a+b;
	v=a-b;
	x=a*b;
	n=a/b;
	m= a%b;
	
	printf("%d\n", c);
	printf("%d\n", v);
	printf("%d\n", x);
	printf("%d\n", n);
	printf("%d\n", m);
	return 0;
}

