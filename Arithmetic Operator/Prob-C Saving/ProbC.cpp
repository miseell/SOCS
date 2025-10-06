#include <stdio.h>
#include <math.h>

int main(){
	int x;
	double y,b1,b2,b3;
	
	scanf("%d %lf", &x, &y);
	getchar();
	
	b1= (y/100*x)+x;
	b2= (y/100*b1)+b1;
	b3= (y/100*b2)+b2;
//	t = (x * pow((1 + (y / 100)),3));
	
	printf("%.2lf\n", b3);
	return 0;
}

