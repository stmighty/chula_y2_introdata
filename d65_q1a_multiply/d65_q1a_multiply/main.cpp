#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void member_multiply(vector<int> &v,vector<pair<vector<int >::iterator,int>> &multiply)
{
//write your code here
    sort(multiply.begin(),multiply.end());   //v=[10,20,30,40,50] ,multiply -> [{v.begin()+1,1},{v.begin()+4,2}]
    vector<int> v2;
    vector<int> index;                       //[1,4]   //index of v which are inserted
    vector<int> value;                       //[1,2]   //number of insertion
    for(int i=0;i<multiply.size();i++)
    {
        index.push_back(multiply[i].first-v.begin());       //now we got all index
        value.push_back(multiply[i].second);                //now we got all of value (value of each index)
    }
    
    int count=0;                             //count is used to determined position of value that we will insert
    for(int i=0;i<v.size();i++)
    {
        v2.push_back(v[i]);
        if(binary_search(index.begin(),index.end(),i)==true)
        {
            for(int j=0;j<value[count];j++)  //how many inserter //[1,2]
            {
                v2.push_back(v[i]);
            }
            count+=1;
        }
    }
    v=v2;
    
    /*
    int check_plus = 0;
    for(int i=0;i<multiply.size();i++)   // each pair
    {
        auto it = multiply[i].first;      // iterator
        for(int j=0;j<multiply[i].second;j++)
        {
            v.insert(it + check_plus,*it);
        }
        check_plus += multiply[i].second;                  //int (num of add)
    }
     */
}



int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 int n,m;
 cin >> n >> m;
 vector<int> v(n);
 vector<pair<vector<int>::iterator,int>> multiply(m);
 for (int i = 0;i < n;i++) cin >> v[i];
 for (int i = 0;i < m;i++) {
 int a,b;
 cin >> a >> b;
 multiply[i].first = v.begin()+a;
 multiply[i].second = b;
 }
 member_multiply(v,multiply);
 cout << "======= result ========" << endl;
 cout << v.size() << endl;
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}
