#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, m, l;
    int i, j;
    int inp;

    string pwd;

    vector<int> change;
    set<string> pwds;

    cin >> n >> m >> l;

    for( i = 0 ; i < l ; i++ ){
        cin >> inp;
        inp %= ( 'z' - 'a'  + 1 );
        change.push_back( inp );
    }

    for( i = 0 ; i < n ; i++ ){
        cin >> pwd;

        for( j = 0 ; j < l ; j++ ){
            if( pwd[j] - change[j] < 'a' ){
                pwd[j] = 'z' - ( change[j] - ( pwd[j] - 'a' + 1 ));
            }else{
                pwd[j] -= change[j];
            }
        }

        pwds.insert(pwd);
    }

    for( i = 0 ; i < m ; i++ ){
        cin >> pwd;

        if( pwds.find(pwd) != pwds.end() )
            cout << "Match\n";
        else
            cout << "Unknown\n";
    }
}
