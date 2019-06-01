#include <stdio.h>

int main() {

    int v[10], i=0;

    for (i=0;i<10;i++){
        printf("Ingrese un valor para\ncargar en el vector %i: ",i);
        scanf("%i",&v[i]);
        fflush(stdin);
    }

    printf("\nEl ordenamiento del vector de forma contraria es el siguiente:\n");

    for (i=9;i>0-1;i--){
        printf("%i\n",v[i]);
    }

    return 0;
}