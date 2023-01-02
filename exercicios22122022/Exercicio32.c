#include <stdio.h>
#include <math.h>
int main() {
  int n, p, i, init, soma;

  printf("Insira um valor para P: ");
  scanf("%d", &p);

  for (n = 1; n <= p; n++) {
    soma = 0;
    for (init = 1; soma != pow(n,3); init += 2) {
      soma = 0;
      for (i = 0; i < n; i++)
	soma = soma + init + 2 * i;
    }
    init -= 2;
    printf("%d*%d*%d = %d", n, n, n, init);
    for (i = 1; i < n; i++)
      printf("+%d", init+2*i);
    printf("\n");    
  }

  return 0;
}
