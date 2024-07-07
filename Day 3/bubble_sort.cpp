#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    for(int i =0;i<n;i++){
        cout << i << ":";
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){
            /*
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            */
            int x = arr[j],y = arr[j+1];
            if(x>y){
                arr[j+1] = x;
                arr[j] = y;
            }

        }
    }
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }

}
