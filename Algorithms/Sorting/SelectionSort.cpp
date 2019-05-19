#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int smallest, temp, smID;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        smallest = arr[i];
        for(int j=i; j<n; j++) {
            if(arr[i]>arr[j] || arr[i]==arr[j]) {
                smallest = arr[j];
                smID = j;
            }
        }
        temp = arr[i];
        arr[i] = smallest;
        arr[smID] = temp;
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
