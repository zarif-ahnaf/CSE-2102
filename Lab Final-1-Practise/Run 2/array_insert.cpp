#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter array size:";
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout << "Enter element " << i+1 << " :";
        cin >> arr[i];
    }


    cout << "Enter the position you want to insert in:";
    int pos,data;
    cin>> pos;

    cout << "Enter the data you want to insert:";
    cin >> data;

    n=n+1;
    for(int i= n-1;i!=pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = data;

    for(int i =0 ;i <n ; i++){
        cout << arr[i] << " ";
    }

}
