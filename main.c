#include <stdio.h>

int main() {
    int khoang_cach, gia_tri;
    scanf("%d %d", &khoang_cach, &gia_tri);

    if (khoang_cach <= 0 || gia_tri < 0) {
        printf("INVALID");
        return 0;
    
    } if (gia_tri >= 500000 && khoang_cach <= 15) {
        printf("0");
        return 0;
    
     }if (khoang_cach <= 5) {
        printf("15000");
    } if (khoang_cach <= 15) {
        printf("25000");
        return 0;
    }
        printf("40000");
  return 0;
}