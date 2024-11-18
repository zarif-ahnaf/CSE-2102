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
    int key;
    cout << "Enter Key:";
    cin >> key;

    int first = 0;
    int last = n-1;

    while(first <= last){
        int mid = (first + last)/2;

        if(arr[mid] == key){
            cout << "Element found"<<endl;
            break;
        }
        else if (key > arr[mid]) first = mid+1;
        else if (key < arr[mid]) last = mid-1;


    }

}
