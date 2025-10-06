#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	
 	for (int i = 1; i <= t; i++){
 		int n;
 		scanf ("%d", &n);
 		getchar();
 		int k[n];
 		int hk[n];
 		
 		for (int w=0; w<n; w++){
 			scanf("%d", &k[w]);
 			getchar();
		}
 		 
 		for (int s=0; s<=n-1; s++){
 			hk[s] = k[s]-k[s+1];
 			if (hk[s]<0) {hk[s] *=-1;}
		}
		
	 	int hminim = hk[0];
 		for (int x=0; x < n; x++){
 			if (hminim > hk[x]){
 				hminim = hk[x];
			 }
 		 }
 		printf("Case #%d: %d\n",i, hminim);
 		
	}
	return 0;
}

