#include <stdio.h>

#include <string.h>

char* skracaj(char*s, int to){

s[to] = 0;

return s;

}

int main(){

char lan[100];

int rozmiar;

puts("Podaj lancuch:");

gets(lan);

char *plan = lan;

puts("Podaj rozmiar do jakiego ma byc skrocony:");

scanf("%d" ,&rozmiar);

skracaj(plan, rozmiar);

puts(lan);

return 0;

}
