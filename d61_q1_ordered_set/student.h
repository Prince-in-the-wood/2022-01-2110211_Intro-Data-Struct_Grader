#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;

    vector<T> sortA = A;
    sort( sortA.begin(), sortA.end() );

    for( int i = 0 ; i < A.size() ; i++ ){
        v.push_back( A[i] );
    }

    for( int i = 0 ; i < B.size() ; i++ ){
        auto it = upper_bound( sortA.begin(), sortA.end(), B[i] ) - 1;

        if( sortA.begin() <= it && *(it) == B[i] )
            continue;

        v.push_back(B[i]);
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;

    vector<T> sortB = B;
    sort( sortB.begin(), sortB.end() );

    for( int i = 0 ; i < A.size() ; i++ ){
        auto it = upper_bound( sortB.begin(), sortB.end(), A[i] ) - 1;

        if( sortB.begin() <= it && *it == A[i] )
            v.push_back( A[i] );
    }

    return v;
}
