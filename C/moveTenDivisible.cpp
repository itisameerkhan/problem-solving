// C++ program to move all values equal to K to the end of
// the Array
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to move the element to the end
vector<int> moveElementToEnd(vector<int> array)
{
    // Mark left pointer
    int i = 0;
    // Mark the right pointer
    int j = array.size() - 1;
    // Iterate until left pointer crosses the right pointer
    while (i < j) {
        while (i < j && array[j]%10==0)
            // decrement right pointer
            j--;
        if (array[i]%10==0)
            // swap the two elements in the array
            swap(array[i], array[j]);
        // increment left pointer
        i++;
    }
    // return the result
    return array;
}
 
// Driver code
int main(int argc, char* argv[])
{
 
    vector<int> arr = { 1, 10,2,20,3,30};
    vector<int> ans = moveElementToEnd(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << ans[i] << " ";
    return 0;
}