#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter Array size:";
    int n;

    cin >> n;
    int arr[n];

    for(int i =0;i<n;i++){
        cout << "Enter element at position " << i+1 << " :";
        cin >> arr[i];
    }


    cout << "At which position do you want to delete:";
    int pos;
    cin >> pos;

    n=n-1;

    for(int i =pos;i<n;i++){
        arr[i] = arr[i+1];
    }

    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }

}
