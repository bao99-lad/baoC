#include <stdio.h>

int main(){
    int year;
    printf("Nhập vào số năm: ");
    scanf("%d", &year);
    if (year < 0){
        printf("Số năm không hợp lệ");
    }
    else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d là năm nhuận", year);
    }
    else
    {
        printf("%d không phải là năm nhuận", year);
    }
}