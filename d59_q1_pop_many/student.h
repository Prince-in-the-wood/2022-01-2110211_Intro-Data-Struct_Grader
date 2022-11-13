#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
    if( K <= mSize )
        mSize -= K;
    else
        mSize = 0;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  size_t mSize2 = ( K <= mSize )? mSize - K : 0 ;

  std::stack<T> s1;

  for( size_t i = mSize2 ; i < mSize ; i++ ){
        s1.std::stack<T>::push( mData[i]);

  }

  //Change this stack
  mSize = mSize2;

  return s1;

}

#endif
