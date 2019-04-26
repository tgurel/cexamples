/*
kullanici tek parametreli bir fonksiyonu parametre
degeri girerek sonucunu gormek istiyor.
*/
#include<stdio.h>
#include<math.h>

// prototip
double f(double);


int main(){
	double x,y,z;
	printf("x degerini giriniz :");
	scanf("%lf",&x);
	y=f(x);
	printf("Sonuc = %f",y);
	
	return 0;
}

double f(double x2){
	return (sin(x2)*cos(x2)+sqrt(3*x2))/(8*x2-7);
}



