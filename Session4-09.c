#include <stdio.h>

int main(){
    int day, month, year;
    printf("Nhập vào ngày: ");
    scanf("%d", &day);
    if (day < 0 || day > 31){
        printf("Ngày nhập vào không hợp lệ");
        return 1;
    }
    printf("Nhập vào tháng: ");
    scanf("%d", &month);
    if (month < 0 || month > 12){
        printf("Tháng nhập vào không hợp lệ");
        return 1;
    }
    printf("Nhập vào năm: ");
    scanf("%d", &year);
    if (year < 0){
        printf("Năm nhập vào không hợp lệ");
        return 1;
    }
    else
    {
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31)
        {
            printf("Ngày Tháng Năm nhập vào hợp lệ");
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
        {
            printf("Ngày Tháng Năm nhập vào hợp lệ");
        }
        else if (month == 2)
        {
            if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && day <= 29)
            {
                printf("Ngày Tháng Năm nhập vào hợp lệ");
            }
            else if (day <= 28)
            {
                printf("Ngày Tháng Năm nhập vào hợp lệ");
            }
            else
            {
                printf("Ngày Tháng Năm nhập vào không hợp lệ");
            }
        }
        else
        {
            printf("Ngày Tháng Năm nhập vào không hợp lệ");
        }
    }
}