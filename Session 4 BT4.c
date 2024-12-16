#include <stdio.h>

int main()
{
    int thang;
    printf("Nhap thang: ");
    scanf("%d", &thang);
    
    if(thang == 0){
        printf("Thang nhap khong hop le!!!");
        return 0;
    }
    if(thang == 1){
        printf("Thang 1 co 31 ngay");
    }
    if(thang == 2){
        printf("Nam nhuan thi thang 2 co 29 ngay, nam khong nhuan thi thang 2 co 28 ngay");
    }
    if(thang == 3){
        printf("Thang 3 co 31 ngay");
    }
    if(thang == 4){
        printf("Thang 4 co 30 ngay");
    }
    if(thang == 5){
        printf("Thang 5 co 31 ngay");
    }
    if(thang == 6){
        printf("Thang 6 co 30 ngay");
    }
    if(thang == 7){
        printf("Thang 7 co 31 ngay");
    }
    if(thang == 8){
        printf("Thang 8 co 31 ngay");
    }
    if(thang == 9){
        printf("Thang 9 co 30 ngay");
    }
    if(thang == 10){
        printf("Thang 10 co 31 ngay");
    }
    if(thang == 11){
        printf("Thang 11 co 30 ngay");
    }
    if(thang == 12){
        printf("Thang 12 co 31 ngay");
    }

    return 0;
}
