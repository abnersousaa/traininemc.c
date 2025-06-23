#include <stdio.h>
#include <stdlib.h>

int main() {
	
    unsigned long int numeroGrandePositivo = 4000000000; // 4 billion
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000;
    int numero = 4000000000;
    short int numeroPequeno = 32767; // 32767, maximum value for a signed short int

     printf("Numero positivo grande: %Lu\n", numeroGrandePositivo);
     printf("Numero positivo: %u\n", numeroPositivo);
     printf("Numero grande: %Ld\n", numeroGrande);
     printf("numero: %d\n", numero);
     printf("numero pequeno: %hd\n", numeroPequeno);

    
    
       return 0;
}
	
    
    
    