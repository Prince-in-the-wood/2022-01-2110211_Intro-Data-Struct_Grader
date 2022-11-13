#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
 //write your code only in this function
   int n = ( b - a ) / 2;

//VERSION 01
//   for( int i = 0 ; i <= n  ; i++ ){
//        int c = v[ a + i ];
//        v[ a + i ] = v[ b - i ];
//        v[ b - i ] = c;
//   }

//VERSION 02
    vector<int>::iterator lft = v.begin() + a; //can use auto
    vector<int>::iterator rht = v.begin() + b;

    while( lft < rht ){
        int c = *lft;
        *lft = *rht;
        *rht = c;

        lft++;
        rht--;
    }
}
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,a,b);
 //display content of the vector
 for (auto &x : v)
 cout << x << " ";
 cout << endl;
}
