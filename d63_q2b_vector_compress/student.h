#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T* mData2 = new T[mSize];

    for( int i = 0 ; i < mSize ; i++ ){
        mData2[i] = mData[i];
    }

    delete mData;

    mData = mData2;
    mCap = mSize;
}

#endif
