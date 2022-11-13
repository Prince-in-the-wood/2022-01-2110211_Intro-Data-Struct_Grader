#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> word;
    string inp, key;
    int n, mx = 0;

    cin >> n;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;
        word[inp]++;
    }

    for( auto &x : word ){

        if( x.second >= mx ){
            mx = x.second;
            key = x.first;
        }
    }

    cout << key << " " << mx;
}
