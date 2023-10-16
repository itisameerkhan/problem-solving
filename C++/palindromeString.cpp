#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string temp = s;
    int start = 0;
    int end = s.size()-1;
    while(start < end)
    {
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--;
    }
    if(temp == s) cout<<"Palindrome string";
    else cout<<"Not a palindrome string";
}