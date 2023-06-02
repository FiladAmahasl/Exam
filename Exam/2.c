#include <stdio.h>


float sumFoo(int n) {
    float suma = 0.0f;
    for (int i = 2; i <= n; i++) {
        suma += 1.0f / ((i - 1) * i);
    }
    suma += 1.0f;
    return suma;
}


int main() {
    int n = 10; //Чтобы изменить ответ, нужно здесь поменять число
    float res = sumFoo(n);
    printf("%f\n", res);
    return 0;
}