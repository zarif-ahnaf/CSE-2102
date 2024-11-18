#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the array size:" ;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[min]) min = j;
        }
        if(min != i ){
            int temp = arr[i];
            int temp_2 = arr[min];
            arr[min] = temp;
            arr[i] = temp_2;
        }
    }

    for(auto p:arr)
    {
        cout << p << " ";
    }
}
