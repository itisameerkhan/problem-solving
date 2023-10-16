#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<vector<int>> output(n);
    for(int i=0;i<output.size();i++) output[i].resize(i+1,1);

    n = n-2;
    int currentIndex = 2;

    while(n--)
    {
        int previous = 0;
        int current = 0;
        for(int i=0;i<output[currentIndex].size()-1;i++)
        {
            current = output[currentIndex-1][i];
            output[currentIndex][i] = current + previous;
            previous = current;
        }
        currentIndex++;
    }

    for(int i=0;i<output.size();i++)
    {
        for(int j=0;j<output[i].size();j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
}