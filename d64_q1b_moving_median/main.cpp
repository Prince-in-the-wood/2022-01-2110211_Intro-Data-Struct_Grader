#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, w;
    int inp;
    vector<int> data;
    vector<int> interest;

    cin >> n >> w;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;

        data.push_back(inp);
    }

    for( int i = 0 ; i < w + 1 ; i++ )
        interest.push_back(data[i]);

    sort(interest.begin(), interest.end());

    for( int i = 0 ; i < n - w ; i++ ){
        cout << interest[w/2] << " ";

        if( i + w  + 1 < n && data[i] != data[i+w+1] ){
            interest.erase( find(interest.begin(), interest.end(), data[i] ) );
            interest.insert( lower_bound( interest.begin(), interest.end(), data[i+w+1] ), data[i+w+1]);
        }

    }

    if( n == w )
        cout << interest[w/2];
}
