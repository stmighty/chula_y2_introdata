#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num_of_data,num_of_verify;
    cin>>num_of_data>>num_of_verify;
    vector<vector<int>> v;
    int result[2*num_of_verify];
    for(int i=0;i<num_of_data;i++)
    {
        int year,month;
        cin>>year>>month;
        vector<int> v2;
        v2.push_back(year);
        v2.push_back(month);
        v.push_back(v2);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<num_of_verify;i++)
    {
        int year,month;
        cin>>year>>month;
        vector<int> v2={};
        v2.push_back(year);
        v2.push_back(month);
        
        if(binary_search(v.begin(),v.end(),v2))
        {
            result[2*i]=0;
            result[2*i+1]=0;
        }
        else
        {
            if(lower_bound(v.begin(),v.end(),v2)-v.begin()==0)
            {
                result[2*i]=-1;
                result[2*i+1]=-1;
            }
            else
            {
                result[2*i]=v[lower_bound(v.begin(),v.end(),v2)-v.begin()-1][0];
                result[2*i+1]=v[lower_bound(v.begin(),v.end(),v2)-v.begin()-1][1];
            }
        }
    }
    for(int i=0;i<2*num_of_verify;i++)
    {
        cout<<result[i];
        if(i!=2*num_of_verify-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    /*
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i][0]<<" "<<v[i][1]<<" ";
    }
    cout<<endl;
     */
    return (0);
}
