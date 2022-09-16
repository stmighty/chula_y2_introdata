#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
int main()
{
    set<int> v1 = {8,10,6,9,7};
    auto x = v1.find(3);
    auto y = v1.find(8);
    //cout<<x<<" "<<y<<endl;
    cout<<*x<<" "<<*y<<endl;
    return (0);
}
