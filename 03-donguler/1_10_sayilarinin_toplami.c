/*
1 den 10 e kadar olan sayýlarýn toplamý 

*/
#include<stdio.h>
int main(){
	int i;
	int toplam=0;
	
	for(i=1;i<=10;i++){
		printf("%d\n",i);
		toplam = toplam + i;
		printf("Su anki toplam=%d\n",toplam);
	}
	printf("Toplam=%d\n",toplam);
	return 0;
}
