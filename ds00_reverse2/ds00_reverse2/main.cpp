#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b)
{
    if(b-a>1)
    {
        vector<int> v2={};
        for(auto i=a-v.begin();i<b-v.begin();i++)
        {
            v2.push_back(v[i]);
        }
        int num = b-a;
        for(int i=0;i<num;i++)
        {
            v.erase(a);
        }
        for(auto i=a;i<b;i++)
        {
            v.insert(i,v2[num-1]);
            num--;
        }
    }
}

int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,v.begin()+a,v.begin()+b+1);
 //display content of the vector
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}
/*
int main()
{
    vector<int> v = {1,2,3,4,5,6};
    reverse(v,v.begin()+1,v.begin()+5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return (0);
}
*/
