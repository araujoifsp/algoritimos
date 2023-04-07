#include <stdio.h>
#include <sys/time.h>

typedef struct timeval;
void timer(void (*funcao)(),long *res, int i);
void media(long*res, int tamanho);
