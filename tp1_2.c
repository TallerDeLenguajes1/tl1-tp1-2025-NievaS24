#include <stdio.h>

int cuadrado(int num) {
    return num * num;
}

void cuadradoProcedimiento(int num) {
    printf("El cuadrado de %d es %d\n", num, num * num);
}

void miVariable(int *num) {
    printf("La dirección de la variable es %p\n", num);
    printf("El contenido de la variable es %d\n", *num);
}

void invertir(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*b <= *a) {
        int aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main() {
    int x, y;
    printf("Ingrese un numero \n");
    scanf("%d", &x);
    y = cuadrado(x);
    printf("El cuadrado de %d es %d\n", x, y);

    cuadradoProcedimiento(x);
    miVariable(&x);
    miVariable(&y);

    printf("numeros antes de invocar la funcion invertir: \n x: %d / y: %d\n", x, y);
    invertir(&x, &y);
    printf("numeros despues de invocar la funcion invertir: \n x: %d / y: %d\n", x, y);

    printf("numeros antes de invocar la funcion orden: \n x: %d / y: %d\n", x, y);
    orden(&x, &y);
    printf("numeros despues de invocar la funcion orden: \n x: %d / y: %d\n", x, y);
}