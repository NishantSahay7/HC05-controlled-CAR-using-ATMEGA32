

#ifndef _ADC_H_
#define _ADC_H_	


void adc_init()
{
    
    ADMUX = ((0<<REFS0)|(0<<REFS1)|(0<<ADLAR)); 

   
  
    ADCSRA = (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}




uint16_t adc_read(uint8_t ch)
{
   
    ch &= 0b00000111;  
    ADMUX = (ADMUX & 0xF8)|ch;    

   
  
    ADCSRA |= (1<<ADSC);

    // wait for conversion to complete
    // ADSC becomes '0' again
    // till then, run loop continuously
    while(ADCSRA & (1<<ADSC));

    return (ADC);
}

#endif 