#include <stdio.h>
#include <math.h>

int main ( void )
{
    int berechnungswunsch;
    
    printf ( "\r\n---Berechnungen -------------------------\r\n" );
    printf ( "Was wollen Sie berechnen?\r\n" );
    printf ( " [1] Rechteck\r\n" );
    printf ( " [2] Dreieck\r\n" );
    printf ( " [3] Kreis\r\n");
    printf ( " [4] Programm schließen\r\n" );
    while (berechnungswunsch < 1 || berechnungswunsch > 4)
    {
    printf ( "Wahl:" );
    scanf  ( "%d" ,&berechnungswunsch );
    }
    
    if ( berechnungswunsch==1 ) // ACHTUNG: 2 Gleichheitszeichen == / kein Semikolon
  {
      float breite,laenge,flaeche,umfang;
	  flaeche=laenge*breite;
	  umfang=2*laenge+2*breite;
	  
      printf ( "Rechteck-Berechnung:\r\n" );
      printf ( "Geben Sie bitte die Länge in m ein:   " );
      scanf ( "%f", &laenge );
      printf ( "Geben Sie bitte eine Breite in m ein:   " );
      scanf ( "%f", &breite );
      printf ( "Breite: %6.3f m\r\n ", breite );
      printf ( "Länge:  %6.3f m\r\n ", laenge );
      printf ( "Fläche: %6.3f m²\r\n", flaeche );
      printf ( "Umfang: %6.3f m \r\n", umfang );
  }
  
    if (berechnungswunsch==2 )
  {
      float breite,hoehe;
      printf ( "Dreiecks-Berechnung\r\n" );
      printf ( "Geben Sie bitte eine Breite in m ein \r\n" );
      scanf ( "%f", &breite);
      printf ( "Geben Sie bitte eine Höhe in m ein \r\n" );
      scanf ( "%f" , &hoehe);
      printf ( "Breite: %6.3f m \r\n", breite );
      printf ( "Höhe:   %6.3f m \r\n", hoehe );
      printf ( "Fläche: %6.3f m² \r\n", breite*hoehe/2.0);
  }
      if (berechnungswunsch==3 )
  { 
        float pi, radius;
        pi=3.14;
        
      printf ( "Kreisberechnung\r\n" );
      printf( "Geben Sie bitte den Radius in m ein:  " );
      scanf ( "%f", &radius);
      printf ( "Radius:       %6.3f m\r\n", radius );
      printf ( "Durchmesser:  %6.3f m \r\n",radius*2.0 );
      printf ( "Flaeche:      %6.3f m² \r\n", pi*radius*radius );
      printf ( "Umfang:       %6.3f m \r\n", 2.0*pi*radius);
  
  }
    if (berechnungswunsch==4)
  {
    
  }
  else printf ( "Diese Zahl steht nicht zur Auswahl!\r\n" );
    
    printf ( "--- Berechnungen-------------------------\r\n\r\n" );
    

  return 0;
}
