/*
Kullanýcýnýn girdiði bir 
n tam sayýsýnin 2,3,5 den en az ikisine bolunup 
bolunemedigini bulan program
*/
#include<stdio.h>
int main(){
	int n,tamb=0;
	printf("Bir tam sayi giriniz :");
	scanf("%d",&n);
	
	if(n%5==0){
		tamb=tamb+1;
	}
	if(n%10==0){
		tamb=tamb+1;
	}	
	if(n%20==0){
		tamb=tamb+1;
	}	
	
	if(tamb>=2){
		printf("dogru cevap");
	}
	else{
		printf("yanlis cevap");
	}
	
	
	
	return 0;
}
