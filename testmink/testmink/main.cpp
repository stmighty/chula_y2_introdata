#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

vector<int> sort_m(vector<int> v)
{
    int score[v.size()];
    for(int i=0;i<v.size();i++)
    {
        score[i] = v[i];
    }
    selectionSort(score , v.size());
    vector<int> result;
    for(int i=0;i<v.size();i++)
    {
        result.push_back(score[i]);
    }
    return result;
}*/


int main()
{
    int N;
    cin>>N;
    vector<int> v_of_score;
    vector<int> v_of_score2;
    vector<char> result;
    for(int i=0;i<N;i++)
    {
        int score;
        cin>>score;
        v_of_score.push_back(score);
    }
    for(int i=0;i<N;i++)
    {
        v_of_score2.push_back(v_of_score[i]);
    }
    //sort(v_of_score2.begin(),v_of_score2.end());
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(v_of_score2[i]>v_of_score2[j])
            {
                swap(v_of_score2[i],v_of_score2[j]);
            }
        }
    }
    
    int a,b,c,d,e,f;
    int gradeA, gradeB, gradeC, gradeD, gradeE, gradeF;
    a = floor(90*(N+1)/100);
    b = floor(70*(N+1)/100);
    c = floor(50*(N+1)/100);
    d = floor(30*(N+1)/100);
    e = floor(10*(N+1)/100);
    
    gradeA = v_of_score2[a];
    gradeB = v_of_score2[b];
    gradeC = v_of_score2[c];
    gradeD = v_of_score2[d];
    gradeE = v_of_score2[e];
    
    for(int i=0;i<N;i++)
    {
        if(v_of_score[i]>=gradeA)
        {
            cout<<"A ";
        }
        else if(v_of_score[i]>=gradeB)
        {
            cout<<"B ";
        }
        else if(v_of_score[i]>=gradeC)
        {
            cout<<"C ";
        }
        else if(v_of_score[i]>=gradeD)
        {
            cout<<"D ";
        }
        else if(v_of_score[i]>=gradeE)
        {
            cout<<"E ";
        }
        else
        {
            cout<<"F ";
        }
    }
    return (0);
}
