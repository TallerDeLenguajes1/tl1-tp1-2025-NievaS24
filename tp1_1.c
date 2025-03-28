#include <stdio.h>

int main() {
    int valor;
    int *pValor;
    pValor = &valor;
    printf("Contenido del puntero: %p\n", pValor);
    printf("Direccion de memoria almacenada por el puntero: %p\n", pValor);
    printf("Direccion de memoria de la variable: %p\n", &valor);
    printf("Direccion de memoria del puntero: %p\n", &pValor);
    printf("Tamaño de memoria utilizado por la variable %zu", sizeof(int));
}