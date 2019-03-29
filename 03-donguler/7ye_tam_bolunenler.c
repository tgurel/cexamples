/*
1 den 200'e kadar olan sayýlardan 
7'e tam bölünenler ile ilgili þu iþlemleri 
yapan TEK bir kod yazýnýz.	

1-200 arasý 7'e tam bölünenlerin hepsini ekrana yazsýn.
1-200 arasý 7'e tam bölünenlerin kaç tane olduðunu ekrana yazsýn.
1-200 arasý 7'e tam bölünenlerin toplamýný ekrana yazsýn.
*/
#include<stdio.h>
int main(){
	int i,sayac=0,toplam=0;
	for(i=1;i<=200;i++){
	   if(i%7==0){
	   		printf("%d ",i);
	   		sayac=sayac+1;
	   		toplam=toplam+i;		
	   }
	}
	printf("7ye bolunenlerin sayisi=%d\n",sayac);
	printf("7ye bolunenlerin toplami=%d",toplam);
	return 0;
}

