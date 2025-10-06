#include <stdio.h>
#include <string.h>

int main(){
	long long n;
	long long damage = 100;
	long long bonus = 0;
	long long total = 0;
	scanf("%lld", &n);
	
	for (int i=1; i <= n; i++){
		total += damage + bonus;
		bonus += 50;
	}
	printf("%lld\n", total);
	return 0;
}

