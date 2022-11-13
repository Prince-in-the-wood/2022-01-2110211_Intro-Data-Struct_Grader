#include <iostream>

using namespace std;

int main()
{
    int arr[110][110];
    int n, m;
    int r;

    cin >> n >> m;
    cin >> r;

    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ )
            cin >> arr[i][j];
    }

    int r1, c1, r2, c2;


    for( int k = 0 ; k < r ; k++ ){
        cin >> r1 >> c1 >> r2 >> c2;

        if( r1 > r2 || c1 > c2 ){
            cout << "INVALID" << endl;
            continue;
        }

        if( r1 > n || c1 > m || r2 <= 0 || c2 <= 0 ){
            cout << "OUTSIDE" << endl;
            continue;
        }

        if( r1 <= 0 )
            r1 = 1;

        if( r2 > n )
            r2 = n;

        if( c1 <= 0 )
            c1 = 1;

        if( c2 > m )
            c2 = m;

        int mx = arr[r1-1][c1-1];

        for( int i = r1 - 1 ; i < r2 ; i++  ){

            for( int j = c1 - 1 ; j < c2 ; j++ )
                mx = max( mx , arr[i][j]);
        }

        cout << mx << endl;

    }



    return 0;
}
