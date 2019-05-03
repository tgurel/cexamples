/*
Degerleri kodun basinda girilen 10 elemanli 
bir tam sayi dizisini ekrana yazdirma.
*/
#include<stdio.h>
#include<math.h>
int main(){
	
	int a[10] = {-7,2,-1,4,6,-11,7,9,-2,10};
	int i,sayac=0;
	
	for (i=0;i<10;i++){
		if(a[i]<0){
			sayac = sayac + 1;
		}
	}
	printf("Negatif sayilarin miktari = %d\n",sayac);
	
	return 0;
}




