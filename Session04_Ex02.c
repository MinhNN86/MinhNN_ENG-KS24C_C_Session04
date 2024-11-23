#include <stdio.h>
int main(){
    int n;
    printf("hay nhap so nguyen: ");
    scanf("%d", &n);
    
    if (n % 2 == 0){
        printf("so chan");
    } else {
        printf("so le");
    }
    return 0;
}