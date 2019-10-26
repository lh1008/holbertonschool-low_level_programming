#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - New elements
 * @c: char type member
 * @i: int type member
 * @f: float type member
 * Description: Define format with new type with new elements
 */
struct format
{
        char c;
        int i;
        float f;
	char *s;
};

#endif /* FUNCTIONS_H */
