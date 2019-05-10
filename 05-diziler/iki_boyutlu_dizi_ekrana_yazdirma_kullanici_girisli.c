/*
iki_boyutlu_dizi_ekrana_yazdirma_kullanici_girisli.c
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d %d elemanini gir = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Girilen Matris...\n_______________\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%7d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}




