/*
kullanicinin girdigi 2 tane tam
sayidan en buyugunu bulan program
*/
#include<stdio.h>

int main(){
	int a, b;
	printf("a degerini gir : ");
	scanf("%d",&a);
	printf("b degerini gir : ");
	scanf("%d",&b);
	
	if ( a>b ){
		printf("a en buyuk");
	}
	else{
		printf("b en buyuk");
	}
	return 0;
}
