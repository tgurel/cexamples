/*
Kullanýcý tarafýndan girilen 500 pozitif sayýdan iki haneli 
sayýlarýn miktarýnýn dört haneli sayýlarýn miktarýna oranýný 
"for" döngüsü kullanarak bulan bir C kodu yazýnýz.
*/
#include<stdio.h>
int main(){
	int i,sayi,sayac2hane=0,sayac4hane=0;
	double sonuc;
	for(i=1;i<=500;i++){
		printf("Bir tam sayi giriniz :");
		scanf("%d",&sayi);		
		if(sayi>=10 && sayi<=99){
			sayac2hane = sayac2hane + 1;
		}
		if(sayi>=1000 && sayi<=9999){
			sayac4hane = sayac4hane + 1;
		}
	}
	sonuc=1.0*sayac2hane/sayac4hane;
	printf("Sonuc = %f",sonuc);
	return 0;
}
