#include <stdio.h>
int main() {
	int n, a[100],i, small, large;
	printf("Enter the Array size: ");
	scanf("%d", &n);
	printf("Enter the Number:");
	for (i=0;i<n;i++) {
    	scanf("%d", &a[i]);
	}
	small=a[0];
	large=a[0];
	for (i=1;i<n;i++) {
    	if (a[i] < small) {
        	small=a[i];
    	}
    	if (a[i] > large) {
        	large=a[i];
    	}
	}
	printf("Smallest value %d\n", small);
	printf("Largest value %d\n", large);
	return 0;
}
