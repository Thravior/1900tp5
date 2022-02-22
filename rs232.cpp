#include <avr/io.h>
#include "memoire_24.h"

#define F_CPU 8000000
#include <util/delay.h>

Memoire24CXXX a = Memoire24CXXX();


#define DELFerme 0x00
#define DELVerte 0x01
#define DELRouge 0x02


const unit8_t* CIBLE ='*P*O*L*Y*T*E*C*H*N*I*Q*U*E* *M*O*N*T*R*E*A*L*';


void _delay_ms(double ms);


int main(){
    DDRD = 0xFF; 
    a.ecriture(0X0000, CIBLE, 45);
    a.ecriture(0x0000,0x00)
    _delay_ms(1000);
    char* reponse =a.lecture(0XA0,)
    while(true){




    }

    return 0;
} 