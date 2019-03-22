/*
Kullanýcýnýn girdiði bir tam sayýnýn bölenlerinin 
hem toplamýný hem de çarpýmýný bulup ekrana 
yazdýran bir C kodu yazýnýz. (Bölenlerinin 
sayýsýný bulan örnek kod en arka sayfadadýr.)
*/
// Tanju Gurel
#include<stdio.h>
int main(){
	int n,i,bsayac=0,toplam=0,carpim=1;
	printf("Bir tam sayi giriniz :");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			printf("%d ",i);
			bsayac=bsayac+1;
			toplam=toplam+i;
			carpim=carpim*i;
		}
	}
	printf("\nBolen sayisi : %d\n",bsayac);
	printf("\nBolenlerin toplami : %d\n",toplam);
	printf("\nBolenlerin carpimi : %d\n",carpim);
	return 0;
}
