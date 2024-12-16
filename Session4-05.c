#include <stdio.h>

int main(){
    int a, b, c;
    printf("Nhập vào số thứ 1: ");
    scanf("%d", &a);
    printf("Nhập vào số thứ 2: ");
    scanf("%d", &b);
    printf("Nhập vào số thứ 3: ");
    scanf("%d", &c);
    if (c > a && c < b || c > b && c < a)
    {
        printf("Số thứ 3 nằm giữa hai số thứ 1 và 2");
    }
    else
    {
        printf("Số thứ 3 không nằm giữa hai số thứ 1 và 2");
    }
}