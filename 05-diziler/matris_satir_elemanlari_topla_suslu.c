/*
matris_satir_elemanlari_topla_suslu.c
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[3][3]={{45,34,78},{12,9,42},{97,3,6}};
    int toplam;

	int i,j;
	printf("a Matrisi          satir toplami\n");
	printf("________________________________\n");
	
	//satirlari topla
	for(i=0;i<3;i++){
		toplam=0;
		for(j=0;j<3;j++){
			printf("%5d ",a[i][j]);
			toplam = toplam + a[i][j];
		}
		printf(" = %d\n",toplam);
	}
	
	return 0;
}




