#include <stdio.h>

int main() {
    int khoangcach, giatri;
    scanf("%d %d", &khoangcach, &giatri);

    if (khoangcach <= 0 || giatri < 0) {
        printf("INVALID");
    } if (giatri >= 500000 && khoangcach <= 15) {
        printf("0");
    } if (khoangcach <= 5) {
        printf("15000");
    } if (khoangcach <= 15) {
        printf("25000");
    }
        printf("40000");
  return 0;
}