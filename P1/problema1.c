#include <stdio.h>

int contarCaracter(char *array, char ch){
    int contador = 0;
    while(*array){
        if(*array == ch){
            contador++;
        }
        array++;
    }
    if(contador == 0){
        return -1;
    }
    return contador;
}

int main(int argc, char const *argv[])
{
    char in;
    char cadena[100];
    printf("Ingrese una cadena de caracteres deseada por usted: ");
    fgets (cadena, 100, stdin);
    printf("Ingrese el caracter que desea buscar en la cadena ya ingresada: ");
    scanf("%c", &in);
    int out = contarCaracter(cadena, in);
    if(out == -1){
        printf("El caracter que quiere buscar no se encontraba en la cadena\n");
    } else {
        printf("El caracter %c se encontro %d veces en la cadena\n", in, out);
    }
    return 0;
}