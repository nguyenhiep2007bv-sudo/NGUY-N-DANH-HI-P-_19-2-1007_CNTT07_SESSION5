#include<stdio.h>
#include<math.h>


int main(){
	float a, b;
    char toantu;

    printf("Nhap so thu nhat: ");
    scanf("%f", &a);

    printf("Nhap so thu hai: ");
    scanf("%f", &b);

    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &toantu); 

    switch (toantu) {
        case '+':
            printf("Ket qua: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("Ket qua: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("Ket qua: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0)
                printf("Loi: Khong the chia cho 0\n");
            else
                printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, a / b);
            break;
        default:
            printf("Loi: Toan tu khong hop le\n");
            break;
    }

    return 0;

}

