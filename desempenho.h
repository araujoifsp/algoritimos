#include <stdio.h>
#include <sys/time.h>

typedef struct timeval;
long timer(void (*funcao)());
void media(long*res, int tamanho);
