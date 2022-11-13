void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if( mSize == 0 )return;

    node* first1 = mHeader->next;
    node* last1 = mHeader;
    node* first2;
    node* last2 = mHeader->prev;

    for( int i = 0 ; i < mSize/2 + mSize%2 ; i++ )
        last1 = last1->next;

    first2 = last1->next;

    list1.mHeader->prev->next = first1;
    first1->prev = list1.mHeader->prev;

    list1.mHeader->prev = last1;
    last1->next = list1.mHeader;

    list1.mSize += mSize/2 + mSize%2;

    if( mSize > 1 ){
        list2.mHeader->prev->next = first2;
        first2->prev = list2.mHeader->prev;

        list2.mHeader->prev = last2;
        last2->next  = list2.mHeader;

        list2.mSize += mSize/2;
    }

    mHeader->prev = mHeader;
    mHeader->next = mHeader;

    mSize = 0;

}
