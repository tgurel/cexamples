/*
Kullanýcýnýn girdiði bir 
n tam sayýsýnin bolenlerini ekrana yazdirin
bolenlerin sayisini da ekrana yazdirin...
*/
#include<stdio.h>
int main(){
	int n,i,bsayac=0;
	printf("Bir tam sayi giriniz :");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			printf("%d ",i);
			bsayac=bsayac+1;
		}
	}
	printf("\nBolen sayisi : %d\n",bsayac);
	if(bsayac==0){
		printf("Bu sayi asaldir");
	}
	return 0;
}
