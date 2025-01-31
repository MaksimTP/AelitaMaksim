#include <iostream> // input output stream
#include <vector>

float get_mean(std::vector<int> arr) {
    float mean = 0;
    for (int i = 0; i < 6; i++) { // i += 1
        mean += arr[i];
    }

    mean /= 6;

    return mean;
}

int get_max(std::vector<int> arr) {
    int max_ = arr[0];

    for (int i = 0; i < 6; i++) {
        if (arr[i] > max_) {
            max_ = arr[i];
        }
    }

    return max_;
}

int get_min(std::vector<int> arr) {
    int min_ = arr[0];

    for (int i = 0; i < 6; i++) {
        if (arr[i] < min_) {
            min_ = arr[i];
        }
    }

    return min_;
}

float get_SD(std::vector<int> arr) {
    float sd = 0;
    float mean = get_mean(arr);

    for (int i = 0; i < 6; i++) {
        sd += (i - mean) * (i - mean);
    }

    sd /= 6;

    return sd;
}

void calculate_and_display(std::vector<int> arr) {
    float mean = get_mean(arr);
    int min_ = get_min(arr);
    int max_ = get_max(arr);
    float SD = get_SD(arr);


    // std::cout
    printf("Mean: %f\n", mean);
    printf("Min: %d\n", min_);
    printf("Max: %d\n", max_);
    printf("SD: %f\n", SD);

}

int main() {
    std::vector<int> x = {1,2,3,4,5,6};
    calculate_and_display(x);
    return 0;
}