#include <stdio.h>

int ucln(int a, int b);


int main() {
    int a, b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
   
    int ket_qua = ucln(a, b);
   
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ket_qua);

    return 0;
}


int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
