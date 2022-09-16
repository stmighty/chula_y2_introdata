#include <iostream>
#include <cmath>
#include <string>
int main()
{
    int x;
    int y;
    int minute;
    
    std::cin>>x;
    std::cin>>y;
    std::cin>>minute;
    
    int h;
    int m;
    int plus;
    h=x;
    m=y;
    //cout<<h<<endl;
    //cout<<m<<endl;
    plus = floor((m+minute)/60);
    m=(m+minute)%60;
    h=(h+plus)%24;
    if(h<10)
    {
        std::cout<<"0";
    }
    std::cout<<h<<" ";
    if(m<10)
    {
        std::cout<<"0";
    }
    std::cout<<m;
    std::cout<<"\n";
    return (0);
}
