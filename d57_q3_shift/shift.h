void shift(int k) {
	// TODO: Add your code here
	k = ( k + mSize * ( std::max(k,-k) / mSize + 1 ) )%mSize;

    node* now;

    for( int i = 0 ; i < k ; i++ ){
        now = mHeader->next;

        mHeader->next = now->next;
        now->next->prev = mHeader;

        mHeader->prev->next = now;
        now->prev = mHeader->prev;

        mHeader->prev = now;
        now->next = mHeader;
    }
}
