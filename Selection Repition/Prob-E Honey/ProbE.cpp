#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf ("%d", &t);
	
	for (int i = 1; i<=t; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		getchar();
		
		int total = a;
		int kosong = a;
		
		while (kosong>=b){
			int bbaru = kosong/b;
			total += bbaru;
			kosong = bbaru + (kosong % b); 
		}
		printf("Case #%d: %d\n", i, total);
	}
	return 0;
}

