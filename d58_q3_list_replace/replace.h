void replace(const T& x, list<T>& y) {
    //write your code here
    node* now = mHeader->next;
    node* next;
    int sizel = mSize;

    for( now ; now != mHeader ; now = next ){
        next = now->next;

        if( now->data != x ) continue;

        for( auto it = y.begin() ; it != y.end() ; it++ ){
            insert( next, (*it) );
        }

        erase(now);

        sizel = sizel - 1 + (int)y.mSize;
    }

    mSize = (size_t)sizel;

}
