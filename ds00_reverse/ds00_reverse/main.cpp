#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b)
{
    if(a != b)        //  <10, 20, 30, 40, 50, 60>  reverse(v, 1,4) --> <10, 50, 40, 30, 20, 60>
    {
        int p[b-a+1];                 //int p[4]
        for(int i=a;i<=b;i++)
        {
            p[i-a]=v[i];
        }
        for(int i=a;i<=b;i++)         // when you want to erase vector from position a to b
        {                             // use loop and erase position v.begin()+a not v.begin()+i
            v.erase(v.begin()+a);     // (because every time you erase size of v will change)
        }
        for(int i=a;i<=b;i++)
        {
            v.insert(v.begin()+i,p[b-i]);  // use loop to insert v.begin()+i
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
 reverse(v,a,b);
 //display content of the vector
 for (auto &x : v)
 cout << x << " ";
 cout << endl;
}
