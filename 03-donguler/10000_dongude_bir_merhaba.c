/*
ekrana 10000 dongude bir merhaba yazan program
*/
#include<stdio.h>

int main(){
	int sayac=1;
	
	while(sayac<=1000000){
		if (sayac%10000==0){
			printf("%d. Merhaba\n",sayac);
		}
		sayac = sayac + 1;
	}
	printf("sayac=%d",sayac);

	return 0;
}
