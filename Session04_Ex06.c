#include <stdio.h>
int main(){
    int soDienDauThang, soDienCuoiThang, soDienDaSuDung, tienDienTieuThu;
    printf("so dien dau thang la: ");
    scanf("%d", &soDienDauThang);
    printf("so dien cuoi thang la: ");
    scanf("%d", &soDienCuoiThang);
    soDienDaSuDung = soDienCuoiThang - soDienDauThang;
    if(soDienDaSuDung >= 0){
    if(0 <= soDienDaSuDung && soDienDaSuDung < 50){
        tienDienTieuThu = soDienDaSuDung * 10000;
    } else if ( 50 <= soDienDaSuDung && soDienDaSuDung < 100){
        tienDienTieuThu = soDienDaSuDung * 15000;
    } else if ( 100 <= soDienDaSuDung && soDienDaSuDung < 150){
        tienDienTieuThu = soDienDaSuDung * 20000;
    } else if ( 150 <= soDienDaSuDung < 200){
        tienDienTieuThu = soDienDaSuDung * 25000;
    } else {
        tienDienTieuThu = soDienDaSuDung * 30000;
    }
    printf("Tien dien tieu thu trong thang la: %d", tienDienTieuThu);
    } else {
        printf("ban da nhap sai, vui long nhap lai.");
    }
    return 0;
}