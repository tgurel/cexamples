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
	
	int a[n],i,enkucuk;

	for (i=0;i<n;i++){
		printf("Tam sayi gir : ");
		scanf("%d",&a[i]);
	}
	
	enkucuk=a[0];
	for (i=1;i<n;i++){
		if(a[i]<enkucuk){
			enkucuk=a[i];
		}
	}
	
	printf("En kucuk = %d\n",enkucuk);
	
	return 0;
}




