#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b)
{
 //write your code only in this function    // <”A”,”B”,”C”,”D”,”E”,”F”> 1,5
    int min;
    int max;
    int count;
    min = a;
    max = b;
    if(a%2==1)
    {
        min = a + 1;
    }
    if(b % 2 == 1)
    {
        max = b - 1;
    }
    count = (max-min)/2+1;                //count = 2 ,max = 4 ,min = 2
    for(int i=0;i<count;i++)              // i = 0   <a b d e f>
    {                                     // i = 1   <a b d f>
        v.erase(v.begin()+i+min);
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
 remove_even(v,a,b);
 //display content of the vector
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}
