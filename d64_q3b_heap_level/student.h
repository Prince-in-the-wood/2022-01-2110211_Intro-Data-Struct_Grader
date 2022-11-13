#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;

  int cnt = 1;

  for( int i = 0 ; i < k ; i++ )
    cnt *= 2;

  for( int i = cnt - 1 ; i < mSize && i <  2 * cnt - 1 ; i++ )
    r.push_back( mData[i] );

  sort( r.begin(), r.end(), mLess );
  reverse( r.begin(), r.end() );

  return r;
}

#endif

