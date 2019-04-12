/*
Kullanýcýnýn girdiði 3 tane tam sayýnýn ardýþýk olup olmadýðýný 
bulan bir C kodu yazýnýz. (Kullanýcýnýn sayýlarý küçükten 
büyüðe doðru girdiðini kabul ediniz.)
	

	Örnek1                     Örnek2 
1. sayiyi gir: 5               1. sayiyi gir: 5
2. sayisi gir: 6               2. sayiyi gir: 8
3. sayiyi gir: 7               3. sayiyi gir: 9
Sonuc : Bu sayýlar ardýþýktýr. Sonuc : Bu sayýlar ardýþýk deðildir.

*/
#include<stdio.h>
int main(){
	int a,b,c,fark1,fark2;
	printf("a degeri giriniz :");
	scanf("%d",&a);	
	printf("b degeri giriniz :");
	scanf("%d",&b);
	printf("c degeri giriniz :");
	scanf("%d",&c);	
	fark1=b-a;
	fark2=c-b;
	if (fark1==1 && fark2==1){
		printf("Sonuc : BU SAYILAR ARDISIKTIR.");
	}
	else{
		printf("Sonuc : BU SAYILAR ARDISIK DEGILDIR.");
	}

	return 0;
}
