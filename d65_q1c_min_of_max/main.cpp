#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, m;
    int ans = 1;
    int x;
    cin >> n >> m;

    vector<int> power;
    vector<int> type;

    for( int i = 0 ; i < m ; i++ )
        type.push_back(1);

    for( int i = 0 ; i < n ; i++ ){
        cin >> x;
        power.push_back(x);
    }

    for( int i = 0 ; i < n ; i++ ){
        cin >> x;

        if( type[x] >= power[i] ){
            cout << ans << " ";
        }else{

            if( type[x] != ans ){
                type[x] = power[i];
            }else{
                type[x] = power[i];
                ans = *min_element( type.begin(), type.end() );
            }

            cout << ans << " ";
        }

    }

}
