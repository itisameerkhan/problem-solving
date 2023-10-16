#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int startIndex = 0;
    int endIndex = str.size() - 1;
    while(startIndex < endIndex)
    {
        char temp = str[startIndex];
        str[startIndex] = str[endIndex];
        str[endIndex] = temp;
        startIndex++;
        endIndex--;
    }
    cout<<str;
}