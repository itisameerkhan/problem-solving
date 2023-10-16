#include<bits/stdc++.h>
using namespace std;

vector<int> depthFirstSearch(vector<vector<int>> graph,int startIndex,int endIndex)
{
    vector<int> result;
    for(int i=0;i<graph.size();i++)
    {
        for(int j=0;j<i.size();j++)
        {
            if(graph[i][j] == endIndex) 
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
            else  
            {
                depthFirstSearch(graph,startIndex+1)
            }
        }
    }
    return result;
}
int main()
{
    vector<vector<int>> graph = {{0,1,2},{1,2,0},{3,2,1},{4,3,1}};
    int startIndex = 0;
    int endIndex = 4;
    depthFirstSearch(graph,startIndex,endIndex);
}