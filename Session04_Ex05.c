#include <stdio.h>
int main(){
    int a, b, c;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    if ((a <= c && c <= b) || (b <= c && c <= a)){
        printf("so thu 3 nam giua 2 so");
    } else {
        printf("so thu 3 khong nam giua 2 so");
    }
    return 0;
}