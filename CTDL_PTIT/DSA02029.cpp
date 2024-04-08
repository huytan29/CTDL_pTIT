#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
void dequy(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << " -> " << c << endl;
        return;
    }
    dequy(n - 1, a, c, b);
    dequy(1, a, b, c);
    dequy(n - 1, b, a, c);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char a = 'A', b = 'B', c = 'C';
    int n;
    cin >> n;
    dequy(n, a, b, c);
}