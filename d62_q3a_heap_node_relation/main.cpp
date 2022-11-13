#include <iostream>

using namespace std;

bool findAncestor( int child, int parent ){
    while( child >= parent ){
        if( child == parent )
            return true;
        child = ( child - 1 ) / 2;
    }

    return false;
}

int main()
{
    int n, m;
    int a, b;

    cin >> n >> m;

    for( int i = 0 ; i < m ; i++ ){
        cin >> a >> b;

        if( a == b ){
            cout << "a and b are the same node\n";
        }else if( a > b ){
            if( findAncestor( a, b ) )
                cout << "b is an ancestor of a\n";
            else
                cout << "a and b are not related\n";
        }else{
            if( findAncestor( b, a ) )
                cout << "a is an ancestor of b\n";
            else
                cout << "a and b are not related\n";
        }

    }

}
