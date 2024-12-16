
#include <stdio.h>

int main()
{
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);
     if(n  == 0) {
         printf("khong nhap so 0\n");
         return 0;
     }
     if(n % 3 == 0 && n % 5 == 0) {
         printf("%d chia het cho 3 va 5\n", n);
     }
     if(n % 3 == 0) {
         printf("%d chia het cho 3\n", n);
     }
     if(n % 5 == 0) {
         printf("%d chia het cho 5\n", n);
     }
     if(n % 3 != 0 && n % 5 != 0) {
         printf("%d khong chia het cho 3 va 5\n", n);
     }

    return 0;
}