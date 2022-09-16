#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k)
{
    auto check_left=it-v.begin();
    int min_left;
    int min_right;
    
    if(check_left>k)
    {
        min_left=k;
    }
    else
    {
        min_left = int(check_left);
    }
    
    auto check_right = v.end()-it-1;
    
    if(check_right>k)
    {
        min_right = k;
    }
    else
    {
        min_right = int(check_right);
    }
    
    for(int i=0;i<=min_right;i++)
    {
        v.erase(it);
    }
    for(int i=0;i<min_left;i++)
    {
        v.erase(it-min_left);
    }
    return (v);
 //write some code here
 //don’t forget to return something
}
int main()
{
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result)
 {
 cout << x << endl;
 }
    /*
    vector<string> v = {"a","b","c","d","e","f","g","h"} ;
    punch(v,v.begin()+3, 2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    */
    
    

}
