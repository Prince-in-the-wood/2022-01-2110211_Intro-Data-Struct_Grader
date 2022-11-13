#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  int vsize = size();
  int j = vsize;
  resize(2*size());

  for( int i = vsize - 1 ; i >= 0 ; i-- ){
    this->mData[j] = this->mData[i];
    j++;
  }

}

#endif
