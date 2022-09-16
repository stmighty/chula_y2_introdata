#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int p(string x)
{
    string r="";
    for(int i=0;i<x.length();i++)
    {
        if(i>=3)
        {
            r=r+x[i];
        }
    }
    //cout<<r<<endl;
    int result = stoi(r);
    return result;
    //return (1);
}

int d(string x)
{
    string r;
    for(int i=0;i<x.length();i++)
    {
        if(i>=2)
        {
            r=r+x[i];
        }
    }
    int result = stoi(r);
    return result;
}
int main(int argc, const char * argv[])
{
    
    vector<int> result;
    int n;
    cin>>n;
    cin>>ws;
    for(int i=0;i<n;i++)
    {
        string command;
        //string num;
        getline(cin,command);
        if(command[0]=='p')
        {
            //int add=stoi(num);
            //cout<<num<<endl;
            //result.push_back(add);
            //cout<<p(command)<<endl;
            //cout<<command<<endl;
            //cout<<p(command)<<endl;
            result.push_back(p(command));
        }
        else if(command[0]=='s')
        {
            sort(result.begin(),result.end());
            if(command[1]=='d')
            {
                reverse(result.begin(),result.end());
            }
        }
        else if(command[0]=='r')
        {
            reverse(result.begin(),result.end());
        }
        else if(command[0]=='d')
        {
            result.erase(result.begin()+d(command));
        }
    }
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    //-----------------------------------------------------------------//
    //cout<<p("pb 56")<<endl;
    
    return 0;
}
