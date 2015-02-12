/********************************************/
/*                                          */
/* Title: Controller_Measure                */
/* Programmer: Anass Dahany                 */
/* Brief Description: Defines the           */
/* functions for all  measurments           */
/* for the BLDC controller                  */
/*                                          */
/********************************************/



#ifndef CONTROLLER_MEASURE_H
#define	CONTROLLER_MEASURE_H

float measure_throttle(void){
    /* measures the buffer throttle voltage and converts, returning the
     voltage value (0V-6.5V) */
	do
	{
	const float conversion_factor = 6.5 / 5 ; // returns a float of the scaling factor to convert (0-6.5v)
	Real = ADC_Read(7) * conversion_factor; // read value of pin A7 and converts it to voltage between 0 -6.5v
	
	}while(1);
	





}



int measure_batt(void){
   /* measures the buffer battery voltage value and converts returning
    the battery voltage rounded to the nearest volt*/ 
    
    do
	{
	const float conversion_factor = 201000/10000; // returns a float of the scaling factor to convert (20-100)
	Real = ADC_Read(0) * conversion_factor; // read value of pin A0(0-5v) and converts it to voltage between 20-100v
	
	}while(1);
    
    
    
    
    
}


int measure_hall(void){
    /* measures the frequency of the hall sensor flips, and returns the value
     * rounded to the nearest whole number */








}

float measure_steering(void){
    /* measures the voltage value of the steering sensor, and returns the value
     *  */

 do
	{
	steering = ADC_Read(5); // read value of pin RB5(0-5v) and returns the voltage value of the steering sensor
	
	}while(1);





}


#endif

