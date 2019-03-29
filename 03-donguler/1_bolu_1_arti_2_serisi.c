/*
  1       1       1
----- + ----- + ----- + ...
 1+2     2+3     3+4
Yukarıdaki serinin ilk n terimininin 
toplamını hesaplayan C kodunu 
tamamlayınız. (int double dönüşümüne 
dikkat ediniz.)

*/
#include<stdio.h>
int main(){
	int i,n;
	double toplam=0;
	printf("Serinin terim sayisini girin :");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
	   toplam = toplam + 1.0/(i+i+1);
	}
	printf("\nToplam : %f",toplam);
	return 0;
}

