#include <iostream>
using namespace std;
int main()
{   int m,n,x,y;
    cin >> m >> n;
    int a[m][n]={0};
    for(int i=1;i<=m;i++)
        {
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }

    return 0;
}