/* Exercise 1-9. Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 */

#include <stdio.h>

main_1_9() {
	int c, afterBlank;
	afterBlank = 0;	//indicates if the previous character was a blank

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (afterBlank == 0) {
				afterBlank = 1;
				putchar(c);
			}
		}
		else {
			if (afterBlank == 1) afterBlank = 0;
			putchar(c);
		}
	}
}
