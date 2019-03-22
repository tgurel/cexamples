/*
Kullanýcýnýn girdiði bir 
n tam sayýsýna göre n! (n faktoriyel)
hesaplayýp ekrana yazan bir kod yazýnýz.
*/
#include<stdio.h>
int main(){
	int n,i,carpim=1;
	printf("n degeri giriniz : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		carpim=carpim*i;
	}
	printf("Sonuc : %d",carpim);
	return 0;
}
