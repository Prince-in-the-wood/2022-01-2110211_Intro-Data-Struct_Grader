#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> name;
    string inp;
    int n;

    cin >> n;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;

        name[inp]++;
    }

    for( auto it = name.begin() ; it != name.end() ; it++ ){
        if( it->second > 1 )
            cout << it->first << " " << it->second << endl;
    }
}
