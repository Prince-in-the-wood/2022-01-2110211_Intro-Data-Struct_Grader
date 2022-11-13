#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        stack<T> newS;

        while( !this->empty() ){
            newS.push( this->top() );
            this->pop();
        }

        for( int i = 0 ; i < s.mSize ; i++ )
            this->push( s.mData[i] );

        while( !newS.empty() ){
            this->push( newS.top() );
            newS.pop();
        }
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> newS;

        while( !this->empty() ){
            newS.push( this->top() );
            this->pop();
        }

        while( !q.empty() ){
            newS.push( q.front() );
            q.pop();
        }

        while( !newS.empty() ){
            this->push( newS.top() );
            newS.pop();
        }

    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {

        while( !s.empty() ){
            this->push( s.top() );
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while( !q.empty() ){
            this->push( q.front() );
            q.pop();
        }
    }
}
