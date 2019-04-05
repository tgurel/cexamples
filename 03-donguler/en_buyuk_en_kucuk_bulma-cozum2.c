/*
Kullanýcýnýn girdiði 25 tane tam sayýdan
en kucuk ve en buyuk sayilari bulan program
kullanici -500000 ile 500000 arasi deger girecektir.
*/
#include<stdio.h>
int main(){
	int i,a,eb,ek; //eb=enbuyuk ek=enkucuk
	
	eb=-500000;
	ek=500000;	
	
	for(i=1;i<=25;i++){
		printf("sayi gir: ");
		scanf("%d",&a);
		if(a>eb){
			eb=a;
		}
		if(a<ek){
			ek=a;
		}
	}
	printf("en buyuk: %d\n",eb);
	printf("en kucuk: %d\n",ek);
	return 0;
}
