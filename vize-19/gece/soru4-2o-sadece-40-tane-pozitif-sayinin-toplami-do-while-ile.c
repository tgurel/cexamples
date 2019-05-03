/*
Kullanıcıdan pozitif ya da negatif tam sayılar girmesi isteniyor. 
Yazacağınız C kodunda bu sayılar toplanacak ancak toplama "negatif" 
sayılar dahil edilmeyecektir. Toplaması yapılan pozitif sayıların 
miktarı 40 olunca kullanıcıdan sayı alma işlemi durdurulacak ve 
toplam ekrana yazdırılacaktır (Bu kodda "while" ya da "do-while" kullanılacaktır).
*/
#include<stdio.h>
int main(){
	int sayi,sayac=0,toplam=0;

	do{
		printf("Sayi giriniz=");
		scanf("%d",&sayi);
		if(sayi>=0){
			toplam = toplam + sayi;
			sayac = sayac + 1;
		}
	}while(sayac<40);
	printf("Toplam = %d", toplam);
	return 0;
}
