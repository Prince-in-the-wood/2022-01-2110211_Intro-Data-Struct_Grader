#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    if( pos == 0 ) return;

    int idx = ( mFront + pos ) % mCap;
    int idx2 = ( idx == 0 ) ? mCap - 1 : idx - 1;
    T mPos = mData[idx];

    for( int i = 0 ; i < pos; i++ ){
        mData[idx] = mData[idx2];

        idx = ( idx - 1 < 0 ) ? mCap - 1 : idx - 1;
        idx2 = ( idx2 - 1 < 0 ) ? mCap - 1 : idx2 - 1;

    }

    mData[mFront] = mPos;

}

#endif
