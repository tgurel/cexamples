/*
Degerleri kodun basinda girilen 10 elemanli 
bir tam sayi dizisini ekrana yazdirma.
*/
#include<stdio.h>
#include<math.h>
int main(){

	int a[10] = {-7,2,-1,4,6,-11,7,9,-2,10};
	int i,enbuyuk;

	enbuyuk=a[0]+a[1];
	
	for (i=1;i<9;i++){
		cifttoplam=a[i]+a[i+1];
		if(cifttoplam>enbuyuk){
			enbuyuk = cifttoplam;
		}
	}
	
	printf("En buyuk = %d\n",enbuyuk);
	
	return 0;
}




