#include <iostream>
#include <algorithm>

using namespace std;

//Simple swap between two values
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    //Initialize variables
    int n;
    cin>>n;
    int temp;
    int arr[n];

    //Input of array
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    //Insertion sort
    for(int i=1; i<n; i++) {
        for(int j=i-1; j>=0; j--) {
            if(arr[j]<arr[j+1]) {
                break;
            }
            if(arr[j+1]<=arr[j]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    //Output of array
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
