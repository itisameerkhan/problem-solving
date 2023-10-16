#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    int checkGreaterElement(vector<int> &nums,int element,int index)
    {
        for(int i=index;i<nums.size();i++)
        {
            if(nums[i] > element) return nums[i];
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int> &nums)
    {
        vector<int> result;
        for(int i=0;i<nums.size()-1;i++)
        {
            result.push_back(checkGreaterElement(nums,nums[i],i+1));
        }
        result.push_back(-1);
        return result;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    Solution sol;
    vector<int> result = sol.nextGreaterElement(nums);
    for(auto i: result) cout<<i<<" ";
}
