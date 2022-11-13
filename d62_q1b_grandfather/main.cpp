#include <iostream>
#include <map>

using namespace std;

int main()
{
    // because in normal, cin and cout is to slow
    // so we use these two first line
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; // n is number of relation, m is number of question
    long long int f, s; // f is father, s is son
    long long int a, b; // a, b for check

    map<long long int, long long int> sonToFather;
    map<long long int, long long int> nieceToGrandpa;
    cin >> n >> m;

    for( int i = 0 ; i < n ; i++ ){
        cin >> f >> s;
        sonToFather[s] = f;
    }

    for( auto &x : sonToFather ){
        s = x.first;  //son
        f = x.second; //father

        auto it = sonToFather.find(f);

        if( it != sonToFather.end() ){
            nieceToGrandpa[s] = (*it).second;
        }
    }

    for( int i = 0 ; i < m ; i++ ){
        cin >> a >> b;

        if( a != b
           && nieceToGrandpa.find(a) != nieceToGrandpa.end()
           && nieceToGrandpa.find(b) != nieceToGrandpa.end()
           && nieceToGrandpa[a] == nieceToGrandpa[b] )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
