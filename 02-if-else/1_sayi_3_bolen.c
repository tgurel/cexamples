/*
Kullanýcýnýn girdiði bir 
n tam sayýsýnin ayný anda 2,3,5 e bolunup bolunemedigini
bulan program
*/
#include<stdio.h>
int main(){
	int n;
	printf("Bir tam sayi giriniz :");
	scanf("%d",&n);
	
	if(n%2==0 && n%3==0 && n%5==0){
		printf("dogru cevap");
	}
	else{
		printf("yanlis cevap");
	}
	return 0;
}
