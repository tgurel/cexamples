/*
1 den n a kadar sayilarin carpimi
*/
#include<stdio.h>
int main(){
	int s1,s2,s3,i,n;
	
	printf("n degerini giriniz : ");
	scanf("%d",&n);

	s1=1;
	s2=1;
	printf("1 1 ");
	for(i=3;i<=n;i++){
		s3=s1+s2;
		printf("%d ",s3);
		s1=s2;
		s2=s3;
	}
	
	return 0;
}
