#include <stdio.h>

int main() {
	
	int num, i, raiz=1, j, div, resto = 0, cont = 0, verif = 0;

	printf("informe um numero\n");
	scanf("%d", &num);

	while (num > 0) { 

		for (i = 2; i <= num; i++) { //percorre todo o numero para achar os primos

			for (j = 1; j <= i; j++) { //for para armazenar numeros de divisores inteiros do i e testar se é primo

				if ((i%j) == 0) {
					div++;
				} 

			}

			if ((div == 2) && (i != num)) { // numero é primo

				resto = num;

				while ((resto%i == 0) && (resto>1)) { // numero é divisel pelo primo

					resto = resto / i;
					cont++;

					if (cont == 2) { // repetiu o numero um numero de vezes par

						raiz = raiz * i; //acumula na raiz
						cont = 0;

					}


				}


			} 

			div = 0;

		}

		if (resto == num) {
			printf("Número é quadrado perfeito. Raiz = %d\nresto = %d\n", raiz, resto);
		} else {
			printf("Numero nao é quadradro perfeito. cont = %d\nresto = %d\nraiz = %d\n", cont, resto, raiz);
		}
		
		raiz = 1;

		printf("informe um numero\n");
		scanf("%d", &num);

	}
	
	return 0;

}