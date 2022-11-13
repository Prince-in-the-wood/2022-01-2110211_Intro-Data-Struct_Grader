#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    int inp;
    vector<int> v1, v2;

    cin >> n >> m;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;
        v1.push_back(inp);
    }

    for( int i = 0 ; i < m ; i++ ){
        cin >> inp;
        v2.push_back(inp);
    }

    sort( v1.begin(), v1.end() );
    sort( v2.begin(), v2.end() );

    int i, j = 0;

    for( i = 0 ; i < n ; i++ ){

        if( i - 1 >= 0 && v1[i-1] == v1[i] )
            continue;

        for( j ; j < m ; j++ ){
            if( v1[i] < v2[j] ) //if the minimum value of v2 is more than v1[i] then continue
                break;

            if( v1[i] == v2[j] ){
                cout << v1[i] << " ";
                break;
            }
        }

    }

}
