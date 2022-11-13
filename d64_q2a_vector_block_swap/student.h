#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
    //write your code here
    auto aEnd = a + m - 1;
    auto bEnd = b + m - 1;
    auto it2 = b;

    if( m <= 0 || ( a < begin() || a >= end() ) || ( b < begin() || b >= end() )
    || ( aEnd < begin() || aEnd >= end() ) || ( bEnd < begin() || bEnd >= end() )
    || !( aEnd < b || bEnd < a )
    ) return false;

    for( auto it = a ; it <= aEnd ; it++ ){
        T temp = *(it);
        *(it) = *(it2);
        *(it2) = temp;
        it2++;
    }

    return true;
}

#endif
