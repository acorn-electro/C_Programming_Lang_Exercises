/* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by
 * \t, each backspace by \b, and each backslash by \\.
 */

#include <stdio.h>

main_1_10() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");	//prints as \t
		}
		else if (c == '\b') {
			printf("\\b");
		}
		else if (c == '\\') {
			printf("\\\\");
		}
		else {
			putchar(c);
		}
	}
}
