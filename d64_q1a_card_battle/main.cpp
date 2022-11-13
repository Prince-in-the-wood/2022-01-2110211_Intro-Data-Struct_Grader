#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    map<int, int>::iterator it;
    map<int, int> card;
    int n, m, k;
    int i, inp;
    bool lose = false;

    cin >> n >> m;

    for( i = 0 ; i < n ; i++ ){
        cin >> inp;

        card[inp]++;
    }

    for( i = 1 ; i <= m ; i++ ){
        cin >> k;

        for( int j = 0 ; j < k ; j++ ){
            cin >> inp;

            it = card.upper_bound(inp);

            if( it == card.end() ){
                lose = true;
                break;
            }

            it->second--;


            if( it->second == 0 ) //if card is all used the delete
                card.erase(it);
        }

        if( lose )
            break;
    }

    cout << i;
}
