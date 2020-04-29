#include <stdio.h>

int main ( void )
{
  float breite
  float höhe
  
  printf ("\r\n--- Kreis - Berechnungen -------------------------\r\n" );
  printf( "Geben Sie bitte den Radius ein:  " );
  scanf ("%f", &radius);
  printf ( "Radius:       %6.3f m\r\n", radius );
  printf ( "Durchmesser:  %6.3f m \r\n",radius*2 );
  printf ( "Flaeche:      %6.3f m² \r\n", pi*radius*radius );
  printf ( "Umfang:       %6.3f m \r\n", 2*pi*radius);
  printf ( "--- Kreis - Berechnungen -------------------------\r\n\r\n" );

  
  
  return 0;
}