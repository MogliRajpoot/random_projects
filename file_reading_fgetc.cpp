#include<stdio.h>
#include <iostream>
using namespace std;
main( )
{
  FILE *fp ;
  char ch ;
  fp = fopen ( "prog1.c", "r" ) ;
  while ( 1 )
  {
    ch = fgetc ( fp ) ;
    if ( ch == EOF )
      break ;
    cout<<( "%c", ch ) ;
  }
  fclose ( fp ) ;
  system("pause");
}


