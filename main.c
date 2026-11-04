#include <stdio.h>

int main() {
  int code;
  scanf("%d", &code);
  switch(code);
  case 1:
    pust("XEP_LOAI_XUAT_SAC");
  case 2:
    pust("XEP_LOAI_GIOI");
  case 3:
    pust("XEP_LOAI_KHA");
  case 4:
    pust("XEP_LOAI_TRUNG_BINH");
   default;
    pust("KHONG_HOP_LE");
  return 0;
}