/*
klavyeden girilen n tane ogrencinin notu giriliyor
not ortalamasini bulun..
*/
#include<stdio.h>
int main(){
	int n,puan,sayac,toplam;
	double ort;
	
	printf("Ort. alinacak sinifta kac ogrenci var?");
	scanf("%d",&n);
	
	toplam=0;
	sayac=1;
	while(sayac<=n){
		printf("%d. Ogrenci puanini gir : ",sayac);
		scanf("%d",&puan);
		toplam = toplam + puan;
		sayac = sayac + 1;
	}
	ort=1.0*toplam/n;
	printf("Ortalama = %f",ort);
	return 0;
}
