import java.util.*;

class Solution 
{
    public int[] findNextGreaterElement(int[] nums)
    {
        int[] result = new int[nums.length];
        Stack<Integer> stack = new Stack<>();
        for(int i=nums.length-1;i>=0;i--)
        {
            if(!stack.empty())
            {
                while(!stack.empty() && stack.peek() <= nums[i])
                {
                    stack.pop();
                }
            }
            result[i] = stack.empty() ? -1 : stack.peek();
            stack.push(nums[i]);
        }
        return result;
    }
}
public class nextGreaterElement 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nums[] = new int[n];
        for(int i=0;i<n;i++) nums[i] = sc.nextInt();
        sc.close();

        Solution sol = new Solution();
        int[] result = sol.findNextGreaterElement(nums);
        for(int i=0;i<result.length;i++) System.out.print(result[i] + " ");
    }
}