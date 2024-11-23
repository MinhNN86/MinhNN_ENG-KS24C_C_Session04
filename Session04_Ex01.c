#include <stdio.h>

int main(){
    int n;
    printf("hay nhap so nguyen: ");
    scanf("%d", &n);
    if (n>0){
        printf("so duong");
    } else if (n<0) {
        printf("so am");
    } else {
        printf("la so 0");
    }
    return 0;
}