#include<stdio.h>
#include<stdlib.h>

int main()
{
    char alfanumerico;
    printf("Ingresar un caracter alfanumerico: ");
    scanf("%c",&alfanumerico);

    switch(alfanumerico)
    {
    case 'A':
        printf("VOCAL\n");
        printf("Valor ASCII 65");
        break;
    case 'E':
        printf("VOCAL\n");
        printf("Valor ASCII 69");
        break;
    case 'I':
        printf("VOCAL\n");
        printf("Valor ASCII 73");
        break;
    case 'O':
        printf("VOCAL\n");
        printf("Valor ASCII 79");
        break;
    case 'U':
        printf("VOCAL\n");
        printf("Valor ASCII 85");
        break;
    case 'a':
        printf("VOCAL\n");
        printf("Valor ASCII 97");
        break;
    case 'e':
        printf("VOCAL\n");
        printf("Valor ASCII 101");
        break;
    case 'i':
        printf("VOCAL\n");
        printf("Valor ASCII 105");
        break;
    case 'o':
        printf("VOCAL\n");
        printf("Valor ASCII 111");
        break;
    case 'u':
        printf("VOCAL\n");
        printf("Valor ASCII 117");
        break;
    default:
        printf("No es VOCAL");
    }

    return 0;
}
