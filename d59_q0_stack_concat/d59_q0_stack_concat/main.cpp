#include <iostream>
#include <vector>
#include <stack>
using namespace std;


void stack_concat(stack<int> &s1, stack<int> &s2)  //<10 20 30 40> <1 2 3>
{
    vector<int> v_of_s1;             //<10 20 30 40>
    vector<int> v_of_s2;             //<1 2 3>
    while(s1.empty()==false)
    {
        v_of_s1.push_back(s1.top());
        s1.pop();
    }
    while(s2.empty()==false)
    {
        v_of_s2.push_back(s2.top());
        s2.pop();
    }
    for(int i=int(v_of_s2.size())-1;i>=0;i--)
    {
        s1.push(v_of_s2[i]);
    }
    for(int i=v_of_s1.size()-1;i>=0;i--)
    {
        s1.push(v_of_s1[i]);
    }
}


int main()
{
  //read input
  int n,m;
  int c;
  cin >> n >> m;
  stack<int>  s1,s2;
  for (int i = 0;i < n;i++) {
cin >> c;
    s1.push(c);
  }
  for (int i = 0;i < m;i++) {
    cin >> c;
    s2.push(c);
  }
  //call the function
  stack_concat(s1,s2);
  //display content of the stack
  cout << "S1 has " << s1.size() << endl;
  while (!s1.empty()) {
    cout << s1.top() << " ";
    s1.pop();
}
  cout << endl;
  //display content of the stack
  cout << "S2 has " << s2.size() << endl;
  while (!s2.empty()) {
    cout << s2.top() << " ";
s2.pop(); }
  cout << endl;
}
