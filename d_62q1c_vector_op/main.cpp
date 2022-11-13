#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    vector<int> v;
    string cmd;
    int q, inp;

    cin >> q;

    for( int i = 0 ; i < q ; i++ ){
        cin >> cmd;

        if( cmd == "pb" ){
            cin >> inp;
            v.push_back(inp);

        }else if( cmd == "sa"){
            sort( v.begin(), v.end() );

        }else if( cmd == "sd" ){
            sort( v.begin(), v.end() );
            reverse( v.begin(), v.end() );

        }else if( cmd == "r" ){
            reverse( v.begin(), v.end() );

        }else if( cmd == "d" ){
            cin >> inp;
            v.erase( v.begin() + inp );
        }


    }

    for( auto i = v.begin() ; i != v.end() ; i++ )
        cout << *i << " ";
}
