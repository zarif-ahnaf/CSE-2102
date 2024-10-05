#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter array size:";
    cin >> n;

    int arr[n];
    for(int i =0;i<n;i++){
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }

    cout << "Enter the position you want to delete from:";
    int pos;
    cin>> pos;

    n--;
    for(int i=pos;i<n;i++){
        arr[i] = arr[i+1];
    }

    for(int i =0 ;i <n ; i++){
        cout << arr[i] << " ";
    }

}
