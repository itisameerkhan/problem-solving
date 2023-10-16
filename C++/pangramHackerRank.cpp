#include<bits/stdc++.h>
using namespace std;

bool checkPangram(string s)
{
    int frequency[26] = {0};
    for(int i=0;i<s.size();i++)
     frequency[s[i] - 'a'] = 1;
    for(int i=0;i<26;i++) 
    if(frequency[i] == 0) return false;
    return true; 
}
string isPangram(vector<string> words)
{
    string result = "";
    for(auto i: words)
    {
        if(checkPangram(i)) result += "1";
        else result += "0";
    }
    return result;
}
int main()
{
    vector<string> words;
    words.push_back("we promptly judged antique ivory buckles for the next prize");
    words.push_back("We promptly judged antique ivory buckles for the prize");
    words.push_back("the quick brown fox jumps over the lazy dog");
    words.push_back("i enjoy reading books and playing soccer");
    string result = isPangram(words);
    cout<<result;
}

