#include <stdio.h>

void changeMin(int arr[], int n) {

    int m1 = 0;
    int m2 = -1;

    for (int i = 1; i < n; i++) {
        
        if (arr[i] < arr[m1]) {
            m2 = m1; 
            m1 = i; 
        }
       
        else if (arr[i] < arr[m2] || m2 == -1) {
            if (arr[i] != arr[m1]) { 
                m2 = i; 
            }
        }
    }

    if (m2 != -1) {
        int temp = arr[m1];
        arr[m1] = arr[m2];
        arr[m2] = temp;
    }
}

int main() {
    int arr[] = {3, 2, 1, 4, 0}; //Изменить значение массива чтобы изменить ответ
    int n = sizeof(arr) / sizeof(arr[0]); 

    changeMin(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}