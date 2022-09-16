#include <queue>
#include <iostream>
using namespace std;
int main()
{
    int number_of_type;
    int number_of_user;
    int number_of_action;
    cin >> number_of_type >> number_of_user >> number_of_action;
    int number_of_each_type[number_of_type];
    for(int i=0;i<number_of_type;i++)
    {
        int x;
        cin>>x;
        number_of_each_type[i]=x;
    }
    
    priority_queue<pair<int,int>> list_of_price[number_of_type];
    queue<pair<int,int>> empty_queue;
    vector<int> list_of_item_that_each_user_won[number_of_user];
    
    
    for(int i=0; i<number_of_action; i++)
    {
        int withdraw_status[number_of_user];
        for(int i=0;i<number_of_user;i++)
        {
            withdraw_status[i]=1;
        }
        char bid_or_withdraw;
        cin>>bid_or_withdraw;
        if (bid_or_withdraw == 'B')
        {
            int label_of_user, label_of_item, bidding_value;
            cin>>label_of_user>>label_of_item>>bidding_value;
            pair<int,int> x;
            
        }
        else
        {
            int label_of_user, label_of_item;
            cin>>label_of_user>>label_of_item;
        }
    }
    return 0;
}
