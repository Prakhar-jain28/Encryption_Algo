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

string cipher(string message, string key)
{
    int n = message.size(), m = key.size();
    for (int i = 0; i < n; i++)
    {
        if (message[i] == ' ')
            continue;
        message[i] = 'a' + (message[i] - 'a' + key[i % m] - 'a') % 26;
    }
    return message;
}

string decipher(string message, string key)
{
    int n = message.size(), m = key.size();
    for (int i = 0; i < n; i++)
    {
        if (message[i] == ' ')
            continue;
        if (message[i] - (key[i % m] - 'a') < 'a')
            message[i] = message[i] - (key[i % m] - 'a') + 26;
        else
            message[i] = message[i] - (key[i % m] - 'a');
    }
    return message;
}

int32_t main()
{

    string message, key;
    cout << "Enter the Key string : ";
    cin >> key;
    cout << endl;
    cout << "Enter the Message : ";
    cin.ignore();
    getline(cin, message);
    cout << endl;

    string hidden = cipher(message, key);
    cout << "The encrypted message is : " << hidden << endl;
    message = decipher(hidden, key);
    cout << "The decrypted message is : " << message << endl;
    return 0;
}
