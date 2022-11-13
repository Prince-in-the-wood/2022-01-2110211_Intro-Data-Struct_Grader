#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  return (idx >= 0 ) ? mData[( mFront + idx ) % mCap ] : mData[ ( mFront + idx + mSize ) % mCap ];
  // you need to return something
  // return

}

#endif
