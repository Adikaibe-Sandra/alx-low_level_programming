#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Initializes a variable of type dog structure
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: Owner
 * Description: This Structure is for a Dog
 *
 * Return: Nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
