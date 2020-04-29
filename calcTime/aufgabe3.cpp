#include <stdio.h>

int main ( void )

{
	float fahrstrecke;
	float geschwindigkeit;
	float fahrzeit;
	int pause;
	int rest;
	int wahl;
	int ruhe;
	
	printf ( "Dies ist ein Programm zur Berechnung von Fahrzeiten.\r\n" );
	printf ( "Dieses Programm wurde von Daniel Gleich erstellt.\r\n" );
	printf ( "----------------------------------------------------\r\n\r\n" );
	
	printf("Wollen Sie ihre Geschwindigkeit in km/h oder m/s angeben?\r\n");
	printf("[1]- km/h\r\n");
	printf("[2]- m/s\r\n");
	while (wahl<1 || wahl>2)
	{
		scanf("%d",&wahl);	
	}
	printf ( "Geben Sie bitte ihre Fahrgeschwindigkeit ein:" );
	scanf ("%f", &geschwindigkeit);  
	printf ( "Geben Sie bitte ihre zu fahrende Strecke in km ein:" );
	scanf ("%f", &fahrstrecke);
	
	printf("Wollen Sie zwischendurch eine Pause einschlagen?\r\n");
	printf("[1]- Ja\r\n");
	printf("[2]- Nein\r\n");
	while (ruhe<1 || ruhe>2)
	{
		scanf("%d",&ruhe);
	}
	
	if (ruhe==1)
	{
		printf("Wie lange wollen Sie Pause machen(Angabe in Minuten)?\r\n");
		scanf("%d",&pause);
	} 
	else 
	{
		pause= 0;
	}
	
	if (wahl==1) // km/h
	{
		fahrzeit= (fahrstrecke/geschwindigkeit); //Meter durch meter pro sekunde oder km durch km pro stunde
		fahrzeit=fahrzeit*60; //Stunden zu Minuten
	}
	
	if (wahl==2) // m/s
	{		
    fahrzeit= (fahrstrecke*1000/geschwindigkeit)/60; //Meter durch meter pro sekunde oder km durch km pro stunde
	}
	
	fahrzeit = fahrzeit + pause;
  
	printf ( "----------------------------------------------------\r\n" );
	printf ( "Fahrstrecke: %5.1f km\r\n", fahrstrecke );

	switch (wahl)
	{
		case 1: printf ( "Geschwindigkeit: %5.0f km/h\r\n", geschwindigkeit); break;
		case 2: printf ( "Geschwindigkeit: %5.0f m/s\r\n", geschwindigkeit); break;
	}
	printf ("Pausenzeit: %8d min\r\n",pause);
	printf ( "Fahrzeit: %5d h und %2d min\r\n", (int)fahrzeit/60,(int)fahrzeit%60);
	printf ( "----------------------------------------------------\r\n" );
	return 0;
}
