#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void sort_vector(vector<vector<int>>&v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size()-1-i;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int number_of_pair;
    int number_of_result;
    cin>>number_of_pair>>number_of_result;
    int result[number_of_result];
    vector <int> v;
    for(int i=0;i<number_of_pair;i++)
    {
        int lower;
        int upper;
        cin>>lower>>upper;
        v.push_back(lower);
        v.push_back(upper);

    }
    sort(v.begin(),v.end()); //sort vector
    //sort_vector(v);
    for(int i=0;i<number_of_result;i++)
    {
        int verify;
        //int check=0;
        cin>>verify;
        int x = int(lower_bound(v.begin(),v.end(),verify)-v.begin());
        if(binary_search(v.begin(),v.end(),verify))
        {
            result[i]=1;
        }
        else
        {
            if(x%2==1)
            {
                result[i]=1;
            }
            else
            {
                result[i]=0;
            }
        }
    }
    
    for(int i=0;i<number_of_result;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return (0);
}
