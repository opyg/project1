#include <stdio.h>

#include <string.h>

#include <stdlib.h>

char* sklej(char *a, char *b){

int d = strlen(a) + strlen(b);

char *k = a + strlen(a);

while(*b != '\0'){

*k++ = *b++;

}

a[d] = 0;

return a;

}

int main(){

char a[100];

char b[100];

gets(a);

gets(b);

char *pa = a;

char *pb = b;

sklej( pa, pb);

puts(a);

return 0;

}
