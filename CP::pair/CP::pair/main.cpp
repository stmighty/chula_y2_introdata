#include <iostream>
using namespace std;
namespace CP
{
    template <typename T1, typename T2>
    class pair
    {
        public :
            T1 first;
            T2 second;
        
            // default constructor
            pair() : first(), second() {}     //no initial value ex. pair<int,int> p;
            
            // custom constructir
            pair(const T1 &a, const T2 &b) : first(a), second(b) {}    //ex. pair<int,int> x(2,2)
            // same as
            //   pair(const T1 &a, const T2 &b)
            //   {
            //     first = a;
            //     second = b;
            //   }
        
        
            bool operator==(const pair<T1,T2> &other)
            {
                return this->first==other.first && this->second==other.second;
            }
            bool operator<(const pair<T1,T2> & other)
            {
                return this->first < other.first || (this->first == other.first && this->second  ==other.second);
            }
        
            
    };
}


int main(int argc, const char * argv[])
{
    CP::pair<int,string> p(10,"abc"),w;
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<w.first<<endl;
    cout<<w.second<<endl;
    
    
    
    pair<int,int>x(2,2);
    cout<<x.first<<" "<<x.second<<endl;
    return (0);
}
