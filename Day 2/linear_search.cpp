#include <bits/stdc++.h>
using namespace std;


int main(){

    cout << "Enter array size:";
    int n;
    cin >> n;


    cout << "Enter array elements:" << endl;
    int a[n];

    for(int i=0;i<n;i++){
        cout << i << ":";
        cin >> a[i];
    }

    cout << "What key do you want to search:";
    int key;
    cin >> key;

    int flag = 0;
    for (int i=0;i<n;i++){
        if(a[i] == key){
            flag = 1;
            cout << "Match is found at" << endl <<"Index :" << i << endl << "Position: " << i+1 <<endl;
        }
        else if(flag == 0 && i == n-1){
            cout << "Match not found" << endl;
        }

    }

}
