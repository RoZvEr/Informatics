#include <iostream>
#include <algorithm>

using namespace std;

bool interpolationSearch(int *arr, int left, int right, int x) {
    if(left==right) {
        if(arr[left]==x) {
            return true;
        }
        return false;

    }else if(left>right) {
        return false;
    }


    //Number between 0 and 1 which makes the division by 2 more accurate
    double k = (double)(x-arr[left])/(double)(arr[right]-arr[left]);
    if(k<0 && k>1) {
        return false;
    }

    int pivot = left+(right-left)*k+0.5;

    if(x==arr[pivot]) {
        return true;
    }else if(x<arr[pivot]) {
        interpolationSearch(arr, left, pivot-1, x);
    }else if(x>arr[pivot]) {
        interpolationSearch(arr, pivot+1, right, x);
    }

}

int main()
{
    //Length of array and number to be searched
    int n, x;

    cin>>n;

    //Array of numbers
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    //Array must be sorted in order to perform interpolation search!
    sort(arr+0, arr+n);

    cin>>x;

    if(interpolationSearch(arr, 0, n, x)) {
        cout<<"Element "<<x<<" was found"<<endl;
    }else {
        cout<<"Element "<<x<<" was not found"<<endl;
    }

    return 0;
}
