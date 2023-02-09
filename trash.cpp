#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
#define floop(n) for (int i = 0; i < n; i++)

const ll mod = 1e9 + 7;

bool func(string a, string b)
{
    if (a.size() == b.size())
        return (a > b) ? 0 : 1;
    else
        return (a.size() > b.size()) ? 0 : 1;
}

int32_t main()
{

    vector<string> str = {"5", "4", "3", "2", "1"};
    sort(str.begin(), str.end(), func);
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}
