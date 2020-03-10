#include <stdio.h>

double hallarMediana(double *array, int longitud){
    int mitad = (longitud)/2;
    double mediana = *(array + mitad);
    return mediana;
}

void swap(double *vec, int o, int d)
{
    double temp;
    temp = *(vec + d);
    *(vec + d) = *(vec + o);
    *(vec + o) = temp;
}

void burbuja(double *vecAordenar, int tamano)
{
    int i, j;
    for (j=0; j<tamano; j++)
        for (i=0; i<tamano-1; i++)
            if(*(vecAordenar + i) > *(vecAordenar + i + 1))
                 swap(vecAordenar, i, i+1);
}

int main(int argc, char const *argv[]){
    int nPositions;
    double mediana;
    printf("Ingrese el numero de posiciones IMPAR del vector: \n");
    scanf("%d", &nPositions);
    while(nPositions % 2 == 0){
        printf("Ingrese el numero de posiciones PAR del vector: \n");
        scanf("%d", &nPositions);
    } 
    double vector[nPositions];
    for(int i = 0; i < nPositions; i++){
        double ayudante;
        printf("Ingrese el numero de la posicion %d: \n", (i+1));
        scanf("%lf", &ayudante);
        *(vector + i) = ayudante;
    }
    burbuja(vector, nPositions);
    mediana = hallarMediana(vector, nPositions);
    printf("%lf \n", mediana);
    return 0;
}