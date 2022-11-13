#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    vector<int> s;
    int n, m, a, b;
    cin >> n >> m;

    for( int i = 0 ; i < n ; i++ ){
        cin >> a >> b;
        s.push_back(a); // the begin one is always even
        s.push_back(b); // the last one is always odd
    }

    sort( s.begin(), s.end());

    for( int i = 0 ; i < m ; i++ ){
        cin >> a;

        int po = lower_bound(s.begin(), s.end(), a) - s.begin(); // s[po] is equal or more

        if( po % 2 == 0 && s[po] != a )
            printf("0 ");
        else
            printf("1 ");

    }
}
