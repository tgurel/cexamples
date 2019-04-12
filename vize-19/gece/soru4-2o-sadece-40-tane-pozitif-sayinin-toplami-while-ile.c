/*
Kullanýcýdan pozitif ya da negatif tam sayýlar girmesi isteniyor. 
Yazacaðýnýz C kodunda bu sayýlar toplanacak ancak toplama "negatif" 
sayýlar dahil edilmeyecektir. Toplamasý yapýlan pozitif sayýlarýn 
miktarý 40 olunca kullanýcýdan sayý alma iþlemi durdurulacak ve 
toplam ekrana yazdýrýlacaktýr (Bu kodda "while" ya da "do-while" kullanýlacaktýr).
*/
#include<stdio.h>
int main(){
	int sayi,sayac=0,toplam=0;

	while(sayac<40){
		printf("Sayi giriniz=");
		scanf("%d",&sayi);
		if(sayi>=0){
			toplam = toplam + sayi;
			sayac = sayac + 1;
		}
	}
	printf("Toplam = %d", toplam);
	return 0;
}
