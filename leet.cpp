#include <vector>

#include <string>

#include <iostream>

using namespace std;

int main()
{
    vector<string> vtr;
    vtr.push_back("brodiaea");

    for (int i = 0; i < vtr.size(); i++)
        cout << vtr[i] << ", ";
    cout << endl;

    return 0;
}