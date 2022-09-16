#include <iostream>
#include <vector>
#include <queue>
using namespace std;
size_t qcount(queue<int> q, int k)
{
    int count=0;
    queue<int> q2(q);
    while(q2.empty() == false)
    {
        if(q2.front()==k)     // first in first out
        {
            count+=1;
        }
        q2.pop();
    }
    return(count);
    
 //write your code here
}

int main()
{
 // for faster cin, cout
 ios_base::sync_with_stdio(false); cin.tie(0);
 int n,k;
 cin >> n >> k;
 queue<int> q;
 for (int i = 0;i < n;i++) {
 int a;
 cin >> a;
 q.push(a);
 }
 cout << qcount(q,k) << endl;
}
