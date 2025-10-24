#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
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

    SelectionSort(arr, n);

    return 0;
}


//12 45 23 51 8

          // example 
            //n = 5 i=0 to 4 j=1 
            //     | Round 1 |
            //i |     |   |   |  |*
            //* |  j  |   |   |  |
            //12| 45  |23 |51 |19| 8

            //  45 < 12 no j++
            //  23<  12 j++
            // 51 <  12 j++
            // 19 <  12  j++
            //  8 < 12 condition not satified so logic appiled
            // in next round i will become i=45 
