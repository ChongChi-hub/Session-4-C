#include <stdio.h>

int main()
{
    int ngay, thang, nam;
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    
    //kiem tra nam nhuan nam khong nhuan.
    int namNhuan = (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
    int soNgayTrongThang = 0;
    
    switch (thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        soNgayTrongThang = 31;
        break;
        
        case 2 :
        if(namNhuan){
            soNgayTrongThang = 29;
        } else {
            soNgayTrongThang = 28;
        }
        break;
        
        case 4: case 6: case 9: case 11:
        soNgayTrongThang = 30;
        break;
        
        default :
        soNgayTrongThang = 0;
    }
    
    if (nam < 1){
        printf("Nhap nam khong hop le!!!\n");
    } else if(thang < 1 || thang > 12){
        printf("Nhap thang khong hop le!!!\n");
    } else if(ngay < 1 || ngay > soNgayTrongThang){
        printf("Nhap ngay khong hop le!!!\n");
    } else {
        printf("Ngay %d-%d-%d la ngay hop le!!!\n", ngay, thang, nam);
    }
    
    return 0;
}
