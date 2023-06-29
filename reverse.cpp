#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     void rotateArr(int arr[], int d, int n)
     {
        for (int i = d; i < n; i++)
            cout << arr[i] << " ";
        for (int i = 0; i < d; i++)
            cout << arr[i] << " ";

        cout << endl;
     }
};
//main function
int main()
{
    int t;
    // taking testcases
    cout<<"Enter the Testcases : ";
    cin >> t;

    while (t--)
    {
        int n, d;

        // input n and d
        cout<<"Enter the size of array and value of d :\n";
        cin >> n >> d;

        int arr[n];

        // inserting elements in the array
        cout<<"Enter the elements of array :\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d, n);

        // printing the elements of the array
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    }
    return 0;
}