#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
    // your code here
    if( mSize <= 1 ) return;

    node* first = mHeader->next;
    node* last  = mHeader->prev;

    first->next->prev = mHeader;
    mHeader->next     = first->next;

    last->next    = first;
    mHeader->prev = first;

    first->next = mHeader;
    first->prev = last;
}

#endif
