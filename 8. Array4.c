#include <stdio.h>
int isPalindrome(int num, int originalNum)
{
 if (num == 0)
	{
    	return originalNum;
	}
 originalNum = originalNum * 10 + num % 10;
	return isPalindrome(num / 10, originalNum);
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
    int reversedNum = isPalindrome(num, 0);
   if (reversedNum == num)
	{
    	printf("%d is a palindrome.\n", num);
	}
	else
	{
    	printf("%d is not a palindrome.\n", num);
	}
 
	return 0;
}
// Time Complexity of this Program -O(log N)
//Space Complexity of this Program- O(log N)
