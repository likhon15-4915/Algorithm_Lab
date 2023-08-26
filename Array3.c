 #include <stdio.h>
int main() {
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the array elements:\n");
	for (int i = 0; i < n; i++) {
    	scanf("%d", &arr[i]);
	}
	printf("Positive numbers: ");
	for (int i = 0; i < n; i++) {
    	if (arr[i] > 0) {
        	printf("%d ", arr[i]);
    	}
	}
	printf("\n");
	printf("Negative numbers: ");
	for (int i = 0; i < n; i++) {
    	if (arr[i] < 0) {
        	printf("%d ", arr[i]);
    	}
	}
	printf("\n");
	return 0;
}
