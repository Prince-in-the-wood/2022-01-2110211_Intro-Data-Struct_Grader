#include <iostream>

using namespace std;

int main()
{
    long long int n, k;
    long long int nw = 1, pw = 1;
    long long int ans = 0;

    cin >> n >> k;

    if( k == 1 )
        ans = n - 1;
    else{
        while( nw < n ){
            pw *= k;
            nw += pw;
            ans++;
        }
    }

    cout << ans;
}
