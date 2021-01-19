/* Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

main_1_8() {
	int c, bl, tab, nl;
	bl = 0;
	tab = 0;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++bl;
		}
		else if (c == '\t') {
			++tab;
		}
		else if (c == '\n') {
			++nl;
		}
	}

	printf("Blanks: %d\n", bl);
	printf("Tabs: %d\n", tab);
	printf("Newlines: %d\n", nl);
}
