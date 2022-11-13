#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int k, n;
    string inp;
    map<string, int> vote;
    map<int, int> result;

    cin >> n >> k;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;
        vote[inp]++;
    }

    for( auto &x : vote ){
        result[x.second]++;
    }

    result[0] = 0;

    int mn = 0;

    auto it = result.end();
    it--;

    for( it ; it != result.begin() ; it-- ){

        if( k <= 0 )
            break;

        mn = it->first;
        k -= it->second;

    }

    cout << mn;
}
