#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT

    stack<int> num;
    int a, b;

    for( int i = 0 ; i < v.size() ; i++ ){

        if( v[i].first == 1 )
            num.push( v[i].second );
        else{
            b = num.top();
            num.pop();

            a = num.top();
            num.pop();

            if( v[i].second == 0 ){
                num.push( a + b );
            }else if( v[i].second == 1 ){
                num.push( a - b );
            }else if( v[i].second == 2 ){
                num.push( a * b );
            }else{
                num.push( a / b );
            }
        }
    }

    return num.top();

}

#endif
