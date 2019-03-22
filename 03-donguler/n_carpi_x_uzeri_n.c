/*
Kullanýcýnýn girdiði bir x reel sayýsý ve 
n tam sayýsýna göre nx^n deðerini 
"matematik kütüphanesi kullanmadan" 
hesaplayýp ekrana yazan bir kod yazýnýz.
*/
#include<stdio.h>
int main(){
	int i,n;
	double carpim=1.0,x;
	printf("x degerini giriniz : ");
	scanf("%lf",&x);
	printf("n degerini giriniz : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		carpim=carpim*x;
	}
	carpim=n*carpim;
	printf("Sonuc: %f\n",carpim);
	
	return 0;
}
