#include <iostream>

using namespace std;

int main()
{
    int sqrtNum = 0;
    long long n;
    long long numbers[100][100];

    cin>>n;

    for(int i=2; i<n; i++) {
        for(int j=0; j<=i-1; j++) {
            if(i*i-j*j==n) {
                sqrtNum++;
                numbers[0][sqrtNum-1] = i*i;
                numbers[1][sqrtNum-1] = j*j;
                continue;
            }
        }
    }

    if(sqrtNum>0) {
        cout << sqrtNum << endl;
        for(int d=0; d<sqrtNum; d++) {
            cout << numbers[0][d] << " " << numbers[1][d]<<endl;;
        }
    }else {
        cout << "0" << endl;
    }

    return 0;
}