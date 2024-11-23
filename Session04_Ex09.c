#include <stdio.h>
int main(){
    int ngay, thang, nam;
    printf("nhap ngay, thang, nam: ");
    scanf("%d %d %d", &ngay, &thang, &nam);
    switch (thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (ngay <= 31){
            break;
        } else {
            printf("nhap sai ngay");
            return 1;
        }
        case 4: case 6: case 9: case 11:
        if (ngay <= 30){
            break;
        } else {
            printf("nhap sai ngay");
            return 1;
        }
        case 2:
        if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)){
                if (ngay <= 29){
                   break; 
                } else {
                    printf("nhap sai ngay");
                    return 1;
                }
        } else {
            if (ngay <= 28){
                break;
            } else {
                printf("nhap sai ngay");
                return 1;
            }
        } 
        break;
        default:
        if (ngay > 31){
            printf("nhap sai ngay");
        }
        printf("\nnhap sai thang");
        return 1;
    }
    printf("ngay %d thang %d nam %d", ngay, thang, nam);
    return 0;
}