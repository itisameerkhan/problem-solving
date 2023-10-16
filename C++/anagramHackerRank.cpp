#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1,string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1.size() < s2.size() || s1.size() > s2.size()) return false;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i] != s2[i]) return false;
    }
    return true;
}
vector<vector<string>> groupAnagram(vector<string> words,vector<string> queries)
{
    vector<vector<string>> output;
    for(auto query: queries)
    {
        vector<string> result;
        for(auto word: words)
        {
            if(checkAnagram(word,query))
            {
                result.push_back(word);
            }
        }
        sort(result.begin(),result.end());
        output.push_back(result);
    }
    return output;
}
int main()
{
    vector<string> words = {"allot","cat","peach","dusty","act","cheap"};
    vector<string> queries = {"tac","study","peahc"};
    vector<vector<string>> result = groupAnagram(words,queries);
    for(auto i: result)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}