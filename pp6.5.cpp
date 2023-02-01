#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#define N 10

double suma(int *start1, float *start2){

double suma = 0;

int *last = (start1 + N);

while(start1 < last){

suma += *start1 + *start2;

start1++;

start2++;

}

return suma;

}

void minmax(double *a, double *b){

if(*a > *b){

double s = *a;

*a = *b;

*b = s;

}

printf("min = %.2lf\nmax = %.2lf", *a, *b);

}

int main(){

int c[N];

float z[N];

srand(time(NULL));

printf("Tablica calkowitych liczb:\n");

for (int i = 0; i < N; i++){

int l = 0 + (rand() % 100);

c[i] = l;

printf("%d ", c[i]);

}

printf("\n\nTablica zmiennoprzecinkowych liczb:\n");

for(int i = 0; i < N; i++){

float k = 0 + (rand() % 100)*0.01;

z[i] = k;

printf("%.2f ", z[i]);

}

double wynik = suma(c, z);

printf("\n\nSuma:\n%.2lf", wynik);

printf("\n5 i 10 elementy 1tabl:\n%d \n%d", *(c + 4), *(c + 9));

printf("\n5 i 10 elementy 2tabl:\n%.2f \n%.2f", *(z + 4), *(z + 9));

printf("\npodaj 2 liczby:\n");

double a, b;

scanf("%lf", &a);

scanf("%lf", &b);

minmax(&a, &b);

return 0;

}
