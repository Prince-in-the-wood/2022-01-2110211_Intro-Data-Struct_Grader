#include <iostream>
#include <vector>

using namespace std;

void vector_swap(vector<int> &v1,vector<int> &v2, int start1, int end1, int start2, int end2) {

    int now1 = start1;
    int now2 = start2;

    while( now1 < end1 && now2 < end2 ){

        auto v1now = v1.begin() + now1;
        auto v2now = v2.begin() + now2;

        int c = *v1now;
        *v1now = *v2now;
        *v2now = c;

        now1++;
        now2++;
    }

    while( now1 < end1 ){
       v2.insert( v2.begin() + now2, *( v1.begin() + now1 ) );
       now2++;

       v1.erase( v1.begin() + now1 );
       end1--;
    }

    while( now2 < end2 ){
        v1.insert( v1.begin() + now1, *( v2.begin() + now2) );
        now1++;

        v2.erase( v2.begin() + now2 );
        end2--;
    }



}

int main() {
    //read input
    int n,c;

    vector<int>v1,v2;

    cin >> n; //number of v1

    for (int i = 0;i < n;i++) {
        cin >> c;
        v1.push_back(c);
    }

    cin >> n; //number of v2

    for (int i = 0;i < n;i++) {
        cin >> c;
        v2.push_back(c);
    }

    int s1,e1,s2,e2; //position

    cin >> s1 >> e1 >> s2 >> e2;

    //call the function
    vector_swap(v1,v2,s1,e1,s2,e2);

    //display content of the stack
    cout << "v1 has " << v1.size() << endl;

    for (auto &x : v1) { cout << x << " "; }

    cout << endl;

    //display content of the stack
    cout << "v2 has " << v2.size() << endl;

    for (auto &x : v2) { cout << x << " "; }

    cout << endl;
}
