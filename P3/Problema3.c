#include <stdio.h>

char cadena[100];
char apoyo[100];

char *obtenerSubcadena(char *arreglo, int index) {
    int i = 0;
    while(*(arreglo + index)){
        if(*(arreglo + index) != 0){
            *(apoyo + i) = *(arreglo + index); 
        }
        else{
            break;
        }
        arreglo++;
        i++;
    }
    char *p3 = apoyo;
    return p3;
}

int main(int argc, char const *argv[]){
    int in;
    printf("Ingrese una cadena de caracteres que desea sumunistra: ");
    fgets (cadena, 100, stdin);
    char *p1 = cadena;
    printf("Ingrese el indice desde donde quiere imprimir la cadena: ");
    scanf("%d", &in);
    char *p2;
    p2 = obtenerSubcadena(p1, (in + 1));
    printf("%s",p2);    
    return 0;
}