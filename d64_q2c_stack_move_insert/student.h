#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  int start = ( s2.size() >= m ) ? s2.size() - m : 0;
  int middle = ( mSize >= k ) ? mSize - k : 0;
  CP::stack<T> rs;

  for( int i = 0 ; i < middle ; i++ )
    rs.push( mData[i] );

  for( int j = start ; j < s2.size() ; j++ )
    rs.push( s2.mData[j] );

  for( int i = middle ; i < mSize ; i++ )
    rs.push( mData[i] );

  s2.mSize = start;

  using std::swap;
  swap( mSize, rs.mSize );
  swap( mCap , rs.mCap );
  swap( mData, rs.mData );

}
#endif
