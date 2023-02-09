#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
#define floop(n) for (int i = 0; i < n; i++)

const ll mod = 1e9 + 7;

string lower = {"abcdefghijklmnopqrstuvwxyz"};
string upper = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

string encrypt(string message, int key)
{
    for (int i = 0; i < message.size(); i++)
    {
        if (message[i] == ' ')
            continue;
        if ('a' <= message[i] && message[i] <= 'z')
        {
            int idx = ((message[i] - 'a') + key) % 26;
            message[i] = lower[idx];
        }
        else if ('A' <= message[i] && message[i] <= 'Z')
        {
            int idx = ((message[i] - 'A') + key) % 26;
            message[i] = upper[idx];
        }
        // message[i] = ((message[i] - "a")+key)%26;
    }
    return message;
}

string decrypt(string message, int key)
{
    for (int i = 0; i < message.size(); i++)
    {
        if (message[i] == ' ')
            continue;
        if ('a' <= message[i] && message[i] <= 'z')
        {
            int idx = ((message[i] - 'a') - key) % 26;
            if (idx < 0)
                idx += 26;
            message[i] = lower[idx];
        }
        else if ('A' <= message[i] && message[i] <= 'Z')
        {
            int idx = ((message[i] - 'A') - key) % 26;
            if (idx < 0)
                idx += 26;
            message[i] = upper[idx];
        }
        // message[i] = ((message[i] - "a")+key)%26;
    }
    return message;
}

int32_t main()
{

    int key;
    cout << "Enter the key : ";
    cin >> key;
    cout << endl;
    string message;
    cout << "Enter the message : ";
    cin.ignore();
    getline(cin, message);
    cout << endl;
    string res = encrypt(message, key);
    cout << "The Encrypted message is : " << res << endl;

    cout << endl;
    cout << "The Decrupted message is : " << decrypt(res, key) << endl;

    return 0;
}
