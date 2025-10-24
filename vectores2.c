#include <stdio.h>
#define MAX 100

int main() {
int Tipantuna[MAX] ={0};
int tamano;

printf("Ingrese el tamaño del vector: ");
scanf("%d", &tamano);

if (tamano > MAX || tamano <= 0) {
printf("Tamaño inválido\n");
return 1;
}


printf("\nVector Tipantuna:\n");
for (int i = 0; i < tamano; i++) {
printf("%d ", Tipantuna[i]);
}

printf("\n");
return 0;
}