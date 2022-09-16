#include <cmath>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num_of_operation;
    int num_of_goal;
    cin >> num_of_operation >> num_of_goal;
    int goals[num_of_goal];
    for (int i=0; i<num_of_goal; i++)
    {
        cin>>goals[i];
    }
    
    
    queue<int> restaurant1;
    queue<int> restaurant2;
    vector<int> sales;
    int total_sale = 0;
    
    
    for (int i=0; i<num_of_operation; i++)
    {
        int order_or_cook;
        cin >> order_or_cook;
        if (order_or_cook == 1)              //order
        {
            int restaurant,amount;
            cin>> restaurant >> amount;
            if(restaurant == 1)
            {
                restaurant1.push(amount);
            }
            else
            {
                restaurant2.push(amount);
            }
        }
        else                                 //cook
        {
            if(restaurant1.empty())
            {
                total_sale += restaurant2.front();
                sales.push_back(total_sale);
                restaurant2.pop();
            }
            else if(restaurant2.empty())
            {
                total_sale += restaurant1.front();
                sales.push_back(total_sale);
                restaurant1.pop();
            }
            else
            {
                if (restaurant1.front() <= restaurant2.front())
                {
                    total_sale += restaurant1.front();
                    sales.push_back(total_sale);
                    restaurant1.pop();
                }
                else
                {
                    total_sale += restaurant2.front();
                    sales.push_back(total_sale);
                    restaurant2.pop();
                }
            }
        }
    }
    for(int i=0; i<num_of_goal; i++)
    {
        int lower = lower_bound(sales.begin(),sales.end(),goals[i]) - sales.begin();
        if (lower != sales.size())
        {
            cout<<lower+1;
        }
        else
        {
            cout<<-1;
        }
        if (i != num_of_goal-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return (0);
}
