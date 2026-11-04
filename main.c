#include <stdio.h>
int main() {
  float dtb;
  int drl;
  if (scanf("%f %d", &dtb, &drl) == 2){
  if (dtb >= 9.0) { 
     printf("HOC_BONG_XUAT_SAC");
  }
  else if(dtb >= 8.0){
    printf("HOC_BONG_GIOI");
  }
  else if(dtb >= 7.0){
    printf("HOC_BONG_KHA");
  }
  else {
    printf("KHONG_DAT");
  }
  }
  return 0;
}