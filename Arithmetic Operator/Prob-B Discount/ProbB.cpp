#include <stdio.h>
#include <string.h>

int main(){
int a,b;
float c;

scanf("%d %d", &a, &b);
getchar();
c  = (a - b)* 100;
c /= a;
printf("%.2f%%\n", c);
	return 0;
}

