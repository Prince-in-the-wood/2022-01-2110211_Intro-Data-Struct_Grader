#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  int s = ( k > size() ) ? size() : k;
  for( int i = 0 ; i < s ; i++ ){
    res.push_back( mData[ ( mFront + i ) % mCap ] );
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  mCap = to - from;
  mSize = to - from;
  mFront = 0;
  mData = new T[mCap]();

  int i = 0;

  for( auto it = from ; it != to ; it++ ){
    mData[i++] = *it;
  }

}

#endif
