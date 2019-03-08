/*
kullanicinin girdigi 7 tane tam
sayidan en buyugunu bulan program
*/
#include<stdio.h>

int main(){
	int a1,a2,a3,a4,a5,a6,a7,cep;
	printf("Birbirinden farkli 7 tane degeri girin : ");
	scanf("%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7);
	cep=a1;
	if(a2>cep){cep=a2;}
	if(a3>cep){cep=a3;}
	if(a4>cep){cep=a4;}
	if(a5>cep){cep=a5;}
	if(a6>cep){cep=a6;}
	if(a7>cep){cep=a7;}
    printf("en buyuk sayi: %d",cep);
}






