#include "MKL25Z4.h"
int SALIDA[8] = {1,2,3,4,5,6,7,8};
int main(){
    PORTA -> PCR{0} = PORT_PCr_MUX(0);
    for(int i = 0; i < 8, i++)
    PORTA -> PCR{SALIDA[i]} = PORT_PCr_MUX(1);


} 
