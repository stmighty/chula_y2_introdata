#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;

int find_max(int x[101][101], int r1, int c1, int r2, int c2)
{
    int max;
    max = x[r1][c1];
    for(int i=r1;i<=r2;i++)
    {
        for(int j=c1;j<=c2;j++)
        {
            if (max<x[i][j])
            {
                max = x[i][j];
            }
        }
    }
    return (max);
}

int main()
{
    int x[101][101];
    int num_of_row;
    int num_of_col;
    int num_of_result;
    
    cin>>num_of_row;
    cin>>num_of_col;
    cin>>num_of_result;
    
    for (int i=1;i<=num_of_row;i++)
    {
        for (int j=1;j<=num_of_col;j++)
        {
            cin>>x[i][j];
        }
    }
    
    int r1,c1,r2,c2;
    for (int i=1;i<=num_of_result;i++)
    {
        cin>>r1>>c1>>r2>>c2;
        if(r1 > r2 || c1 > c2)
        {
            cout<<"INVALID"<<endl;
        }
        else if(r1 > num_of_row || c1 > num_of_col)
        {
            cout<<"OUTSIDE"<<endl;
        }
        else
        {
            if(r2 > num_of_row)
            {
                r2 = num_of_row;
            }
            if(c2 > num_of_col)
            {
                c2 = num_of_col;
            }
            cout<<find_max(x,r1,c1,r2,c2)<<endl;
        }
    }
    
    
    
    return (0);
}
