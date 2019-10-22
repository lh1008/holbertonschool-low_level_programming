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

/**
 * char - Typedef for dog dog_t
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
