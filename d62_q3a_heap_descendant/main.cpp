#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n, a;

    vector<int> v;
    queue<int> q;

    cin >> n >> a;

    q.push(a);

    while( !q.empty() ){

        v.push_back( q.front() );

        if( 2*q.front() + 1 < n ){
            q.push( 2*q.front() + 1 );
        }

        if( 2 * q.front() + 2 < n ){
            q.push( 2*q.front() + 2 );
        }

        q.pop();
    }

    cout << v.size() << "\n";

    for( int i = 0 ; i < v.size() ; i++ ){
        cout << v[i] << " ";
    }


}
