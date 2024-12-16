#include <stdio.h>

int main(){
    int n;
    printf("Nhập vào n: ");
    scanf("%d",&n);
    if ( n % 2 == 0){
        printf("Số %d là số chẵn", n);
    }
    else
    {
        printf("Số %d là số lẻ", n);
    }
}