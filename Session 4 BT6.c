#include <stdio.h>

int main()
{
    int a, b, sum, tongTien;
    printf("Nhap so cong to dien o dau thang: ");
    scanf("%d", &a);
    printf("Nhap so cong to dien o cuoi thang: ");
    scanf("%d", &b);
    sum = b - a; 
    if (b < a){
        printf("So dien khong hop le");
        return 0;
    }
    
     if(0 <= sum && sum < 50 ){
         tongTien = 10000;
     }
     else if(50 <= sum && sum < 100){
         tongTien = 50 * 10000 + (sum - 50) * 15000;
     }
     else if(100 <= sum && sum < 150){
         tongTien = 50 * 10000 + 50 * 15000 + (sum - 100) * 20000;
     }
     else if(150 <= sum && sum < 200){
         tongTien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (sum - 150) * 25000;
     }
     else{
         tongTien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (sum - 200) * 30000;
     }
    
    printf("Tien dien trung binh trong thang la: %d", tongTien);

    return 0;
}
