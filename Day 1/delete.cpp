#include<bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "In which index do you want to delete an element: ";
    int index;
    cin >> index;

    if (index > n){
        cout << "Index out of range" << endl;
        return 0;
    }

    n = n-1;


    for(int i = index;i<n;i++){
      arr[i] = arr[i+1];
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

