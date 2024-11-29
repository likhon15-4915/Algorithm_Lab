#include <stdio.h>
int isVowel(char c) {
	char vowels[] = "AEIOUaeiou";
	for (int i = 0; vowels[i] != '\0'; i++) {
    	if (c == vowels[i]) {
        	return 1;
    	}
	}
	return 0;
}
int main() {
	int test_case;
	scanf("%d", &test_case);
	for (int i = 0; i < test_case; i++) {
    	char input;
    	scanf(" %c", &input);
    	if (input >= '0' && input <= '9') {
        	printf("%c is a Digit\n", input);
    	} else if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        	printf("%c is an Alphabet : It is a %s\n", input, isVowel(input) ? "Vowel" : "Consonant");
    	} else {
        	printf("%c is a Special Character\n", input);
    	}
	}
	return 0;
}
