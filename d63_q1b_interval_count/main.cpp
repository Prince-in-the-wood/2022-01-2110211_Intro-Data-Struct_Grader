#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    vector<int> v;
    int n, m, k;
    int l, r;
    int p;

    cin >> n >> m >> k;

    for( int i = 0 ; i < n ; i++ ){
        cin >> p;
        v.push_back(p);
    }

    sort( v.begin(), v.end() );

    for( int i = 0 ; i < m ; i++ ){
        cin >> p;

        l = lower_bound( v.begin(), v.end(), p - k ) - v.begin();
        r = upper_bound( v.begin(), v.end(), p + k ) - v.begin();

        printf("%d ", r - l );
    }
}
