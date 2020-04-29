#include <stdio.h>

int main ( void )

{
	float fahrstrecke;
	float geschwindigkeit;
	float fahrzeit;
	
	printf ( "Dies ist ein Programm zur Berechnung von Fahrzeiten.\r\n" );
	printf ( "Dieses Programm wurde von Daniel Gleich erstellt.\r\n" );
	printf ( "----------------------------------------------------\r\n\r\n" );
	printf ( "Geben Sie bitte ihre Fahrgeschwindigkeit in km/h ein:" );
	scanf ("%f", &geschwindigkeit);
	printf ( "Geben Sie bitte ihre zu fahrende Strecke in km ein:" );
	scanf ("%f", &fahrstrecke);
	fahrzeit= fahrstrecke/geschwindigkeit;
	
	printf ( "----------------------------------------------------\r\n" );
	printf ( "Fahrstrecke:   	  		%5.1f km\r\n", fahrstrecke );
	printf ( "Geschwindigkeit:   	  %5.0f km/h\r\n", geschwindigkeit);
	printf ( "Fahrzeit:    			 %5.1f h\r\n", fahrzeit);
	printf ( "----------------------------------------------------\r\n" );

	return 0;
}