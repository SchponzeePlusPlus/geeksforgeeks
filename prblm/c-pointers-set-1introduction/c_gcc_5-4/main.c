/*
 *	C++ Pointers ( Incrementing a variable) | Set 1
 *
 *	https://practice.geeksforgeeks.org/problems/c-pointers-set-1introduction/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
 *
 * Given a pointer to a variable a, the task is to complete the function updateVar() which will increment the value of the variable by 10. The function does not returns anything.
 * 
 * Examples :

Input: a = 4
Output: 14
Input: a = 61
Output: 71
 *
Constraints:
1 <= T <= 100
1 <= A <= 103
 *
 * Expected Complexities:
 * Time Complexity: O(1)
Auxiliary Space: O(1)
 * 
 * Topic Tags
CPPPointers
 *
 */

//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>
void updateVar(int *a);

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {   int a;
        scanf("%d", &a);
        updateVar(&a);
        printf("%d\n", a);
    
printf("~%s", "\n");}
    return 0;
}
// } Driver Code Ends


//User function Template for C

/* This function is invoked by passing the address of the variable.
	You need to increment the value stored in the variable by 10 */

/* complete the function below */

void updateVar(int *a)
{
	  // write your code here
	  *a += 10;
}

// Result in GeeksForGeeks: Correct