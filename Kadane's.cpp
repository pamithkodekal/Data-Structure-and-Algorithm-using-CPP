// SubArray Concept
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {1, 2, -3, -4, 5};
    int n = 5;

    int current = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        current += arr[i];
        maxSum = max(maxSum, current);

        if (current < 0)
            current = 0;
    }

    cout << "Max Subarray sum = " << maxSum << endl;
    return 0;
}

//--------------------------------------------------------------------
// SubArray Concept
//  #include<iostream>
//  using namespace std;

// int main(){

//     int n = 5;
//     int arr[5]={1,2,3,4,5};

//     for (int st=0; st<n;st++){
//         for (int end=st; end<n ; end++){
//             for(int i = st; i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//-------------------------------------------------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {

//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int maxSum = 0;
    
//     for (int st = 0; st < n; st++)
//     {
//         int current = 0;
//         for (int end = st; end < n; end++)
//         {
//             current += arr[end];
//             cout<<current<<"\n";
//             maxSum= max(current,maxSum);
           

//         }
//     }

//     cout<<"Max Subarray sum="<<maxSum<<endl;
   
//     return 0;
// }