#include <stdio.h>
#include <string.h>

long long gcd(long long hasil, long long num){
	if (num==0){
		return hasil;
	}else {
		return gcd(num, hasil%num);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	
	for (int i=1; i<=t; i++){
		int n;
		long long hasil, num;
		scanf("%d", &n);
		scanf("lld", &hasil);
		for (int i=1;i<n; i++){
			scanf("%lld", &num);
			hasil= gcd(hasil,num);
		}
		printf("Case #%d: %lld\n", i, hasil);
		
		
	}
	return 0;
}

