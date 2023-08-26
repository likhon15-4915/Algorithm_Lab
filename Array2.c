#include <stdio.h>
int main()
{
	int totalCases;
	printf("Total Case: ");
	scanf("%d", &totalCases);
	int n;
	printf("How many Numbers you want to insert? ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d array elements:\n", n);
	for (int i = 0; i < n; i++)
	{
    	scanf("%d", &arr[i]);
	}
	int searchData;
	for (int caseNum = 1; caseNum <= totalCases; caseNum++)
	{
    	printf("Case:%d\n", caseNum);
    	printf("Enter Data You want to search:\n");
    	scanf("%d", &searchData);
    	int found = 0;
    	int index = -1;
    	for (int i = 0; i < n; i++)
    	{
        	if (arr[i] == searchData)
        	{
            	found = 1;
            	index = i;
            	break;
        	}
    	}
    	if (found)
    	{
        	printf("%d is found at Index %d\n", searchData, index);
    	}
    	else
    	{
        	printf("%d is not found in the Array\n", searchData);
    	}
	}
  return 0;
}
