/*
Kullanýcýnýn girdiði bir n tam sayýsýna kadar 
olan (n dahil) asal sayýlarýn toplamýný 
bulan program. (Ýlk asal sayý 2'dir.)
*/
#include<stdio.h>
int main(){
	int i,n,maks,bolen,toplam;
	printf("Maks. sayiyi giriniz : ");
	scanf("%d",&maks);
	toplam=0;
	for (n=2;n<=maks;n++){
		bolen=0;
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				bolen=bolen+1;
			}
		}
		if (bolen==0){
			toplam=toplam+n;
		}	
	}
printf("%d sayisina kadar ki asal sayilarin toplami %d dir... ",maks,toplam);
	return 0;
}

