#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *nums,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    int k; 
    cin>>k;
    bubbleSort(nums,n);
    cout<<nums[k-1];
}