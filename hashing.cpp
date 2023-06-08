#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i]; 
    }


    //hashing pre computation
    int hash[13]={0};
    for(int i = 0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    // hash by a  map
    map<int,int> mpp;
    for(int i = 0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    //query
    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;

    //fetching
        cout << hash[number] << endl; 
        cout << mpp[number] << endl; 
    }
    return 0;
}