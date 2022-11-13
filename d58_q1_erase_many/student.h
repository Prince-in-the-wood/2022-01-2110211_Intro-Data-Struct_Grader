#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    //write your code here
    T *mData2 = new T[mCap];
    int i, j = 0;

    for( int i = 0 ; i < mSize ; i++ ){
        if( j < pos.size() && pos[j] == i ){
            j++;
            continue;
        }
        mData2[i-j] = mData[i];
    }
    delete mData;
    mData = mData2;
    mSize = mSize - j;
}

#endif
