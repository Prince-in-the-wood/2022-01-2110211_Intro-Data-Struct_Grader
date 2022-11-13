#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
    CP::vector<T> other;

    for( auto it = begin() ; it != end() ; it++ ){

        if( it == position ){
            while( first != last ){
                other.push_back(*first);
                first++;
            }
        }

        other.push_back(*it);
    }

    //don't forget!!!
    if( position == end() ){
        while( first != last ){
            other.push_back(*first);
            first++;
        }
    }

    using std::swap;
    swap( this->mData, other.mData );
    swap( this->mCap , other.mCap );
    swap( this->mSize, other.mSize );
}

#endif
