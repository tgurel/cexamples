/*
Kullanýcýnýn girdiði bir 
m tam sayýsýna kadar kac tane asal sayý oldugunu bulan
program yaziniz..
*/
#include<stdio.h>
int main(){
	int n,m,i,bsayac=0,asayac=0;
	printf("Asal sayilar icin maks. degeri girin :");
	scanf("%d",&m);
	for(n=2;n<=m;n++){
		bsayac=0;
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				//printf("%d ",i);
				bsayac=bsayac+1;
				break;
			}
		} // i dongusu biter
		//printf("\nBolen sayisi : %d\n",bsayac);
		if(bsayac==0){
			//printf("%d sayisi asaldir\n", n);
			asayac++;
		}
		
		//else{
			//printf("%d sayisi asal degildir\n", n);
		//}
	} // n dongusu biter
	printf("%d e kadar %d tane asal sayi vardir\n", m,asayac);
	return 0;
}
