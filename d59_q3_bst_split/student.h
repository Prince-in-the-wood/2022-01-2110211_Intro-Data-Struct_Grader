#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;

  node* now = result.mRoot;
  node* parent = NULL;
  node* ptr = mRoot;
  node* next = NULL;

  while( ptr != NULL ){

    std::cout<< ptr->data.first << "  " << val << "\n";

    if( mLess( (ptr->data).first, val) ){
        ptr = ptr->right;
        continue;
    }

    next = ptr->left;

    if( result.mRoot == NULL ){
        result.mRoot = ptr;

        if( ptr != mRoot ){
            ptr->parent->right = ptr->left;
        }else{
            mRoot = ptr->left;
        }

        ptr->left->parent = ptr->parent;

        ptr->parent = NULL;
        ptr->left = NULL;

        now = result.mRoot;
    }else{

        now->left = ptr;

        if( ptr != mRoot ){
            ptr->parent->right = ptr->left;
        }else{
            mRoot = ptr->left;
        }

        ptr->left->parent = ptr->parent;

        ptr->parent = NULL;
        ptr->left = NULL;

        now = ptr;

    }
    ptr = next;

  }
  return result;
}

#endif
