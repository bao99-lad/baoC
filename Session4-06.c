#include <stdio.h>

int main(){
    float chisocu, chisomoi, sodien, giadien;
    printf("Nhập chỉ số cũ: ");
    scanf("%f", &chisocu);
    printf("Nhập chỉ số mới: ");
    scanf("%f", &chisomoi);
    sodien = chisomoi - chisocu;
    if (sodien < 0)
    {
        printf("Số điện không hợp lệ");
    }
    else if (sodien > 0 && sodien < 50){
        giadien = sodien * 10000;
    }
    else if (sodien >= 50 && sodien < 100){
        giadien = (49 * 10000) + (sodien - 49) * 15000;
    }
    else if (sodien >= 100 && sodien < 150){
        giadien = (49 * 10000) + (50 * 15000) + (sodien - 99) * 20000;
    }
    else if (sodien >= 150 && sodien < 200){
        giadien = (49 * 10000) + (50 * 15000) + (50 * 20000) + (sodien - 149) * 25000;
    }
    else
    {
        giadien = (49 * 10000) + (50 * 15000) + (50 * 20000) + (50 * 25000) + (sodien - 199) * 30000;
    }
    printf("Tiền điện tiêu thụ trong tháng là: %.2f", giadien);
}