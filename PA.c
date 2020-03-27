/*POR FERNANDO BRITO - BY FERNANDO BRITO*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int a1, a2, an, n, r;
    printf("Informe o primeiro termo da PA: / Type the first term of AP: ");
    scanf("%d", &a1);
    printf("Informe o segundo termo da PA: / Type the second term of AP: ");
    scanf("%d", &a2);
    r = a2 - a1;
    printf("Qual posicao: / Which position: ");
    scanf("%d", &n);
    an = a1 + (n - 1) * r;
    printf("O %do termo e %d\n / The %do term is %d\n",n, an);
    system("pause");
   return 0;
}
