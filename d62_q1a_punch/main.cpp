#include <iostream>
#include <vector>

using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
    //write some code here
    //don’t forget to return something

//VER01: Change on original vector
/*    vector<string>::iterator itbegin, itend;

    if( it - k < v.begin() )
        itbegin = v.begin();
    else
        itbegin = it - k;

    if( it + k >= v.end() )
        itend = v.end() - 1;
    else
        itend = it + k;

    while( itend >= itbegin ){
        v.erase( itend );
        itend--;
    }

    return v;
*/

// VER02: Copy vector
/*    vector<string> result;

    for( auto i = v.begin() ; i != v.end() ; i++ ){

        if( i < itbegin || i > itend )
            result.push_back(*i);
   }


    return result;
*/

// VER03: Only for vector

    for( auto i = it + k ; i >= it - k ; i-- ){
        if( v.begin() <= i && i < v.end() )
            v.erase( i );
    }
    return v;
}

int main() {

    int n,j,k;

    cin >> n >> j >> k;
    vector<string> v(n);

    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }

    cout << "Result after punch" << endl;

    vector<string> result = punch(v, v.begin() + j, k);

    for (auto &x : result) {
        cout << x << endl;
    }
}
