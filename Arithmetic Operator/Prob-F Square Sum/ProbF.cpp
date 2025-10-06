#include <stdio.h>
#include <string.h>

int main(){
	for (int i=0; i<3;i++){
		unsigned int a,b,c,d;
		scanf ("%d %d %d %d", &a, &b, &c, &d);
		float p1 = a*2;
		float p2 = b*2;
		float p3 = c*2;
		float p4 = d*1;
		float p = p1 + p2 + p3 + p4;
		printf("%.2f\n", p);
	}

	return 0;
}

