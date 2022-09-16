#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <iomanip>
using namespace std;

float find_avg(vector<int> v)
{
    float sum = 0.0;
    int count = 0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        count+=1;
    }
    return (sum/count);
}
int main()
{
    cout<<std::fixed<<std::setprecision(2);
    ios_base::sync_with_stdio(false); cin.tie(0);
    map<string,vector<int>>course_score;
    map<string,vector<int>>teacher_score;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string course_code;
        string teacher;
        int score;
        cin>>course_code>>teacher>>score;
        if(course_score.find(course_code) == course_score.end())
        {
            vector<int> v;
            v = {score};
            course_score[course_code] = v;
        }
        else
        {
            course_score[course_code].push_back(score);
        }
        if(teacher_score.find(teacher) == teacher_score.end())
        {
            vector<int> v2;
            v2 = {score};
            teacher_score[teacher] = v2;
        }
        else
        {
            teacher_score[teacher].push_back(score);
        }
    }
    for(auto it = course_score.begin() ; it!=course_score.end();it++)
    {
        cout<<it->first<<" "<<(find_avg(it->second)+0.0)/1<<'\n';
    }
    for(auto it = teacher_score.begin() ; it!=teacher_score.end();it++)
    {
        cout<<it->first<<" "<<(find_avg(it->second)+0.0)/1<<'\n';
    }
    return (0);
}
