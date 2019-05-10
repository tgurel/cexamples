/*
bir_boyutlu_dizi_siralamasi
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[10]={45,34,78,12,9,42,97,3,6,33};
	int n=10,b,i,j;
	
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (a[i]>a[j]){
				   b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}
	
	for (i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");	
	return 0;
}




