#include <iostream>

using namespace std;


void hanoi(int n, char from_rod, char temp_rod, char to_rod) {
    if(n==1) {
        cout<<"Move disk 1 from "<<from_rod<<" to "<<to_rod<<endl;
        return;
    }
    hanoi(n-1, from_rod, to_rod, temp_rod);
    cout<<"Move disk "<<n<<" from "<<from_rod<<" to "<<to_rod<<endl;

    hanoi(n-1, temp_rod, from_rod, to_rod);
}

int main()
{
    int n;
    cin>>n;

    hanoi(n, 'A', 'B', 'C');

    return 0;
}
