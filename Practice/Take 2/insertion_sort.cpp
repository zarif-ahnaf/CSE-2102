#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[ ] = {1,4,2};
    int n = 3;
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j =  i-1;
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;


    }
    for(auto p: arr){
        cout << p << " ";
    }
}
