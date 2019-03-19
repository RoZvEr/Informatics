#include <iostream>

using namespace std;
int partitionArr(int arr[], int left, int right, int pivot) {
    int temp;
    while(left<=right) {
        while(arr[left]<pivot) {
            left++;
        }
        while(arr[right]>pivot) {
            right--;
        }
        if(left<=right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }

    }
    return left;
}
void quickSortLR(int arr[], int left, int right) {
    if(left>=right) {
        return;
    }
    int pivot = arr[(left+right)/2];
    int index = partitionArr(arr, left, right, pivot);
    quickSortLR(arr, left, index-1);
    quickSortLR(arr, index, right);
}
void quickSort(int arr[], int n) {
    quickSortLR(arr, 0, n-1);
}


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    quickSort(arr, n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}
