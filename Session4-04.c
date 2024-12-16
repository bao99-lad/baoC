#include <stdio.h>

int main(){
    int day, month;
    printf("Nhập vào tháng: ");
    scanf("%d", &month);
    if (thang < 1 || thang > 12) 
    {
        printf("Tháng không hợp lệ");
    }
    else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
    {
        printf("Tháng %d có 31 ngày", thang);
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        printf("Tháng %d có 30 ngày", thang);
    }
    else
    {
        printf("Tháng %d có 28 ngày", thang);
    }
}