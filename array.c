#include <stdio.h>

void percorrer(int arr[], int i)
{
    if (i == 10) return;

    scanf("%d", &arr[i]);

    percorrer(arr, i+1);
}


void escritor(int arr[], int i)
{
    if (i == 10) return;

    printf("\nARR[%d] = %d", i, arr[i]);

    escritor(arr, i+1);
}

int main()
{
    // int idade, idade2, idade3;

    // scanf("%d%d%d", &idade, &idade2, &idade3);

    // juntando elementos de um mesmo tipo

    int idades[10];

    // scanf("%d", &idades[6]);

    percorrer(idades, 0);

    escritor(idades, 0);

    // idades[0] -> idade[99];
}