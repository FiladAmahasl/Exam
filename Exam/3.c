#include <stdio.h>

int main() {
    int n; 
    float cot = 0.0f; 
    float suma = 0.0f; 
    
    scanf("%d", &n);
    while (n != 0) { 
        if (n % 10 == 3) { 
            suma += n; 
            cot++; 
        }
        scanf("%d", &n); 
    }
    
    if (cot > 0) { 
        float avg = suma / cot;
        printf("%.1f\n", avg); 
    }
    return 0; 
}