/*
Degerleri kodun basinda girilen 10 elemanli 
bir tam sayi dizisini ekrana yazdirma.
*/
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Toplanacak sayi adeti : ");
	scanf("%d",&n);
	
	int a[n];
	int i,toplam = 0;

	for (i=0;i<n;i++){
		printf("Tam sayi gir : ");
		scanf("%d",&a[i]);
	}

	for (i=0;i<n;i++){
		toplam = toplam + a[i];
	}
	printf("Toplam = %d\n",toplam);
	
	return 0;
}




