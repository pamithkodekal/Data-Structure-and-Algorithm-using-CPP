#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i= 0; i<n ; i++){
        for( int j = 0; j<n-i-1; j++){
            if( arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        } 
     
    }
     
    cout<<"Sorted Array Using Bubble Sort Is : ";
    for( int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}



//29 32 12 46 -1




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

   BubbleSort(arr, n);

    return 0;
}

/*
In this Sort The sorting is done with adjucent elements
using n-i
example:  29 32 12 46 -1
    5-0                5-1            5-2                 5-3
| 29 32 12 46 -1 || 29 12 32 -1 46 || 12 29 -1 32 46||-1 12 29 32 46 |
| 29 32 12 46 -1 || 12 29 32 -1 46 || 12 -1 29 32 46||-1 12 29 32 46 |
| 29 12 32 46 -1 || 12 29 -1 32 46 || 12 -1 29 32 46||               |
| 29 12 32 46 -1 || 12 29 -1 32 46 ||               ||               |
| 29 12 32 -1 46 ||                ||               ||               |
*/
