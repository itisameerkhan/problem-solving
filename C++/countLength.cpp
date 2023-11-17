#include<bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> nums = {1,0,0,1,0,0,1,1,1,0,0,0};
    int result = -1;
    for(int i=0;i<nums.size();i++) 
    {
        int count = 0, flag = -1;
        for(int j=i;j<n;j++)
        {
            if(nums[j] == flag || flag == -1) 
            {
                flag = !nums[j];
                count++;
            }
        }
    }
}