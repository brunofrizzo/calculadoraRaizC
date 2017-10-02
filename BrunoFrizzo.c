#include <stdio.h>

int main() {
	
	int num, i, raiz=1, j, div = 0, resto = 0, cont = 0;

	printf("informe um numero\n");
	scanf("%d", &num);

	while (num > 0) { 

		resto = num;

		for (i = 2; i <= num; i++) { //percorre todo o numero para achar os primos

			for (j = 1; j <= i; j++) { //for para armazenar numeros de divisores inteiros do i e testar se é primo

				if ((i%j) == 0) {
					div++;
				} 

			}

			if ((div == 2) && (i != num)) { // numero é primo

				while ((resto%i == 0) && (resto>1)) { // numero é divisel pelo primo

					resto = resto / i;
					cont++;

					if (cont == 2) { // repetiu o numero um numero de vezes par

						raiz = raiz * i; //acumula na raiz
						cont = 0;

					}

				}

				if (cont == 1) {
					printf("Numero nao é quadrado perfeito.\n");
					raiz = 1;
					resto = 0;
					printf("informe um numero\n");
					scanf("%d", &num);	
					break;
				}

				cont = 0;


			} 

			div = 0;

		}

		if (resto != 1) {
			printf("Número não é quadrado perfeito. resto = %d\n", resto);
		} else {
			printf("Numero é quadradro perfeito. Raiz = %d\n", raiz);
		}
		
		raiz = 1;
		resto = 0;

		printf("informe um numero\n");
		scanf("%d", &num);

	}
	
	return 0;

}