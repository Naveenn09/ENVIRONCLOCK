#include <lpc213x.h>
#include "delay.h"
#include "types.h"
#include "adc.h"

int main(){
	u32 dly;
	IODIR0 = 1 << 8;
	
	Init_adc();
	while(1){
	Read_LM35_Temperature(1,&dly);
	IOSET0 = 1 << 8;
	delayMS(dly);
	IOCLR0 = 1 << 8;
	delayMS(dly);
	}
}
