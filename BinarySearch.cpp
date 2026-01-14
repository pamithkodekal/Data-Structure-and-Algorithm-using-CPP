#include <iostream>
using namespace std;

void BinarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int mid;

    while (low <= high)
    { //20 21 22 24 26
        mid = (low + high) / 2;

        if (key == arr[mid])
        {
            cout << "Found at index: " << mid << endl;
            return;   
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

  
    cout << "Not Found" << endl;
}


int main()
{
    int n, key;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter element to be searched: ";
    cin >> key;

    // ✅ Correct function call
    BinarySearch(arr, n, key);

    return 0;
}
