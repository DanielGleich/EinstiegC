#include <stdio.h>

int main ( void )

{
	float fahrstrecke;
	float geschwindigkeit;
	int fahrzeit;
	int rest;
	
	printf ( "Dies ist ein Programm zur Berechnung von Fahrzeiten.\r\n" );
	printf ( "Dieses Programm wurde von Daniel Gleich erstellt.\r\n" );
	printf ( "----------------------------------------------------\r\n\r\n" );

	int wahl;
	printf("Wollen Sie ihre Geschwindigkeit in km/h oder m/s angeben?\r\n");
	printf("[1]- km/h\r\n");
	printf("[2]- m/s\r\n");
	scanf("%d",&wahl);
	
	printf ( "Geben Sie bitte ihre Fahrgeschwindigkeit ein:" );
	scanf ("%f", &geschwindigkeit);
	printf ( "Geben Sie bitte ihre zu fahrende Strecke in km ein:" );
	scanf ("%f", &fahrstrecke);

	
	if (wahl==1)
	{
		
	}
	
	if (wahl==2)
	{
		fahrstrecke=fahrstrecke*1000
	}
	fahrzeit= fahrstrecke/geschwindigkeit;
	
	if (wahl==2)
	{
		fahrzeit=fahrzeit/60/60;
	}
	printf ( "----------------------------------------------------\r\n" );
	printf ( "Fahrstrecke:   	  		%5.1f km\r\n", fahrstrecke );

	switch (wahl)
	{
		case 1: printf ( "Geschwindigkeit:   	 	 %5.0f km/h\r\n", geschwindigkeit); break;
		case 2: printf ( "Geschwindigkeit:   		  %5.0f m/s\r\n", geschwindigkeit); break;
	}
	
		printf ( "Fahrzeit:    		 %5.1f h\r\n", fahrzeit); break;
		printf ( "----------------------------------------------------\r\n" );
	return 0;
}