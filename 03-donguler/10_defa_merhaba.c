/*
ekrana 10 defa merhaba yazan program
*/
#include<stdio.h>

int main(){
	int sayac=1;
	
	while(sayac<=10){
		printf("%d. Merhaba\n",sayac);
		sayac = sayac + 1;
	}
	printf("sayac=%d",sayac);

	return 0;
}
