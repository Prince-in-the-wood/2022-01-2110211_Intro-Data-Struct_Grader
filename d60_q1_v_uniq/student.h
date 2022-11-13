#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>

template <typename T>
void CP::vector<T>::uniq() {
    //do someting here
    CP::vector<T> newVector;

    using std::set;
    set<T> member;

    for( int i = 0 ; i < size() ; i++ ){
        if( member.find(mData[i]) == member.end() ){
            newVector.push_back(mData[i]);
            member.insert( mData[i] );
        }
    }

    using std::swap;
    swap(this->mSize, newVector.mSize);
    swap(this->mCap, newVector.mCap);
    swap(this->mData, newVector.mData);
}

#endif
