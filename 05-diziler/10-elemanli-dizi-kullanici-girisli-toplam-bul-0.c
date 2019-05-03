/*
Degerleri kodun basinda girilen 10 elemanli 
bir tam sayi dizisini ekrana yazdirma.
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[10];
	int i,toplam = 0;
	for (i=0;i<10;i++){
		printf("Tam sayi gir : ");
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++){
		toplam = toplam + a[i];
	}
	printf("Toplam = %d\n",toplam);
	return 0;
}




