#include <stdio.h>
#include <string.h>

int main(){
	float a,b;
	float c;
	
	scanf("%d %d", &a, &b);
	getchar();
	
	c = (b/a) * 100 ;
	printf ("%.4f%%\n", c);
	
	return 0;
}

