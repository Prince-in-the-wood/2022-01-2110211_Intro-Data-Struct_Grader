#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class CustomerTime{
public:
    int starttime, endtime, duration;

    bool operator<(const CustomerTime& other ) const{
        if( starttime == other.starttime )
            return endtime > other.endtime;
        return starttime > other.starttime;
    }
};

int main()
{
    priority_queue<CustomerTime> pq;
    CustomerTime customer;
    int n, m;
    int inp;
    int cnt = 0;

    cin >> n >> m;

    for( int i = 0 ; i < n ; i++ ){
        cin >> inp;

        customer.starttime = 0;
        customer.endtime = inp;
        customer.duration = inp;
        pq.push( customer );
    }

    while( cnt != m ){
        customer = pq.top();
        pq.pop();

        cout << customer.starttime << "\n";

        cnt++;

        customer.starttime = customer.endtime;
        customer.endtime = customer.starttime + customer.duration;
        pq.push( customer );
    }

}
