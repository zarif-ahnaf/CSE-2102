#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the array size:" ;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){
            int x = arr[i];
            int y = arr[j];
            if(x<y){
                arr[j] = x;
                arr[i] = y;
            }
        }
    }
    for(auto p:arr){
        cout << p << " ";
    }
}
