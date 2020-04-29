#include <stdio.h>

int main()
{
  int auswahl;
  
    printf("Was moechten Sie tun? \r\n");
    printf("[1] Addieren\r\n");
    printf("[2] Subtraktion\r\n");
    printf("[3] Multiplikation\r\n");
    printf("[4] Division\r\n");
    scanf("%d",&auswahl);
    
    switch (auswahl)
    {
      case 1:
        printf("Addition\r\n");
        printf("-----------\r\n");
      break;
      
      case 2:
        printf("Subtraktion\r\n");
        printf("-----------\r\n");
      break;
      
      case 3:
        printf("Multiplikation\r\n");
        printf("-----------\r\n");
      break;
      
      case 4:
        printf("Division\r\n");
        printf("-----------\r\n");
      break;
      default;
        printf("Eingabe ist ungueltig.\r\n");
        break;
    }
  return 0;
}
