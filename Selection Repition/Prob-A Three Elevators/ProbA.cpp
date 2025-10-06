#include <stdio.h>
#include <string.h>

int main(){
	int x, y, k, t;
	int p1,p2;
	
	scanf("%d %d %d", &x, &y, &k);
	getchar();
	
	p1	= x + y;
	p2 = 2 * k;
// k-x == y-k

	if(p2==p1){
		t= k-x;
		if (t>=0){
			printf("%d\n", t);
		}else{
			printf("-1\n");
		}
	}else {
		printf("-1\n");
	}
	return 0;
}

