#include <stdio.h>
int main() {
  float dtb, drl;
  if (scanf("%f %f", &dtb, &drl) == 2){
  if (dtb >= 9.0 && drl >= 90) { 
    printf("HOC_BONG_XUAT_SAC");
  }
  else if (dtb >= 8.0 && dtb < 9.0 && drl >=80){
    printf("HOC_BONG_GIOI");
  }
    
  return 0;
}