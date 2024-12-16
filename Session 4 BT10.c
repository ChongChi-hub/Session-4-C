#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    
    //vd a=14,b=10,c=-2.
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    if(b > c){
        int temp = b;
        b = c;
        c = temp;
    } 
    //hoan doi xong co the so a van lon hon so b.
    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    //neu co truong hop nhap 2 hoac 3 so giong nhau
    if (a == b && b == c){
        printf("Ban da nhap 3 so giong nhau");
    } else if (a == b || b == c || a == c){
        printf("Ban da nhap 2 so giong nhau");
    }else {
        printf("So sap xep theo thu tu tang dan la: %d, %d, %d", a, b, c);
    }
    
    return 0;
}
