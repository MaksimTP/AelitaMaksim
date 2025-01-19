#include <stdio.h> // standart input output

float get_mean(int arr[6]) {
    float mean = 0;
    for (int i = 0; i < 6; i++) { // i += 1
        mean += arr[i];
    }

    mean /= 6;

    return mean;
}

int get_max(int arr[6]) {
    int max_ = arr[0];

    for (int i = 0; i < 6; i++) {
        if (arr[i] > max_) {
            max_ = arr[i];
        }
    }

    return max_;
}

int get_min(int arr[6]) {
    int min_ = arr[0];

    for (int i = 0; i < 6; i++) {
        if (arr[i] < min_) {
            min_ = arr[i];
        }
    }

    return min_;
}

float get_SD(int arr[6]) {
    float sd = 0;
    float mean = get_mean(arr);

    for (int i = 0; i < 6; i++) {
        sd += (i - mean) * (i - mean);
    }

    sd /= 6;

    return sd;
}

void calculate_and_display(int arr[6]) {
    
}

int main() {
    int x[6] = {1,2,3,4,5,6};

    return 0;
}
