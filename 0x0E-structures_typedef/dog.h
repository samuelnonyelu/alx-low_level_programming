#ifndef DOG
#define DOG

/**
 * struct dog - defines a new type dog with elements
 * @name: string name
 * @age: float age
 * @owner: string owner name
 *
 * Description: same as above
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG*/
