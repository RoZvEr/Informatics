#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int rowToStart = 1;
    int currNum = 1;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            arr[i][j]=-1;
        }
    }

    for(int i=0; i<n; i++) {
        arr[i][i]=0;
    }
    for(int column=0; column<n; column++) {
        for(int row=rowToStart; row<n; row++) {
            if(row==column) {
                break;
            }
            arr[row][column]=currNum;
            currNum++;
        }
        rowToStart++;
    }
    for(int column=n-1; column>=0;column--) {
        for(int row = n-1; row>=0; row--) {
            if(arr[row][column]==-1) {
                arr[row][column]=currNum;
                currNum++;
            }
        }
    }



    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<""<<endl;
    }





    return 0;
}
