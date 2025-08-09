/*
 * shapes_program.c
 *
 *  Created on: Aug 9, 2025
 *      Author: FARES
 */


#include <stdio.h>
#include <ctype.h>
#include "shapes_header.h"

int main() {
	char repeat;
	do {
		ShapePrint();
		printf("\nDo you want to print another pyramid? (y/n): ");
		scanf(" %c", &repeat);
	} while (tolower(repeat) == 'y');
	return 0;
}
