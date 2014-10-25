/*
* main.c - Creating some matrices
*
* Copyright (C) 2014 Ervin Mazlagic <nino.ninux@gmail.com>
*
* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or (at
* your option) any later version.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* walong with this program.  If not, see <http://www.gnu.org/licenses/>.
*
* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#ifndef STDIO
	#define STDIO
	#include <stdio.h>
#endif

#ifndef MATRIX
	#define MATRIX
	#include "matrix.h"
#endif

int main(int argv, char **argc)
{
	int **m;
	int rows, cols, init;

	if (argv == 4) {
		rows = atoi(argc[1]);
		cols = atoi(argc[2]);
		init = atoi(argc[3]);
		#ifdef DEBUG
			printf("DEBUG: %i parameters given:\n", argv);
			printf("\trows\t%i\n", rows);
			printf("\tcolumns\t%i\n", cols);
			printf("\tinitial\t%i\n", init);
		#endif
	} else if (argv == 1) {
		#ifdef DEBUG
			printf("DEBUG: no parameters -> creating default");
		#endif
		rows = 3;
		cols = 3;
		init = 3;
	} else {
		printf("wrong syntax\n");
		printf("exiting...\n");
		return -1;
	}

	#ifdef DEBUG
		printf("DEBUG: started main\n");
	#endif

	m = create_matrix(rows, cols, init);

	#ifdef DEBUG
		printf("DEBUG: exiting main\n");
	#endif

	return 0;
}
