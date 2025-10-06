#include <stdio.h>

int main(){
	int arr[10];
	
	for (int i=0 ; i<10;i++){
		scanf("%d", &arr[i]);
	}
	
	int max= arr[0];	
	int min= arr[0];
	float tmbh = arr[0];
	for (int j=1; j<10;j++){
		if(max<arr[j]){
			max = arr[j];
		}
		if(min>arr[j]){
			min = arr[j];
		}
		tmbh += arr[j];
	}
	float avg = tmbh/10;
	
	printf("%d\n", max);
	printf("%d\n", min);
	printf("%.2f\n", avg);
	return 0;
}

