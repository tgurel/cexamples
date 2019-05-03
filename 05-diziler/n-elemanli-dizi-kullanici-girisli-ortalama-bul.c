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
	double ortalama;
	for (i=0;i<n;i++){
		printf("Tam sayi gir : ");
		scanf("%d",&a[i]);
	}

	for (i=0;i<n;i++){
		toplam = toplam + a[i];
	}
	ortalama = 1.0*toplam/n;
	printf("Ortalama = %.2f\n",ortalama);
	
	return 0;
}




