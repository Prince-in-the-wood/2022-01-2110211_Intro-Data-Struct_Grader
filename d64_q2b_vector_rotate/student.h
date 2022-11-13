#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here

    CP::vector<T> rotateV(last-first);
    int a;

    for( auto it = first ; it != last ; it++ ){

        a = ( ( it - first ) + k )%(last - first);

        rotateV[it-first] = *it;

        *it = (( it - first ) + k < last - first ) ? *( first + a ) : rotateV[a];


    }
}

#endif
