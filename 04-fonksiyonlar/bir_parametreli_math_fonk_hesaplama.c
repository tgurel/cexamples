/*
kullanici tek parametreli bir fonksiyonda parametre
degeri girerek sonucunu gormek istiyor.
*/
#include<stdio.h>
#include<math.h>

double f(double x2){
	return (sin(x2)*cos(x2)+sqrt(3*x2))/(8*x2-8);
}

int main(){
	double x,y;
	printf("x degerini giriniz :");
	scanf("%lf",&x);
	y=f(x);
	printf("Sonuc = %f",y);
	return 0;
}
