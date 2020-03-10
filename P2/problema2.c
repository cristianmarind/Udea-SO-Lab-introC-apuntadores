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

int obtenerIndice(char *array, char ch) {
  if (contarCaracter(array, ch))
  {
    int index = -1;
    int i = 0;
    while(*array){
        if(*array == ch){
            index = i;
            break;
        }
        i++;
        array++;
    }
    return index;
  }else{
    return -1;
  }
}

int main(int argc, char const *argv[])
{
    char in;
    char cadena[100];
    printf("Ingrese una cadena de caracteres deseada por usted: ");
    fgets (cadena, 100, stdin);
    printf("Ingrese el caracter que desea buscar en la cadena ya ingresada: ");
    scanf("%c", &in);
    int out = obtenerIndice(cadena, in);
    if(out == -1){
        printf("El caracter que quiere buscar no se encontraba en la cadena\n");
    } else {
        printf("El caracter %c se encontro en la posicion %d de la cadena ingresada\n", in, out);
    }
    return 0;
}