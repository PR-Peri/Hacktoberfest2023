#include <iostream>

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    std::cout << "Maximum element: " << max << std::endl;
    std::cout << "Minimum element: " << min;
    
    return 0;
}
