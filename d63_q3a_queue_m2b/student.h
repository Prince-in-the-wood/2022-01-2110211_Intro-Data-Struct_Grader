#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T mPos = mData[ ( mFront + pos ) % mCap ];
  int idx = ( mFront + pos ) % mCap;
  int idx2 = ( mFront + pos + 1 ) % mCap;

  for( int i = pos ; i < mSize ; i++ ){
    mData[idx] = ( i != mSize-1)? mData[idx2] : mPos;

    idx2 = ( idx2 + 1 )% mCap;
    idx  = ( idx + 1 ) % mCap;
  }
}

#endif
