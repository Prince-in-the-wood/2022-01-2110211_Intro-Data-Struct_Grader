#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s; //Codomain
    int n, inp;
    bool notInA = false; //Check if there is some value that isn't in set A

    cin >> n;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;
        s.insert(inp);

        if( inp <= 0 || inp > n ) // if the inp isn't in set A
            notInA = true;
    }

    //if this is on to function mean every element in A is used
    //and 1-1 function mean value appear only one time
    //so size of codomain should equal to n and never have any element that isn't in A
    if( s.size() == n && !notInA )
        cout << "YES";
    else
        cout << "NO";
}
