#ifndef dog_h
#define dog_h

/**
 * struct dog - structure with basic info name, age, owner
 * @name: name of the user
 * @age: age of the user
 * @owner: owner
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
