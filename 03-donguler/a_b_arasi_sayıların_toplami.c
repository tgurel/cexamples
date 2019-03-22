/*
 Kullanýcýnýn gireceði a ve b tam sayýlarýna 
 göre a'dan b'ye kadar (a ve b dahil deðil) 
 olan tüm tamsayýlarýn kendilerinin toplamýný 
 ve karelerinin toplamýný ekrana yazan 
 bir C kodu yazýn.
*/
#include<stdio.h>
int main(){
	int i,a,b,toplam=0,toplam2=0;
	
	printf("a degerini giriniz : ");
	scanf("%d",&a);
	printf("b degerini giriniz : ");
	scanf("%d",&b);
	for(i=a+1;i<b;i++){
		toplam = toplam + i;
		toplam2 = toplam2 + i*i;
		
	}
	printf("%d den %d sayisina kadar toplam: %d\n",a,b,toplam);
	printf("%d den %d sayisina kadar sayilarin karelerinin toplam: %d\n",a,b,toplam2);
	
	return 0;
}
