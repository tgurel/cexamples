/*
Kullanýcýnýn girdiði bir 
n tam sayýsýnin 2,3,5 den en az ikisine bolunup 
bolunemedigini bulan program
*/
#include<stdio.h>
int main(){
	int n,bayrak=0;
	printf("Bir tam sayi giriniz :");
	scanf("%d",&n);
	
	
	if(n%5==0 && n%10==0){
		bayrak=1;
	}
	

	if(n%10==0 && n%20==0){
		bayrak=1;
	}	

	if(n%5==0 && n%20==0){
		bayrak=1;
	}	
	
	if(bayrak==1){
		printf("dogru cevap");
	}
	else{
		printf("yanlis cevap");
	}
	
	return 0;
}
