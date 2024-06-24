#include <bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }


    cout << "In which index do you want to insert :";
    int pos;
    cin >> pos;

    n = n+1;

    if(pos>n){
        cout << "Index Out of range" <<endl;
        return 0;
    }

    cout << "What do you want to insert :";
    int k;
    cin >> k;


    for(int i=n-1;i!=pos;i--){
        arr[i] = arr[i-1];

    }
    arr[pos] = k;




    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
        //if(i!=n) cout << ",";
    }
}
