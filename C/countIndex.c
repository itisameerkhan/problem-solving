#include<stdio.h>

int main() 
{
    int arr[] = {1,2,3,2,2,4,5,5,5,2};
    int n = 10;
    int count=0;
    for(int i=0;i<n;i++) {
        if((i%2==0 && arr[i]%2==0) || (i%2!=0 && arr[i]%2!=0)) count++;
    }
    printf("%d",count);
}