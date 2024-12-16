#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap do dai canh thu nhat: ");
    scanf("%d", &a);
    printf("Nhap do dai canh thu hai: ");
    scanf("%d", &b);
    printf("Nhap do dai canh thu ba: ");
    scanf("%d", &c);
    
    if (a <= 0 || b <= 0 || c <= 0){
        printf("Do dai canh khong hop le!!!\n");
        return 0;
    }
    int condition1 = a + b > c, condition2 = a + c > b, condition3 = b + c > a;
    
    if(condition1 && condition2 && condition3){
        printf("Co the lap thanh mot tam giac");
    } else {
        printf("Khong the lap thanh mot tam giac");
    }

    return 0;
}
