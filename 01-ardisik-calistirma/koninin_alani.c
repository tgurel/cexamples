#include <stdio.h>
#include <math.h>
int main(){
  double r,h,hacim,alan,s,pi;
  pi=3.14159;
    
  printf("Yaricapi giriniz :");
  scanf("%lf",&r);
  printf("Yukseklik giriniz :");
  scanf("%lf",&h);    
    
  hacim=(pi*r*r*h)/3.0;
  printf("Hacim = %f",hacim);

  s=sqrt(r*r + h*h);
  alan = pi*r*s + pi*r*r;
  printf("\nAlan = %f",alan);
  return 0;
}
