#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
    int n;
    string courseCode, teacherName;
    int score;

    cout << std::fixed << std::setprecision(2);

    //first element is score and the second is people who vote
    map<string, pair<int, int>> courseVote;
    map<string, pair<int, int>> teacherVote;

    cin >> n;

    for( int i = 0 ; i < n ; i++ ){
        cin >> courseCode >> teacherName >> score;

        courseVote[courseCode].first += score;
        courseVote[courseCode].second++;

        teacherVote[teacherName].first += score;
        teacherVote[teacherName].second++;
    }

    for( auto &x : courseVote ){
        cout << x.first << " " << ( x.second.first + 0.0 )/x.second.second << "\n";//endl;
    }

    for( auto &x : teacherVote ){
        cout << x.first << " " << ( x.second.first + 0.0 )/x.second.second << "\n";//endl;
    }

}
