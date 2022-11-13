#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, inp;
    vector<int> A;
    bool ck[2000001];

    cin >> n >> m;

    for( int i = 0 ; i < 2000000 ; i++ )
        ck[i] = false;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;
        A.push_back(inp);
    }

    sort( A.begin(), A.end() );

    for( int i = 0 ; i < A.size() ; i++ ){

        if( i - 1 >= 0 && A[i-1] == A[i] ){
            ck[ A[i] * 2 ] = true;
            continue;
        }

        for( int j = i + 1 ; j < A.size() ; j++ )
            ck[ A[j] + A[i] ] = true;
    }

    for( int i = 0 ; i < m ; i++ ){

        cin >> inp;

        if( ck[inp] )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}
