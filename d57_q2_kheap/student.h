#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
      while (idx > 0) {
        size_t p = (idx - 1) / 4;
        if ( mLess(tmp,mData[p]) ) break;
        mData[idx] = mData[p];
        idx = p;
      }
      mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
      size_t c, d;
      while ((c = 4 * idx + 1) < mSize) {
        d = c;
        if ( c + 1 < mSize && mLess(mData[d],mData[c + 1]) ) d = c + 1;
        if ( c + 2 < mSize && mLess(mData[d],mData[c + 2]) ) d = c + 2;
        if ( c + 3 < mSize && mLess(mData[d],mData[c + 3]) ) d = c + 3;

        if ( mLess(mData[d],tmp) ) break;
        mData[idx] = mData[d];
        idx = d;
      }
      mData[idx] = tmp;
}

#endif

