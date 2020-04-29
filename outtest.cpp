#include <stdio.h>

int main ( void )
{
  int a;               //  Deklaration einer Variablen für Ganzzahlen
  double size = 1.90;  // Initialisierung
  int age     = 16;
  short b;
  a = -95;             //  Zuweisung
  b = 2;
  
  printf( "a = %d\r\n", a );
  printf( "Die Variable a   belegt %lu Byte Speicher \r\n", sizeof( a ) );
  printf( "Ein Bool         belegt %lu Byte Speicher \r\n", sizeof( bool ) );
  printf( "Ein Char         belegt %lu Byte Speicher \r\n", sizeof( char ) );
  printf( "Ein Short        belegt %lu Byte Speicher \r\n", sizeof( short ) );
  printf( "Ein Int          belegt %lu Byte Speicher \r\n", sizeof( int ) );
  printf( "Ein Unsigned Int belegt %lu Byte Speicher \r\n", sizeof( unsigned int ) );
  printf( "Ein Signed Int   belegt %lu Byte Speicher \r\n", sizeof( signed int ) );
  printf( "Ein Long         belegt %lu Byte Speicher \r\n", sizeof( long ) );
  printf( "Ein Long Long    belegt %lu Byte Speicher \r\n\r\n", sizeof( long long ) );
  printf( "Ein Float        belegt %lu Byte Speicher \r\n", sizeof( float ) );
  printf( "Ein Double       belegt %lu Byte Speicher \r\n", sizeof( double ) );
  printf( "Ein Long Double  belegt %lu Byte Speicher \r\n", sizeof( long double ) );
  printf( "Ich bin %d Jahre alt und ca. %4.2lf m groß.\r\n", age, size );

  return 0;
} 
