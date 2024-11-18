#include <bits/stdc++.h>
using namespace std;

void swap(int arr[],int first,int second){
    int _first = arr[first];
    int _second = arr[second];
    arr[second] = _first;
    arr[first] = _second;
}
int partition(int arr[],int low,int high,int pivot){
    int i = low;
    int j = low;
    while(i<= high){
        if(arr[i]>pivot){
            i++;
        }else{
            swap(arr,i,j);
            i++;
            j++;

        }
    }
    return j-1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = arr[high];
        int pos = partition(arr,low,high,pivot);
        quickSort(arr,low,pos-1);
        quickSort(arr,pos+1,high);
    }

}


int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);

    for(auto p:arr)
    {
        cout << p << " ";
    }

}
