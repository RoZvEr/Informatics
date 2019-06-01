#include <iostream>

using namespace std;

//Bin search
bool binSearch(int arr[], int n, int x) {
    int left = 0;
    int right = n-1;

    while(left<=right) {
        int mid = left+(right-left)/2;

        if(arr[mid]==x) {
            return true;
        }else if(arr[mid]>x) {
            left = mid+1;
        }else if(arr[mid]<x) {
            right = mid-1;
        }
    }

    return false;
}


//Bin search recursive
bool binSearchRecursive(int arr[], int n, int x, int left, int right) {

    if(left>right) {
        return false;
    }

    int mid = left+(right-left)/2;

    if(arr[mid]==x) {
            return true;
    }else if(arr[mid]>x) {
            binSearchRecursive(arr, n, x, mid+1, right);
    }else if(arr[mid]<x) {
            binSearchRecursive(arr, n, x, left, mid-1);
    }
}



int main()
{
    //Size of array and the number we are searching
    int n, x;
    cin>>n;

    //Array of sorted numbers
    int arr[n];

    //Input of array
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    //Input of searched number
    cin>>x;

    //Binary search with while loop and recursive binary search
    cout<<binSearch(arr, n, x)<<" "<<binSearchRecursive(arr, n, x, 0, n-1);

    return 0;
}
