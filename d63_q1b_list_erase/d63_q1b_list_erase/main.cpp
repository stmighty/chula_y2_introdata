#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


void list_erase(vector<int> &v, vector<int> &pos)  // v = {0,10,20,30,40,50,60,70,80,90}  ,  pos = {3,0,9}
{
 //write your code here
    vector <int> v2;
    sort(pos.begin(),pos.end());
    for(int i=0;i<v.size();i++)              //for(i<10)
    {
        //if(position.find(i)==position.end())
        //{
         //   v2.push_back(v[i]);
        //}
        if (not binary_search(pos.begin(),pos.end(),i))
        {
            v2.push_back(v[i]);
        }
    }
    v=v2;
}


int main()
{
 std::ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n,m;
 cin >> n >> m;
 vector<int> v(n), pos(m);
 for (int i = 0;i < n;i++) cin >> v[i];
 for (int i = 0;i < m;i++) cin >> pos[i];
 list_erase(v,pos);
 cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
 for (auto &x : v) cout << x << " ";
 cout << endl;
}
