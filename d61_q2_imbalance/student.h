// Your code here
std::pair<int, std::pair<int, KeyT>> getMostImbalance(node* n ){

    if( n == NULL ) return { -1, { -1 , KeyT() }};

    //if( n->right == NULL && n->left == NULL ) return { 0, { 0 , ( n->data ).first } };

    std::pair<int, std::pair<int, KeyT>> fright = getMostImbalance( n->right );
    std::pair<int, std::pair<int, KeyT>> fleft = getMostImbalance( n->left );

    int mostImbalance = std::abs(fright.first - fleft.first);
    int height = std::max(fright.first, fleft.first) + 1 ;
    KeyT key = (n->data).first;

    std::pair<int, KeyT> ans = compareImbalance( {mostImbalance, key} ,compareImbalance( fleft.second, fright.second ));

    mostImbalance = ans.first;
    key = ans.second;

    return { height, { mostImbalance, key } };

}

std::pair<int, KeyT> compareImbalance( std::pair<int, KeyT> one, std::pair<int, KeyT> two ){
    if( one.first > two.first )
        return one;

    if( one.first < two.first )
        return two;

    if( mLess( one.second, two.second ) )
        return one;

    return two;
}




KeyT getValueOfMostImbalanceNode() {
    // Your code here
    return getMostImbalance(mRoot).second.second;
}
