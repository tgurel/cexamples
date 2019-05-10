/*
iki_matris_carpimi.c
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[3][3]={{45,34,78},{12,9,42},{97,3,6}};
	int b[3][3]={{2,3,78},{212,9,442},{7,3,6}};
	int c[3][3]={0};
	int i,j,k;
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
			for(k=0;k<3;k++){
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
			}
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




