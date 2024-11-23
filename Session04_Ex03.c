#include <stdio.h>
int main(){
    int n;
    printf("hay nhap so nguyen: ");
    scanf("%d",&n);
    if (n % 3 == 0){
        printf("chia het cho 3\n\r");
    } 
    if (n % 5 == 0){
        printf("chia het cho 5");
    }
    return 0;
}