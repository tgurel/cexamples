/*
Degerleri kodun basinda girilen 10 elemanli 
bir tam sayi dizisini ekrana yazdirma.
*/
#include<stdio.h>
#include<math.h>

int main(){
	int a[10] = {3,7,-3,5,2,9,5,8,1,-8};
	int i,toplam = 0;
	
	for (i=0;i<10;i++){
		//printf("Eleman %d = %d\n",i+1,a[i]);
		toplam = toplam + a[i];
		printf("Anlik Toplam = %d\n",toplam);
	}
	printf("Toplam = %d\n",toplam);
	return 0;
}




