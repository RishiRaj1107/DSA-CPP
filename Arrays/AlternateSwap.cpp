#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 7, 8, 5};
    int n = 5;

    // Swap alternate elements safely
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}