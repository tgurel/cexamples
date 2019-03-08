/*
kullanicinin girdigi 3 tane tam
sayidan en buyugunu bulan program
*/
#include<stdio.h>

int main(){
	int a, b, c;
	printf("a degerini gir : ");
	scanf("%d",&a);
	printf("b degerini gir : ");
	scanf("%d",&b);
	printf("c degerini gir : ");
	scanf("%d",&c);
	
	if ( a>b ){
		if(a>c){
			printf("a en buyuk");
		}
		else{
			printf("c en buyuk");
		}
	}
	else{
		if(b>c){
			printf("b en buyuk");
		}
		else{
			printf("c en buyuk");
		}
	}
	
	
	
}
