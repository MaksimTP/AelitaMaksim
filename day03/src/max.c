#include <stdio.h>
// void
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}


int main() {
    int a,b;
    char c;

    int n = scanf("%d %d%c", &a, &b, &c);
    if (n != 3 || c != '\n') {
        printf("error\n");
        return 0;
    }

    printf("%d", max(a,b));

    return 0;
}