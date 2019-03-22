/*
Collatz dizisinin ilk elemaný birden büyük rastgele 
bir tamsayýdýr. Bu sayýya n diyelim. Eðer n çift ise 
dizinin sýradaki elemaný n/2, tek ise 3n+1 olur. 
Tüm sayýlar için ispatlanamasa da bu þekilde dizi 
belli bir sayýdan sonra 1'e inmektedir. Kullanýcýnýn 
girdiði bir n (n>1) sayýsýný Collatz dizisinin 
ilk elemaný olarak kabul eden ve serinin elemanlarýný
ve kaç tane elemaný olduðunu (sondaki 1 sayýsý hariç) 
ekrana yazan bir C kodu yazýnýz. (Bu kodda "while" 
ya da "do-while" kullanýlacaktýr.)

Örnek: 

Bir tam sayi giriniz : 15

15 46 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 

eleman sayisi = 17

*/
#include<stdio.h>
int main(){
	int n,sayac=0,enbuyuk;
	printf("Bir tam sayi giriniz : ");
	scanf("%d",&n);
	enbuyuk=n;
	while(n>1){
	   	printf("%d ",n);
		if(n%2==0){
	   		n=n/2;
		}
		else{
			n=n*3+1;
		}
		if (n>enbuyuk){
			enbuyuk=n;
		}
		sayac=sayac+1;
	}
	printf("\n\nSayi miktari : %d",sayac);
	printf("\n\nEn buyuk sayi : %d",enbuyuk);
	return 0;
}
