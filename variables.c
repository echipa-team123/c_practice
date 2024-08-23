#include <stdio.h>

int main() {
    int myNum = 5;
    float myFloatNum = -3.68;
    double myDoubleNum = 14.21;
    char myLetter = 'H';
    char myText[] = "Hello";

    printf("Numar intreg: %d\n", myNum); // Size: 2 or 4 bytes | Format specifiers: %d or %i
    printf("Numar in virgula mobila (float): %f\n", myFloatNum); // Size: 4 bytes | Format specifiers: %f or %F
    printf("Numar in virgula mobila (float) cu zecimale setate: %.2f\n", myFloatNum);
    printf("Numar in virgula mobila (double): %lf\n", myDoubleNum); // Size: 8 bytes | Format specifiers: %lf
    printf("Caracter: %c\n", myLetter); // Size: 1 byte | Format specifiers: %c
    printf("Sir de caractere (string): %s\n", myText);

    printf("Size of int: %lu\n", sizeof(myNum));
    printf("Size of float: %lu\n", sizeof(myFloatNum));
    printf("Size of double: %lu\n", sizeof(myDoubleNum));
    printf("Size of char: %lu\n", sizeof(myLetter));
    printf("Size of string: %lu\n", sizeof(myText));

    myNum = 10;

    printf("Numar intreg modificat: %d\n", myNum);

    int anotherNum = 6;
    int sum = myNum + anotherNum;

    printf("Suma: %d\n", sum);

    int x = 5, y = 6, z = 7; // Declaratii multiple ale variabilelor

    x = y = z = 30; // Atribuire multipla

    int testVar01 = 15;
    int testVar02 = 28;

    float percentage = (float) testVar01 / testVar02 * 100.0;

    printf("Test conversie explicita: %.2f", percentage);

    const int PI = 3.1415; // Numar intreg cu valoare constanta
    // PI = 5; // Error

    return 0;
}