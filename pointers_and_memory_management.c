#include <stdio.h>
#include <stdlib.h>

int main() {
    int cost = 54;
    int *ptr = &cost; // Salveaza adresa memoriei in ptr

    printf("Adresa memoriei: %p\n", ptr); // %p este specificator de format pentru pointeri
    printf("Valoare: %d\n", *ptr); // Valoarea se obtine prin dereferentierea pointerului, utilizand *

    int myNumbers[4] = {1, 2, 3, 4};
    int *ptrArray = myNumbers;
    int i;

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for (i = 0; i < length; i++) {
        printf("%d\n", *(ptrArray + i));
    }

    int *students;
    int numStudents = 12;

    students = calloc(numStudents, sizeof(*students)); // Alocare dinamica a memoriei pentru cei 12 studenti
    printf("%d bytes\n", numStudents * sizeof(*students)); // Printarea memoriei folosite

    int *ptr02;
    ptr02 = calloc(4, sizeof(*ptr02)); // Alocarea memoriei

    // Scriere in memoria alocata
    *ptr02 = 2;
    ptr02[1] = 4;
    ptr02[2] = 6;

    // Citire din memorie
    printf("%d\n", *ptr02);
    printf("%d | %d | %d\n", ptr02[1], ptr02[2], ptr02[3]);


    int *ptr03 = malloc(4);
    char *ptr04 = (char*) ptr03;

    ptr03[0] = 1684234849;
    printf("%d is %c %c %c %c\n", *ptr03, ptr04[0], ptr04[1], ptr04[2], ptr04[3]);


    int *ptr05, *ptr06, size;

    // Alocarea memoriei pentru 4 numere intregi
    size = 4 * sizeof(*ptr05);
    ptr05 = malloc(size);

    printf("%d bytes allocated at address %p\n", size, ptr05);


    // Realocarea/redimensionarea memoriei pentru 6 numere intregi
    size = 6 * sizeof(*ptr06);
    ptr06 = realloc(ptr05, size);

    // Verificarea realocarii memoriei
    if (ptr06 == NULL) {
        printf("Failed. Unable to resize memory");
    } else {
        printf("Success. %d bytes reallocated at address %p\n", size, ptr06);
        ptr05 = ptr06; // Actualizarea pointerului anterior cu noua memorie alocata
    }

    ptr05[0] = 1;
    ptr05[1] = 2;
    ptr05[2] = 3;
    ptr05[3] = 4;
    ptr05[4] = 5;
    ptr05[5] = 6;

    printf("%d\n", ptr05[0]);

    // Exemplu dealocarea memoriei
    int *ptr07;
    ptr07 = malloc(sizeof(*ptr07));

    if (ptr07 == NULL) {
        printf("Unable to allocate memory");
        return 1;
    }

    *ptr07 = 23;
    printf("%d value is stored at address %p\n", *ptr07, ptr07);

    free(ptr07);
    printf("%d value at address %p after freeing\n", *ptr07, ptr07);

    ptr07 = NULL;


    // Exemple de memory leak
    // Ex 1
    int testVar01 = 5;
    int *ptr08;

    ptr08 = calloc(2, sizeof(*ptr08));
    ptr08 = &testVar01; // Pointerul salveaza memoria variabilei testVar01, astfel dealocarea memoriei alocate anterior nu se mai poate realiza
    printf("%d\n", *ptr08);

    // Ex 2 - daca realocarea esueaza controlul asupra pointerului initial catre adresa initiala se pierde
    int *ptr09;
    ptr09 = malloc(sizeof(*ptr09));
    printf("%p address before reallocation\n", ptr09);
    ptr09 = realloc(ptr09, 1000000000000000000 * sizeof(*ptr09));
    printf("%p address after reallocation\n", ptr09);

    if (ptr09 == NULL) {
        printf("Unable to reallocate memory");
    } else {
        printf("Reallocated successfully");
    }

    return 0;
}