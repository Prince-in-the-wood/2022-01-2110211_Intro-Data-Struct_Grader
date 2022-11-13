#include <iostream>
#include <vector>
#include <queue>
using namespace std;

size_t qcount(queue<int> q, int k) {
    //write your code here
    size_t cnt = 0;
    size_t sze = q.size();


    //Ver01: queue will be same as the one that sent to this function
    for( int i = 0 ; i < sze ; i++ ){
        cnt += ( q.front() == k );
        q.push(q.front());
        q.pop();
    }


    //Ver02: queue will be empty at last
/*
    while( !q.empty() ){
        if( q.front() == k )
            cnt++;
        q.pop();
    }
*/

    return cnt;

}
int main() {
    // for faster cin, cout
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n,k;

    cin >> n >> k;

    queue<int> q;

    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        q.push(a);
    }

    cout << qcount(q,k) << endl;
}
