#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    size_t s1 = mCap - mSize;
    size_t s2 = other.mCap - other.mSize;

    return ( s1 > s2 ) - ( s2 > s1 );
}

#endif
