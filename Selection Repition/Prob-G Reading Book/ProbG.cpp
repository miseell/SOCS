#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	
	for (int i=1; i<=t; i++){
		long long n, x;
		scanf ("%lld %lld", &n, &x);
		
		long long depan, blkng;
		depan = x/2;
		blkng = (n/2)- (x/2);
		
		if (depan<blkng){
			printf ("Case #%d: %d\n", i, depan);
		}else {
			printf("Case #%d: %d\n", i, blkng);
		}
	}
	return 0;
}

