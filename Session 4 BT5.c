#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    printf("Nhap so nguyen thu ba: ");
    scanf("%d", &c);
    
    
    if (a < b && c < b && a < c){
        printf("%d nam giua %d va %d", c, a, b);
    }
    else {
        printf("%d khong nam giua %d va %d", c, a, b);
    }

    return 0;
}