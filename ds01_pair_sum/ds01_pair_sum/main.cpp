#include <cmath>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int num_of_data;
    int num_of_result;
    cin>>num_of_data;
    cin>>num_of_result;
    set<int> s = {};
    set<int> s2 = {};
    int comparison[num_of_result];
    
    for(int i=0;i<num_of_data;i++) // n
    {
        int x;
        cin>>x;
        if(s.find(x) == s.end())   //log n
        {
            s.insert(x);           // log n
        }
        else
        {
            s2.insert(x);
        }
    }
    for(int i=0;i<num_of_result;i++)
    {
        int y;
        cin>>y;
        comparison[i]=y;
    }
    
    for(int i=0;i<num_of_result;i++)       // m
    {
        int check = 0;
        for(auto it = s.begin(); it!= s.end(); it++) // n
        {
            int search;
            search = comparison[i] - *it;
            if(*it > search)
            {
                break;
            }
            if(*it != search)
            {
                if(s.find(search) != s.end())   // log n
                {
                    check=1;
                    break;
                }
            }
            else
            {
                if(s2.find(search) != s2.end())
                {
                    check=1;
                    break;
                }
            }
        }
        if(check==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return (0);
}
