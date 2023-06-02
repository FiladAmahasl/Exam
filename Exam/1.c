#include <stdio.h>


int isPalindrom(int num) {
    int rnum = 0; 
    while (num != 0) {
        rnum = rnum * 10 + num % 10;
        num /= 10;  
    }

    if (rnum == num) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int test_num = 111; // Тут надо поменять число, чтобы получить ответ
    int res = isPalindrom(test_num); 

    if (res == 1) {
        printf("The number %d is not a palindrome\n", test_num);
    } else {
        printf("A number %d is a palindrome\n", test_num);
    }

    return 0;
}