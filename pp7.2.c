#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <stdbool.h>

bool znajduje_sie_w(char *str, char b){

for(int i = 0; i < strlen(str); i++){

if(b == str[i]){

return true;

}

}

return false;

}

int main(){

char *str = (char*)calloc(100, 1);

puts("Podaj lancuch:");

gets(str);

int i = 0;

char b;

while(i < strlen(str)){

scanf("\n%c", &b);

printf("Wynik: ");

if(znajduje_sie_w(str, b))

puts("true");

else

printf("false\n");

i++;

}

return 0;

}
