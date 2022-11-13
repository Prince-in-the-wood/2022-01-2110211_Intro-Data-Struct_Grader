#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  int loop = ( size() < other.size() ) ? size() : other.size();
  for( int i = 0 ; i < loop ; i++ ){
    if( mData[i] != other.mData[i] ) return mData[i] < other.mData[i];
  }

  return size() < other.size();

}

#endif
