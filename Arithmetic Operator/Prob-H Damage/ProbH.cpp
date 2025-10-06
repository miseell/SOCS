#include <stdio.h>
#include <string.h>

int main(){
	int ph, m, pu;
	float phd, md, pud;
	
	scanf("%d %d %d", &ph, &m, &pu);
	getchar();
	
	phd = 0.2 * ph;
	md = 0.3 * m;
	pud = 0.5 * pu;
	float total = phd + md + pud;
	
	printf("%.2f\n", total);
	return 0;
}

