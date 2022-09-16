#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v;
    int result[m];
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        v.push_back(in);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++)
    {
        int question;
        cin>>question;
        int lower,upper;
        lower=question-k;
        upper=question+k;
        int num; //number of in bound
        num=int(upper_bound(v.begin(),v.end(),upper)-lower_bound(v.begin(),v.end(),lower));
        result[i]=num;
    }
    for(int i=0;i<m;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return (0);
}
