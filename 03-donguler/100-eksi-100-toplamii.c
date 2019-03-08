/*
Kullanýcýdan pozitif ya da negatif tam sayýlar girmesini 
isteyin. Girdiði sayýlarýn toplamý 
100'ü ya da -100'ü geçtiðinde (100 dahil) 
program kullanýcýdan sayý almayý 
durdursun, 
toplamý ve kaç defa sayý girildiðini} 
ekrana yazsýn. Bu kodu oluþturunuz. 
(Bu soruda while ya da do..while kullanýlacaktýr.)
*/
#include<stdio.h>
int main(){
	int sayi,toplam=0,sayac=0;
	while(toplam<100 && toplam>-100){
		printf("Sayi giriniz : ");
		scanf("%d",&sayi);
		toplam = toplam + sayi;
		sayac = sayac + 1;
	}
	printf("Toplam = %d\n",toplam);
	printf("Sayi miktari : %d",sayac);
	return 0;
}
