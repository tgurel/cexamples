#include <stdio.h>

int main(){
	int toplam=0,sayac=1;
	int puan;
	//double ortalama;
	
	while(sayac<=100){
	  printf("Ogrenci puani giriniz :");
	  scanf("%d",&puan);
	  toplam = toplam + puan;
	  sayac = sayac + 1;
	}
	printf("Ortalama=%f",toplam/5.0);
}
