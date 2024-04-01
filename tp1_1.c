#include <stdio.h>
int main()
{
    printf("hola mundo\n");
    int num=2;
    int *punt = &num;
    printf("el contenido del puntero es:%d\n",*punt);
    printf("la direccion almacenada del puntero es:%d\n",punt);
    printf("la direccion de la variable es %d\n",&num);
    printf("la direccion de memoria del puntero es %d\n",&punt);
    int size = sizeof(punt);
    printf("el tamaño del archivo es %d",size);
}