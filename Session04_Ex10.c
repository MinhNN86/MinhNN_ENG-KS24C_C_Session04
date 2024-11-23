#include <stdio.h>
int main(){
    // bien nho de doi so
    int a, b, c, bienNho; 
    printf("nhap so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
        bienNho = a;
        a = b;
        b = bienNho;
    }
    if (b > c){
        bienNho = b;
        b = c;
        c = bienNho;
    }
    if (a > b){
        bienNho = a;
        a = b;
        b = bienNho;
    }
    
    printf("so da sap xep la: %d %d %d", a, b, c);
    return 0;
}