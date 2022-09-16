#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, const char * argv[])
{
    int num_of_operation;
    int num_of_goal;
    cin>>num_of_operation;
    cin>>num_of_goal;
    int goal[num_of_goal];
    
    for(int i=0;i<num_of_goal;i++)
    {
        cin>>goal[i];
    }
    int count_index=0;
    vector<int> l_of_index;
    int two_required=0;
    vector<pair<vector<int>,int>> v;
    for(int i=0;i<num_of_operation;i++)
    {
        int order_or_cook;
        cin>>order_or_cook;
        if(order_or_cook==1)
        {
            int restaurant,price;
            cin>>restaurant>>price;
            vector<int> add;
            add.push_back(price);
            add.push_back(restaurant);
            //add.push_back(price);
            pair <vector<int>,int> x;
            x.first=add;
            x.second=two_required;
            v.push_back(x);
            count_index++;
        }
        else
        {
            two_required+=1;
            l_of_index.push_back(count_index);
        }
    }
    sort(v.begin(),v.end());
    
    
    /*
    // test part begin
    cout<<"<";
    for(int i=0;i<v.size();i++)
    {
        cout<<"{";
        cout<<"<";
        for(int j=0;j<v[i].first.size();j++)
        {
            cout<<v[i].first[j];
            if(j+1<v[i].first.size())
            {
                cout<<",";
            }
        }
        cout<<">";
        cout<<","<<v[i].second;
        cout<<"}";
        if(i+1<v.size())
        {
            cout<<",";
        }
    }
    cout<<">";
    cout<<endl;
    
    //for(int i=0;i<l_of_index.size();i++)
    //{
     //   cout<<l_of_index[i]<<" ";
    //}
    //cout<<endl;
     
    // test part end
          */
    
    
     
    vector<int> total_sale;
    int total=0;
    int count=0;
    while(v.size()!=0)
    {
        for(int i=0;i<v.size();i++)
        {
            if(count>=v[i].second)
            {
                total_sale.push_back((v[i].first)[0]+total);
                total+=v[i].first[0];
                v.erase(v.begin()+i);
                break;
            }
        }
        count+=1;
    }
    
    
         /*
    //test part begin
    cout<<"<";
    for(int i=0;i<v.size();i++)
    {
        cout<<"{";
        cout<<"<";
        for(int j=0;j<v[i].first.size();j++)
        {
            cout<<v[i].first[j];
            if(j+1<v[i].first.size())
            {
                cout<<",";
            }
        }
        cout<<">";
        cout<<","<<v[i].second;
        cout<<"}";
        if(i+1<v.size())
        {
            cout<<",";
        }
    }
    cout<<">";
    cout<<endl;
    //test part end
          */
    
    
    
    
    //test part begin
    /*
    for(int i=0;i<total_sale.size();i++)
    {
        cout<<total_sale[i]<<" ";
    }
    cout<<endl;
     */
    //test part end
    
    
    
    for(int i=0;i<num_of_goal;i++)
    {
        for(int j=0;j<total_sale.size();j++)
        {
            if(total_sale[j]>=goal[i])
            {
                cout<<j+1<<" ";
                break;
            }
            if(j+1==total_sale.size())
            {
                cout<<-1<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
