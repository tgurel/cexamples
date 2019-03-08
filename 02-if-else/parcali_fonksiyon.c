/*
       {  x^4+2 eger x<=1
f(x)=  {  
       {  x^3 eger x>1
       
Yukarýdaki parçalý fonksiyon için kullanýcýnýn girdiði 
bir a deðerine göre f(a) deðerini ekrana yazan
program kodu oluþturunuz.
*/
#include<stdio.h>
#include<math.h>
int main(){
	double x,sonuc;
	printf ("x degerini gir : ");
	scanf("%lf",&x);
	if (x<=1){
		sonuc=x*x*x*x+2; // ya da pow(x,4)+2
	}
	else{
		sonuc=1-x*x*x;
	}
	printf("sonuc=%f",sonuc);
	
	return 0;
}
