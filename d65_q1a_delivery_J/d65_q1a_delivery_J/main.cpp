#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int q[m];
    for(int i=0; i<m; i++)                //each goal
    {
        cin >> q[i];
    }

    queue<int> shops[3];                  //queue of order  ( use only shops[1] and shops[2] )
    vector<int> sales;
    sales.push_back(0);

    int cmd, shop, amount;
    for(int i=0; i<n; i++)                //each event
    {
        cin >> cmd;                       //order or cook

        if (cmd == 1)                     //order
        {
            cin >> shop >> amount;        //which restaurant , amount(price of food)
            shops[shop].push(amount);
        }
        else                              //cook
        {
            if (shops[1].empty())         //no order left in shop1
            {
                sales.push_back(sales[sales.size()-1] + shops[2].front());
                shops[2].pop();
            }
            else if (shops[2].empty())    //no oreder left in shop2
            {
                sales.push_back(sales[sales.size()-1] + shops[1].front());
                shops[1].pop();
            }
            else
            {
                if (shops[1].front() <= shops[2].front()) {
                    sales.push_back(sales[sales.size()-1] + shops[1].front());
                    shops[1].pop();
                }
                else
                {
                    sales.push_back(sales[sales.size()-1] + shops[2].front());
                    shops[2].pop();
                }
            }
        }
    }

    for (int i=0; i<m; i++)
    {
        auto it = lower_bound(sales.begin(), sales.end(), q[i]);
        if (it == sales.end())
        {
            cout << "-1 ";
        }
        else
        {
            cout << distance(sales.begin(), it) << " ";
        }
    }

    return 0;
}
