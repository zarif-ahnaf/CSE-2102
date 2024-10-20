#include <iostream>

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high, int pivot){
    int i = low;
    int j = low;

    while (i <= high) {
        if (arr[i] > pivot) {
            i++;
        }else {
            swap(arr, i, j);
            j++;
            i++;
        }
    }

    return j - 1;
}

void quickSort(int arr[], int i, int j) {
    if(i < j){
        int pivot = arr[j];
        int pos = partition(arr, i, j, pivot);

        quickSort(arr, i, pos -1);
        quickSort(arr, pos + 1, j);
    }
}

int main() {
    int n;

    std::cout << "Insert size:\n";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) std::cin >> arr[i];

    quickSort(arr, 0, n-1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";

    return 0;
}
