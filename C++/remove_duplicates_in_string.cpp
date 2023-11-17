#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string removeDuplicate(string s)
    {
        vector<int> freq(26,0);
        string result = "";
        for(int i=0;i<s.size();i++) 
        {
            if(result[s[i] - 'a'] == 0) {
                result += s[i];
            }
            freq[s[i] - 'a'] = 1;
        }
        return result;
    }
};
int main()
{
    string s = "aaabbbcccbbaacc";
    Solution sol;
    cout<<sol.removeDuplicate(s);
}