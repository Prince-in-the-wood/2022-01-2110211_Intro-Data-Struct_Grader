#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  // your code here
    T* data = mData;
    int sze = mSize, cap = mCap;

    mData = other.mData;
    mSize = other.mSize;
    mCap = other.mCap;

    other.mData = data;
    other.mSize = sze;
    other.mCap  = cap;

}

#endif
