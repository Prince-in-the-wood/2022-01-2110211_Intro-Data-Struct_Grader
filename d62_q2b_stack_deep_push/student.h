#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
    ensureCapacity( mSize + 1 );
    mSize++;

    for( int i = mSize - 1 ; i > mSize - 1 - pos ; i-- ){
        mData[i] = mData[i-1];
    }
    mData[mSize - 1 - pos] = value;
}

#endif
