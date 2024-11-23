#include <stdio.h>

int main(){
    int nam;
    printf("Hay nhap nam: ");
    scanf("%d", &nam);
    if((nam % 4 == 0 && nam % 100 != 0) || ( nam % 400 == 0)){
        printf("nam nhuan");
    } else {
        printf("nam khong nhuan");
    }
    return 0;
}