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
    for(int i = 1; i<n; i++)
    {

        int temp = arr[i];
        int j = i-1;
        while(j>= 0 && temp <arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for(auto p:arr)
    {
        cout << p << " ";
    }
}
