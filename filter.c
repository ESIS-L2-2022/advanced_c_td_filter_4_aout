
#include<stdio.h>
#include<stdlib.h>
#include "filter.h"

int main() {

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    Array filteredArray =  filter(array, sizeof(array) / sizeof(int), ma_fonction);
    
    for (int i = 0; i < filteredArray.size ; i++) {
        printf("%d\n", filteredArray.elements[i]);
    }

    return 0;
}

int ma_fonction(int nb) {
    if (nb % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

Array filter(int * tab, int nb_elements,int (*function)(int)) {

    Array newArray;
    newArray.size = 0;
    newArray.elements = malloc(sizeof(int) * 0);
    for (int i = 0; i < nb_elements; i++) {
        if(function(tab[i])){
            newArray.elements = realloc(newArray.elements,newArray.size * sizeof(int));
            newArray.elements[newArray.size] = tab[i];
            newArray.size++;
        }
    }
    return newArray;
}

