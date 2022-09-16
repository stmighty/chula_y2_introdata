#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    set<int> s={1,4,5,6,7,9,12,14,16};
    cout<<s.count(1)<<" "<<s.count(3)<<endl;
    return (0);
}
