/*
Kullanıcıdan tam sayı olarak dakika değeri alan ve 
bu değeri saat ve dakikaya çevirip ekrana 
yazan bir C kodu yazınız.
Örnek:
Dakika degeri giriniz : 556
Sonuc : 9 saat 16 dakika
*/
#include<stdio.h>
int main(){
	int dakika,saat,dakika2;
	printf("Dakika degeri giriniz :");
	scanf("%d",&dakika);		
	saat = (dakika-dakika%60)/60; 
	// saat=dakika/60; // bu da olur. bolumde kusurati attigi icin
	dakika2=dakika%60;
	printf("%d saat %d dakika",saat,dakika2);
	return 0;
}
