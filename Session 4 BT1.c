#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    
    if(n > 0) {
        printf("%d la so duong", n);
    }    else {
        printf("%d la so am", n);
    } 
    

    return 0;
}
