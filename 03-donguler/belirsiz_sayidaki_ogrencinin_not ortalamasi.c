/*
klavyeden belirsiz sayida ogrencinin notu giriliyor
not ortalamasini bulun.. (negatif not girisi donguyu 
sonlandiracak)
*/
#include<stdio.h>
int main(){
	int puan,sayac,toplam;
	double ort;
	
	toplam=0;
	sayac=0;
	puan=1000;
	while(puan>=0){
		printf("%d. Ogrenci puanini gir : ",sayac+1);
		scanf("%d",&puan);
		if(puan>=0){
			toplam = toplam + puan;
			sayac = sayac + 1;
		}
	}
	printf("Ogrenci sayisi= %d\n",sayac);
	ort=1.0*toplam/sayac;
	printf("Ortalama = %f",ort);
	return 0;
}
