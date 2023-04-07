#include <stdio.h>
#include <sys/time.h>

typedef struct timeval;
long timer(void (*funcao)(), int i);
void media(long*res, int tamanho);
