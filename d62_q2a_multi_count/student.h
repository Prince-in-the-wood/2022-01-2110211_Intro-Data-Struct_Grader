#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here

    std::map<T, int> m;

    for( int i = 0 ; i < mSize ; i++ ){
        m[mData[i]]++;
    }

    using std::vector;
    vector<std::pair<T, size_t>> v;

    for( int i = 0 ; i < k.size() ; i++ ){
        v.push_back( { k[i] , m[k[i]] } );
    }

    return v;
}

#endif
