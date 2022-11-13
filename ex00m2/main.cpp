#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int main()
{
    map< int, map<int, int>> price;
    map< int, vector<int>> user;
    vector<int> good;
    pair<int, int> p;
    int n, m, a;
    int u, l, v;
    int inp;
    char action;

    cin >> n >> m >> a;

    good.push_back(0);

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;
        good.push_back(inp);
    }

    for( int i = 0 ; i < a ; i++ ){
        cin >> action;

        if( action == 'B' ){

            cin >> u >> l >> v;
            price[l][u] = v;

        }else if( action == 'W' ){
            cin >> u >> l;
            price[l][u] = -1;
        }
    }

    for( auto it = price.begin() ; it != price.end() ; it++ ){

        priority_queue<pair<int, int>> pq;

        for( auto it2 = (it->second).begin() ; it2 != (it->second).end() ; it2++ ){
            p = {it2->second, it2->first};
            pq.push(p);
        }

        int cnt = 0;

        while( !pq.empty() && cnt < good[(it->first)] ){
            p = pq.top();
            pq.pop();

            if( p.first == -1 )
                break;

            user[p.second].push_back( it->first );
            cnt++;
        }

    }

    for( int i = 1 ; i <= m ; i++ ){
        if( user[i].empty() )
            cout << "NONE" << "\n";
        else{
            for( int j = 0 ; j < user[i].size() ; j++ )
                cout << user[i][j] << " ";
            cout << "\n";
        }
    }
}
