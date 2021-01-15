/* Exercise 1-7. Write a program to print the value of EOF.
 */

#include <stdio.h>

main_1_7() {
	int c;
	while ((c = getchar()) != EOF)
		putchar(c);
}
