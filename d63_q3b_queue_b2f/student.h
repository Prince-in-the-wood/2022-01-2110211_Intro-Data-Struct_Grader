#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
    //write your code here
    if( mSize == 0 ) return;

    T mLast = mData[ ( mFront + mSize - 1 ) % mCap ];

    mFront = ( mFront > 0 ) ? mFront - 1 : mCap - 1;

    mData[mFront] = mLast;
}

#endif
