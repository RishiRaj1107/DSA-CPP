#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Input array
    vector<int> arr = {1, 3, 2, 3, 1};

    // XOR result to find the unique element
    int ans = 0;

    for (int num : arr) {
        ans ^= num;   // XOR cancels duplicate elements
    }

    // Output result
    cout << "Unique element is: " << ans << endl;

    return 0;
}