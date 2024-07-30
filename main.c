#include <xc.h>
#include "main.h"
#include "ssd.h"

static unsigned char ssd[MAX_SSD_CNT];
static unsigned char digit[] = {ZERO, ONE,TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
void init_config(void)
{
	init_ssd_control();
}

void main(void)
{
	init_config();
    unsigned long int i = 0,adc_value;
	unsigned int r1,r2;
    float ip_volt,volt;
    
    while(1)
    {
        display(volt);
        volt = (adc_value * 5.0) / 1023.0;
        ip_volt = volt * ((100.0 + 3.3) / 3.3); 
        for(i=500;i--;);
    }
}