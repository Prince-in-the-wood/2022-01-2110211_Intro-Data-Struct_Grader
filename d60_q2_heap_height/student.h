#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
    int ans;
    int now = mSize - 1;

    if( mSize == 0 )
        ans = -1;
    else{
        ans = 0;
        while( now > 0 ){
            now = ( now - 1 ) / 2;
            ans++;
        }
    }



    return ans;
}

#endif

