#include <stdio.h>
int cuadrado(int a);
void cuadrado2(int *punt);
void invertir(int *a, int *b);
void orden(int *a,int *b);
int main()
{
    int num, num2, num3, a,b;
    printf("ingrese un numero:\n");
    scanf("%d",&num);
    num2 = cuadrado(num);
    printf("su cuadrado es %d\n",num2);
    printf("ingrese otro numero:\n");
    scanf("%d",&num3);
    cuadrado2(&num3);
    printf("su cuadrado es %d",num3);
    printf("ingrese un numero 'a':\n");
    scanf("%d",&a);
    printf("ingrese un numero 'b':\n");
    scanf("%d",&b);
    invertir(&a,&b);
    printf("el valor invertido de a es:%d y el valor invertido de b es:%d\n",a,b);
    return 0;

}

int cuadrado(int a)
{
    int a2 = a*a;
    return a2;
}

void cuadrado2(int *punt)
{
    *punt = (*punt) * (*punt);
}

void invertir(int *a, int *b)
{
    int temp;
    temp = *a;
    *a= *b;
    *b= temp;
}

void orden(int *a,int *b)
{
    if (*a > *b)
    {
        orden(*a,*b);
    }
}