#include <iostream>
using namespace std;

void LinearSearch(int arr[], int n, int key) {
    bool found = false;  // to track if the element is found

    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break; // stop searching after finding it
        }
    }

    if (!found) {
        cout << "Not Found" << endl;
    }
}

int main() {
    int n, key;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Entered array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter element to be searched: ";
    cin >> key;

    // ✅ Correct function call
    LinearSearch(arr, n, key);

    return 0;
}
