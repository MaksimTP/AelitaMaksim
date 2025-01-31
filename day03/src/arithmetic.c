#include <stdio.h>

int main() {
    int a,b;
    char c;

    int n = scanf("%d %d%c", &a, &b, &c);
    if (n != 3 || c != '\n') {
        printf("error\n");
        return 0;
    } // &&
    int sum_ = a + b;
    int sub_ = a - b;
    int prod_ = a * b;
    printf("%d %d %d ", sum_, sub_, prod_);
    
    if (b == 0) {
        printf("n/a");
    } else {
        printf("%d", a / b);
    }


    return 0;
}