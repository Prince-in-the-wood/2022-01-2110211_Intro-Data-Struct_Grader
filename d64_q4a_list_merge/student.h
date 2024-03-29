#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
    //write your code here
    for( auto it = ls.begin() ; it != ls.end() ; it++ ){
        //*it = list

        if( it->size() == 0 )
            continue;

        it->mHeader->next->prev = mHeader->prev;
        it->mHeader->prev->next = mHeader;

        mHeader->prev->next = it->mHeader->next;
        mHeader->prev       = it->mHeader->prev;

        it->mHeader->next = it->mHeader;
        it->mHeader->prev = it->mHeader;

        mSize += it->size();
        it->mSize = 0;
     }
}

#endif
