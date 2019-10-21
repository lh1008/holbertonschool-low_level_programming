#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * struct dog - New elements
 * @name: char type member
 * @age: float type member
 * @owner: char type member
 * Description: Define a new type with new elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
