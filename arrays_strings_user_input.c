#include <stdio.h>
#include <string.h>

int main() {
    int myNumbers[] = {10, 16, 33, 45};
    int myNumbers02[3] = {1, 3, 5};
    int i, j;

    // Bad loop
    // for (i = 0; i < 4; i++) {
    //     printf("%d\n", myNumbers[i]);
    // }

    printf("\n------------\n");

    // Better loop
    int arr_length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    for (j = 0; j < arr_length; j++) {
        printf("%d\n", myNumbers[j]);
    }

    printf("\n------------\n");

    printf("%d", myNumbers02[1]);

    printf("\n------------\n");

    printf("%lu\n", sizeof(myNumbers));

    int matrix[2][3] = { {1, 5, 10}, {50, 65, 89} };

    printf("%d\n", matrix[0][2]);

    char greet[] = "Hello World";
    char greet02[] = " Hi";
    char greet03[] = "Hello";
    char testStr[20];

    printf("%s\n", greet);
    printf("%c\n", greet[0]);
    printf("%lu\n", sizeof(greet)); // sizeof include \0
    printf("%d\n", strlen(greet)); // strlen returneaza lungimea string-ului fara \u
    
    strcat(greet, greet02); // Concatenarea string-urilor greet si greet02. Rezultatul este salvata in variabila greet
    printf("%s\n", greet);

    strcpy(testStr, greet); // strcpy copiaza string-ul din variabila greet si o salveaza in variabila testStr
    printf("%s\n", testStr);

    printf("%d\n", strcmp(greet, greet03)); // strcmp compara cele 2 string-uri. Returnari: 0 - egale, alte valori diferite de 0 - diferite

    // int userInput01;

    // printf("Type a number: \n");
    // scanf("%d", &userInput01); // Asteapta input de la utilizator. Argumentul &userInput01 are salvata adresa memoriei variabilei userInput01;
    // printf("Your number is: %d", userInput01);

    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin); // Asteapta input de la utilizator similar cu scanf, diferenta consta in faptul ca fgets citeste toata linia introdusa de catre utilizator
    printf("Hello %s", fullName);

    return 0;
}