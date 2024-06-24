#include <bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){

        int x;
        cin >> x;

        arr[i] = x;

    }

    cout << "In which index do you want to change element :";
    int x;
    cin >> x;

    int y;
    cout << "What do you want to change :";
    cin >> y;


    arr[x] = y;


    for(int i=0;i<n;i++){
        cout << arr[i];
        if(i!=n-1) cout << ",";
    }



}
