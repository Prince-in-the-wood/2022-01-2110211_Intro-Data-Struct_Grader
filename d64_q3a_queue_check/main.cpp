#include <iostream>

using namespace std;

int main()
{
    int mFront, mSize, mCap, last;
    int nmFront, nmSize, nmCap, nlast;
    int n, correction;
    bool t1, t2, t3, t4;

    cin >> n;

    for( int i = 0 ; i < n ; i++ ){
        cin >> mFront >> mSize >> mCap >> last;
        cin >> correction;

        t1 = mFront < mCap;
        t2 = last < mCap;
        t3 = mSize <= mCap;
        t4 = mCap != 0 && ( mFront + mSize ) % mCap == last;

        if( t1 && t2 && t3 && t4 )
            cout << "OK";
        else{
            cout << "WRONG";

            if( mCap != 0 ){
                nmFront = ( last + mCap - mSize ) % mCap;
                nlast   = ( mFront + mSize ) % mCap;
                nmSize  = ( mFront <= last ) ? last - mFront : mCap - mFront + last;
            }else{
                nmFront = mFront;
                nlast   = last;
                nmSize  = mSize;
            }

            nmCap   = ( mFront < last || mSize == 0 ) ? last + 1 : mSize + mFront - last;

            switch( correction ){
                case 1:cout<< " " << nmFront; break;
                case 2:cout<< " " << nmSize;  break;
                case 3:cout<< " " << nmCap;   break;
                case 4:cout<< " " << nlast;   break;
            }
        }



        cout << "\n";

    }
}
