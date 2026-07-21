#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float average;

    // Accept the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int *arr = new int[n];

    // Accept array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    // Release dynamically allocated memory
    delete[] arr;
    arr = nullptr;

    return 0;
}

