#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
    //write your code here
    int cnt = 0;
    node* now = mHeader->next;
    node* next;

    for( int i = 0 ; i < mSize ; i++ ){
        if( now->data != value ){
            now = now->next;
            continue;
        }
        cnt++;
        next = now->next;

        now->next->prev = now->prev;
        now->prev->next = next;

        delete now;

        now = next;
    }

    mSize -= cnt;
}

#endif
