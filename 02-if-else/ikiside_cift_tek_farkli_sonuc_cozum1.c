/*
Kullanýcýdan 2 tam sayý girmesini isteyin. 
Yazacaðýnýz C kodu, bu sayýlarýn eðer ikisi de 
çift ise ekrana "ikisi de çift", eðer ikisi de 
tek ise ekrana "ikisi de tek", eðer birisi tek 
birisi çift ise "farklý sonuç" ifadelerini yazsýn.
*/

#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("1. tam sayiyi giriniz :");
	scanf("%d",&a);
	printf("2. tam sayiyi giriniz :");
	scanf("%d",&b);
	
	if(a%2==0){
		if(b%2==0){
			printf("Ikisi de cift");
		}
		else{
			printf("farkli sonuc");
		}
	}
	else{
		if(b%2==1){
			printf("Ikisi de tek");
		}
		else{
			printf("farkli sonuc");
		}
	}
	
	return 0;
}
