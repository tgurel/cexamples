/*
1 den n a kadar sayilarin carpimi
*/
#include<stdio.h>
int main(){
	int i,n,carpim=1;
	
	printf("n degerini giriniz : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		carpim = carpim * i;
	}
	printf("1 den %d sayisina kadar sayilarin carpimi: %d\n",n,carpim);
	
	return 0;
}
