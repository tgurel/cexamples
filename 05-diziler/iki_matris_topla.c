/*
iki_matris_topla.c
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[3][3]={{453232,34,78},{12,9,42},{97,3,6}};
	int b[3][3]={{232,3,78},{212,9,442},{7,3,6}};
	int c[3][3];
	int i,j;
	printf("a Matrisi...\n_____________________\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%7d ",a[i][j]);
		}
		printf("\n");
	}
	printf("b Matrisi...\n_____________________\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%7d ",b[i][j]);
		}
		printf("\n");
	}
	//c yi hesapla
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("c Matrisi...\n_____________________\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%7d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}




