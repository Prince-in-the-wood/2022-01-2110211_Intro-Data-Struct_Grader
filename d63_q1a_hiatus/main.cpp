#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    vector<pair<int, int>> v;
    vector<pair<int, int>>::iterator it;
    pair<int, int> p;
    int n, m;
    int idx;
    int year, month;

    cin >> n >> m;

    for( int i = 0 ; i < n ; i++ ){
        cin >> year >> month;
        v.push_back({year, month});
    }

    sort( v.begin(), v.end() );

    for( int i = 0 ; i < m ; i++ ){
        cin >> year >> month;

        p = {year, month};

        it = lower_bound( v.begin(), v.end(), p );

        if( it->first == year && it->second == month ){
            cout << "0 0 ";
        }else{
            if( it == v.begin() )
                cout << "-1 -1 ";
            else{
                it--;
                cout << it->first << " " << it->second << " ";
            }
        }
    }

}
