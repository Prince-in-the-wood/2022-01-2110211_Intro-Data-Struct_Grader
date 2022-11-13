#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
    //write your code here
    iterator it = a, next;

    while( it != b ){
        if( (*it) == value ){
            next = (iterator)it.ptr->next;// it.ptr is node*

            it.ptr->prev->next = it.ptr->next;
            it.ptr->next->prev = it.ptr->prev;

            it.ptr->next = output.mHeader->next;
            it.ptr->prev = output.mHeader;

            output.mHeader->next->prev = it.ptr;
            output.mHeader->next = it.ptr;

            it = next;
            mSize--;
            output.mSize++;
        }else{
            it++;
        }

    }

}

#endif
