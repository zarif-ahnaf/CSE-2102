#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array:";
    cin  >> n;

    int arr[n];
    for(int i =0;i<n;i++){
        cout << "Enter array element " << i+1 << ":";
        cin >> arr[i];
    }
    int data,position;
    cout << "Enter the data you want to insert:";
    cin >> data;
    cout << "Enter the position which you want to insert:";
    cin >> position;

    n=n+1;
    for(int i=n-1;i>position;i--){

        arr[i] = arr[i-1];
    }

    arr[position] = data;

    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }

}
