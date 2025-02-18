#include <stdio.h>
#include <math.h>

// 7e-3 -> 7 * 10^(-3)
// 5e10 -> 5 * 10^(10)

// pow(10, 3) -> 10^3
// pow(11, 1.5) -> 11^(1.5)

// double
// float

// 5 / 3 -> 1
// 5.0 / 3 -> 1.66
// 5 / 3.0 -> 1.66

float important_function(float x) {
    return 7 * powf(10, -3) * powf(x, 4) + ((22.8 * powf(x, 0.33) - 1000) * x + 3) / (x * x / 2) - x * powf(10 + x, 2 / x) - 1.01;
}

int main() {
    return 0;
}