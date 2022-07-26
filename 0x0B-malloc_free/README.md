Write a function that creates an array of chars, and initializes it with a specific char.



Prototype: char *create_array(unsigned int size, char c);

Returns NULL if size = 0

Returns a pointer to the array, or NULL if it fails
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.



Prototype: char *_strdup(char *str);

The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

Returns NULL if str = NULL
Write a function that concatenates two strings.



Prototype: char *str_concat(char *s1, char *s2);
