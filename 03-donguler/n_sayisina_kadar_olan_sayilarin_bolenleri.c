/*
Kullanýcýnýn girdiði bir 
maks tam sayýsýna kadar olan sayilarin bolenlerinin
sayisini ekrana yazdirin
en cok boleni olan sayiyi bulun..
*/
#include<stdio.h>
int main(){
	int n,i,bsayac,maks;
	printf("Maksimum sayiyi giriniz :");
	scanf("%d",&maks);
		
	for(n=2;n<=maks;n++){
		bsayac=0;
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				//printf("%d ",i);
				bsayac=bsayac+1;
			}
		}
		printf("%d sayisinin bolen sayisi : %d ",n,bsayac);
		if(bsayac==0){
			printf("Bu sayi asaldir");
		}
		printf("\n");
	}
	return 0;
}
