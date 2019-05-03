/*
Degerleri kodun basinda girilen 10 elemanli 
bir tam sayi dizisini ekrana yazdirma.
*/
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Girilecek sayi adeti : ");
	scanf("%d",&n);
	
	int a[n],i,enkucuk,enbuyuk;

	for (i=0;i<n;i++){
		printf("Tam sayi gir : ");
		scanf("%d",&a[i]);
	}
	
	enkucuk=a[0];
	enbuyuk=a[0];
	
	for (i=1;i<n;i++){
		if(a[i]>enbuyuk){
			enbuyuk=a[i];
		}
		if(a[i]<enkucuk){
			enkucuk=a[i];
		}
	}
	printf("En buyuk = %d\n",enbuyuk);
	printf("En kucuk = %d\n",enkucuk);
	
	return 0;
}




