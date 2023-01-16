#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything

  std::vector<T> v;

  for( int i = 0 ; i < k ; i++ ){
    v.push_back( mData[i] );
  }

  sort( v.begin(), v.end(), mLess );

  for( int i = k ; i < std::min( (int)mSize, 7) ; i++ ){
      T tmp = mData[i];

      for( int j = k - 1 ; j >= 0 ; j-- ){
        if( mLess( v[j], tmp ) ){
            std::swap( tmp, v[j] );
        }
      }
  }

  return v[0];
}

#endif
