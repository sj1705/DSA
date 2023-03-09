#include <bits/stdc++.h>
using namespace std;

int f(int index, vector<int> &ds, int s, int arr[], int n, int sum)
{
    if (index == n)
    {
        if (sum == s)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else
        {
            return false;
        }
    }

    ds.push_back(arr[index]);
    sum=sum+arr[index];
    f(index+1,ds,s,arr,n,sum);
    ds.pop_back();
    sum=sum-arr[index];
    f(index+1,ds,s,arr,n,sum);
}
int main(){
    int arr[]= {1,2,1,3,4,5,2,4,2,6};
    int s =4;
    int n=10;
    vector <int> ds;
    f(0,ds,s,arr,n,0);
}