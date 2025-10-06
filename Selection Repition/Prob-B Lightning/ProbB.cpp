#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for (int i=1; i<=n;i++){
		int a, b, c, d, e, f;
		char h1 = 'a', h2 = 's', h3 = 'h', h4 = 'i', h5 = 'a', h6 = 'p';
		
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		printf("Case #%d: ", i);
		for(int j = 0; j<a; j++){
			printf("%c", h1);
		}
		for(int m = 0; m<b; m++){
			printf("%c", h2);
		}
		for(int p = 0; p<c; p++){
			printf("%c", h3);
		}
		for(int q = 0; q<d; q++){
			printf("%c", h4);
		}
		for(int w = 0; w<e; w++){
			printf("%c", h5);
		}
		for(int r = 0; r<f; r++){
			printf("%c", h6);
		}
		printf("\n");
	}
	
	return 0;
}

