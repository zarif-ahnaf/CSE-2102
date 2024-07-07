#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout << "Enter the size of the array:" ;
    cin >> n;

    int arr[n];
    for (int i =0 ;i<n;i++)
        cin >> arr[i];

    int key;
    cout << "Enter the element you want to search:";
    cin >> key;

    int first=0;
    int last = n-1;

    while(first <= last){
        int mid = (first+last)/2;

        if(arr[mid] == key){
             cout << "Match found at index: " << mid;
             break;
        }
        else if (arr[mid] > key) last = mid-1;
        else if (arr[mid] < key) first = mid+1;

    }
}
