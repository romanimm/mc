/*
* list.c - Exercise 1, SW2
*
* Copyright (C) 2014 Ervin Mazlagic <nino.ninux@gmail.com>
*
* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as ndet [-Wuninitialized]
[ninux@t430 ex1]$ make clean all
published by
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

#include <stdio.h>
#include <stdlib.h>ndet [-Wuninitialized]
[ninux@t430 ex1]$ make clean all

#include <string.h>
#include "list.h"

#define MAX_NAMESIZE 20

extern entry_ptr_t head;


int plist(entry_ptr_t origin)
{
	entry_ptr_t ptr;

	if (origin == NULL) {
		printf("list is empty\n");
		return -1;
	} else {
		ptr = origin;
	}

	printf("list\n");
	printf("\thead:\t[ %s %s\n",
	       ptr->name.first,
	       ptr->name.last);
	ptr = *(ptr->next);
	do {
		printf("\t\t-> %s %s\n",
		       ptr->name.first,
		       ptr->name.last);
		ptr = *(ptr->next);
	} while ((ptr->next) != NULL);
	printf("\ttail:\t-> %s %s ]\n",
	       ptr->name.first,
	       ptr->name.last);

	#ifdef DEBUG
		printf("DEBUG: printing the list\n");
	#endif
	return 0;
}

int add(void)
{
	/*
	name_t *name;
	char first_name[20];
	char last_name[20];
	int limit;

	limit = 20;

	printf("first name: ");
	fgets(first_name, limit, stdin);
	fflush();
	printf("last name: ");
	fgets(last_name, limit, stdin);
	fflush();

	name->first = first_name;
	name->last = last_name;
	*/

	#ifdef DEBUG
		printf("DEBUG: adding entry to list\n");
	#endif

	return 0;
}

name_t *create_name(char *first_name, char *last_name)
{
	char* pName;
	name_t* pEle;

	pName = malloc(strlen(first_name) + strlen(last_name));
	pEle = (name_t*)malloc(sizeof(name_t));

	strcpy(pName, first_name);
	strcpy(pName + strlen(first_name), lastName);
	name->first = pName;
	name->last = pName + strlen(first_name);
	name->next = NULL;
	return name;
}

entry_t *create_entry(name_t name, entry_ptr_t *next)
{
	entry_t *entry;
	entry = malloc(sizeof(name) + sizeof(entry_t));
	entry->name = name;
	entry->next = next;
	return entry;
}
