/*
Degerleri kodun basinda girilen 10 elemanli 
bir tam sayi dizisini ekrana yazdirma.
*/
#include<stdio.h>
#include<math.h>

int main(){
	int a[10] = {3,7,-3,5,2,9,5,8,1,-8};
	int i;
	
	for (i=0;i<10;i++){
		printf("Eleman %d = %d\n",i+1,a[i]);
	}
	return 0;
}



