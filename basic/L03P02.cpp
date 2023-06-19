#include <iostream>
using namespace std;
int main()
{
    int n = 10, s = 0;
    while (n > 0)
    {
        s = s + n;
        cout << "hemlo " << n << " " << s << endl;
        n = n - 1;
    }
}