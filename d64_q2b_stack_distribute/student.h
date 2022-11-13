#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
    int remainder = mSize % k;
    int now = mSize - 1;
    using std::vector;
    vector< vector<T> > v(k);

    for( int i = 0 ; i < k ; i++ ){
        for( int j = 0 ; j < mSize/k + ( remainder != 0 ) ; j++ ){
            v[i].push_back( mData[now--] );
        }

        if( remainder > 0 )
            remainder -= 1;
    }

    return v;
}
#endif
