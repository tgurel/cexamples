/*
1 den n a kadar sayilarin toplami
*/
#include<stdio.h>
int main(){
	int i,n,toplam=0;
	
	printf("n degerini giriniz : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		toplam = toplam + i;
	}
	printf("1 den %d sayisina kadar toplam: %d\n",n,toplam);
	
	return 0;
}
