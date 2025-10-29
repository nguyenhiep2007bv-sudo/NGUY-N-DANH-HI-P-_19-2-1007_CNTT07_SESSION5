#include<stdio.h>
#include<math.h>


int main(){

    float sodien, tienbacthang = 0, phuphi = 0, tiendien = 0;
    int loaiho;

    
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &sodien);

    printf("Chon loai ho tieu dung:\n");
    printf("1. Ho gia dinh\n");
    printf("2. Ho kinh doanh\n");
    printf("3. Ho san xuat\n");
    printf("Nhap lua chon (1-3): ");
    scanf("%d", &loaiho);

   
    if (sodien <= 50) {
        tienbacthang = sodien * 1500;
    } else if (sodien <= 100) {
        tienbacthang = 50 * 1500 + (sodien - 50) * 2000;
    } else if (sodien <= 200) {
        tienbacthang = 50 * 1500 + 50 * 2000 + (sodien - 100) * 2500;
    } else {
        tienbacthang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (sodien - 200) * 3000;
    }

   
    if (loaiho == 1) {           
        phuphi = tienbacthang * 0.05;
    } else if (loaiho == 2) {     
        phuphi = tienbacthang * 0.10;
    } else if (loaiho == 3) {     
        phuphi = tienbacthang * 0.08;
    } else {
        printf("Loai ho khong hop le!\n");
        return 0;
    }

    
    tiendien = tienbacthang + phuphi;

    
    
    printf("Tong tien dien: %.2f VND\n", tiendien);

    return 0;
}



