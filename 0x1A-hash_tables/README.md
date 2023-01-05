# C - Hash tables

---

The objective of this project is to learn about hash tables by solving tasks that
pose the following questions:

- What is a hash function and what makes a good hash function?
- What is a hash table, how do they work and how are they used?
- What is a collision and what are the main ways of dealing with collisions in
  the context of a hash table?
- What are the advantages and drawbacks of using hash tables?
- What are the most common use cases of hash tables?

The hash function in this program uses the `djb2` algorithm. It supports the following
operations:

- Adding items to a regular hash table and a sorted hash table
- Retrieving the value of a key in any of the tables
- Printing the hash tables in the format `{'key': 'value', ...}`
- Printing the sorted hash table in reverse order
- Deleting the hash tables

> _NB: key/value pairs are provided as strings.
> The sorted hash table is sorted based on the [ASCII](https://en.wikipedia.org/wiki/ASCII)
> values of the characters of the `key`.
> It is assumed that every character in `key` will be a character in the ASCII table._

## Usage

Compile the source files. If you have `gcc` installed, run:

```shell
gcc -g -c *.c
```

Create a library from the object files

```shell
ar -rc libhash.a *.o
ranlib libhash.a
rm *.o
```

Link to the library while compiling your `main` function. Make sure to do the compilation
in the directory for this project. Example of a `main.c` would be;

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
	hash_table_t *hashTable;
	shash_table_t *sortedHashTable;
	char *value;

	hashTable = hash_table_create(1024);
	hash_table_set(hashTable, "c", "fun");
	hash_table_set(hashTable, "python", "awesome");
	hash_table_set(hashTable, "Bob", "and Kris love asm");
	hash_table_set(hashTable, "N", "queens");
	hash_table_set(hashTable, "Asterix", "Obelix");
	hash_table_set(hashTable, "Betty", "Cool");
	hash_table_set(hashTable, "98", "Battery Street");
	hash_table_set(hashTable, "Chee-zaram", "Okeke");
	hash_table_set(hashTable, "c", "isfun");
	hash_table_set(hashTable, "betty", "cool");
	hash_table_set(hashTable, "joyful", "song");
	hash_table_set(hashTable, "synaphea", "collides with joyful");

	sortedHashTable = shash_table_create(1024);
	shash_table_set(sortedHashTable, "y", "0");
	shash_table_print(sortedHashTable);
	shash_table_set(sortedHashTable, "j", "1");
	shash_table_print(sortedHashTable);
	shash_table_set(sortedHashTable, "c", "2");
	shash_table_print(sortedHashTable);
	shash_table_set(sortedHashTable, "Chee-zaram", "3");
	shash_table_print(sortedHashTable);
	shash_table_set(sortedHashTable, "Chee-z", "7");
	shash_table_print(sortedHashTable);
	shash_table_set(sortedHashTable, "On", "2");
	shash_table_print(sortedHashTable);
	shash_table_set(sortedHashTable, "One", "2");
	shash_table_print(sortedHashTable);
	shash_table_set(sortedHashTable, "z", "4");

	value = hash_table_get(hashTable, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(hashTable, "joyful");
	printf("%s:%s\n", "joyful", value);
	value = hash_table_get(hashTable, "synaphea");
	printf("%s:%s\n", "synaphea", value);
	value = hash_table_get(hashTable, "Chee-zaram");
	printf("%s:%s\n", "Chee-zaram", value);
	printf("\n");

	value = shash_table_get(sortedHashTable, "y");
	printf("%s:%s\n", "y", value);
	value = shash_table_get(sortedHashTable, "j");
	printf("%s:%s\n", "j", value);
	printf("\n");

	hash_table_print(hashTable);
	printf("\n");
	shash_table_print(sortedHashTable);
	printf("\n");
	shash_table_print_rev(sortedHashTable);
	printf("\n");

	hash_table_delete(hashTable);
	shash_table_delete(sortedHashTable);

	return (EXIT_SUCCESS);
}
```

To link the `main.c` with the `libhash.a`, run;

```shell
gcc -g main.c -L. -lhash -o chee.hashTable
```

Dynamic memory is cleanly handled here, with no leaks and no errors. To see that,
run your program with `valgrind`;

```shell
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out ./chee.hashTable
```

Valgrind details are stored in the file `valgrind-out`. To view, run;

```shell
less valgrind-out
```

---

## AUTHOR

[Chee-zaram Okeke](https://github.com/chee-zaram)
