#include <iostream>

using namespace std;

int main()
{
    int n, pow = 1;

    cin >> n;

    while( pow < n ){
        pow *= 2;
    }

    cout << pow - n;

}
