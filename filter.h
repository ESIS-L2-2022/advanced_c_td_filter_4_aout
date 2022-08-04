typedef struct {
  int *elements;
  size_t size;
} Array;

Array filter(int * tab, int nb_elements,int (*function)(int));
int ma_fonction(int nb);

