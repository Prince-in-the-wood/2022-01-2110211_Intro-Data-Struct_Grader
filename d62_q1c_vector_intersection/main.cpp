#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s1, s2;
    int n, m;
    int inp;

    cin >> n >> m;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;
        s1.insert( inp );
    }

    for( int i = 0 ; i < m ; i++ ){
        cin >> inp;
        s2.insert( inp );
    }

    for( auto &x : s1 ){
        if( s2.find(x) != s2.end() ){
            cout << x << " ";
        }
    }
}
