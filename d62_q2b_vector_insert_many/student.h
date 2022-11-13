#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
    //write your code here
    CP::vector<T> v;
    int i, j = 0;

    sort( data.begin(), data.end() );

    for( i = 0 ; i < size() ; i++ ){

        if( j < data.size() && data[j].first == i ){
            v.push_back( data[j].second );
            j++;
        }
        v.push_back( mData[i] );
    }

    while( j < data.size() ){
        v.push_back( data[j].second );
        j++;
    }

    using std::swap;
    swap(this->mSize, v.mSize);
    swap(this->mCap,  v.mCap);
    swap(this->mData, v.mData);

}

#endif
