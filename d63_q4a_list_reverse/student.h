#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
    //write your code here
    CP::list<T> lst;
    iterator it1;
    iterator it2;

    if( a == b || a.ptr->next == b.ptr )
        return a;

    for( auto it = a ; it != b ; ){

        it2 = it.ptr->next;

        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;

        it.ptr->prev = lst.mHeader;
        it.ptr->next = lst.mHeader->next;

        lst.mHeader->next->prev = it.ptr;
        lst.mHeader->next       = it.ptr;

        it = it2;

    }

    it1 = lst.begin();
    it2 = --lst.end();

    b.ptr->prev->next = it1.ptr;
    it1.ptr->prev     = b.ptr->prev;

    b.ptr->prev = it2.ptr;
    it2.ptr->next = b.ptr;

    lst.mHeader->prev = mHeader;
    lst.mHeader->next = mHeader;


    return it1;

}

#endif
