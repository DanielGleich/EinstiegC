#include <stdio.h>

int main( void )
{
  float breite;
  float laenge;
  
  printf ("\r\n--- Rechteck - Berechnungen -------------------------\r\n" );
  printf ( "Geben Sie bitte die Länge ein:  " );
  scanf( "%f", &laenge );
  printf( "Geben Sie bitte die Breite ein:  " );
  scanf ("%f", &breite);
  printf ( "Breite: %6.3f m\r\n", breite );
  printf ( "Laenge: %6.3f m\r\n",laenge);
  printf ( "Flaeche:%6.3f m² \r\n", laenge*breite );
  printf ( "Umfang: %6.3f m \r\n", 2*breite+2*laenge );
  printf ( "--- Rechteck - Berechnungen ------------------------------\r\n\r\n" );

  return 0;
}
