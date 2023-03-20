#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: "dog" struct contains name, age
 * and the name of owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
