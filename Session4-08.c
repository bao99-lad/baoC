#include <stdio.h>

int main(){
    int a, b, c;
    printf("Nhập vào cạnh 1: ");
    scanf("%d", &a);
    printf("Nhập vào cạnh 2: ");
    scanf("%d", &b);
    printf("Nhập vào cạnh 3: ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Là 3 cạnh tam giác");
    }
    else{
        printf("Không phải 3 cạnh tam giác");
    }
    
}