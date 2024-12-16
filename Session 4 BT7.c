#include <stdio.h>

int main()
{
    int nam;
    printf("Nhap so nam muon kiem tra: ");
    scanf("%d", &nam);
    
    //Năm nhuận là:Năm chia hết cho 4 nhưng không chia hết cho 100 hoặc năm chia hết cho 400.
    if (nam <= 0){
        printf("So nam khong hop le!!!");
        return 0;
    }
    int condition1 = nam % 4 == 0 && nam % 100 != 0;
    int condition2 = nam % 400 == 0;
    if (condition1 || condition2){
        printf("%d la nam nhuan\n", nam);
    } else {
        printf("%d la nam khong nhuan\n", nam);
    }

    return 0;
}
