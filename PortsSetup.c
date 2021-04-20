#include "MKL25Z4.h"
#include "PortsSetup.h"

void SIMSetup(void)
{
	//Setare biti in registrii SIM pentru ceasuri
	
	SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK;
	
	SIM->SCGC5 |= SIM_SCGC5_PORTD_MASK;
	
	SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;	
	
	SIM->SCGC5 |= SIM_SCGC5_PORTC_MASK;
	
	SIM->SCGC5 |= SIM_SCGC5_PORTE_MASK;
	
	SIM->SCGC6 |= SIM_SCGC6_TPM0_MASK;
	
	SIM->SCGC6 |= SIM_SCGC6_TPM1_MASK;
	
	SIM->SCGC6 |= SIM_SCGC6_TPM2_MASK;
	
	SIM->SCGC6 |= SIM_SCGC6_ADC0_MASK;
	
	SIM->SCGC6 |= SIM_SCGC6_PIT_MASK;
	
	//Configurare ceas TPM
	
	SIM->SOPT2 |= SIM_SOPT2_TPMSRC(TPMClockSource); 
	
	SIM->SOPT2 &=~(SIM_SOPT2_PLLFLLSEL(TPMPLLFLLSELValue));
	
}
