/*
klavyeden 10 tane ogrencinin notu giriliyor
not ortalamasini bulun..
*/
#include<stdio.h>
int main(){
	int puan,sayac,toplam;
	double ort;
	toplam=0;
	sayac=1;	
	while(sayac<=10){
		printf("%d. Ogrenci puanini gir : ",sayac);
		scanf("%d",&puan);
		toplam = toplam + puan;
		sayac = sayac + 1;
	}
	ort=toplam/10.0;
	printf("Ortalama = %f",ort);
	return 0;
}
