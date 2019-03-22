/*
4ten 935e kadar olan cift sayilarin toplamini bulunuz
*/

#include <stdio.h>

int main(){
	int toplam=0;
	int sayac=4;
	while(sayac<=935){
		toplam=toplam+sayac;
		sayac = sayac + 2;
	}
	printf("Toplam=%d",toplam);
}
