#include <stdio.h>
#include <iostream>
using namespace std;
main( )
{
  FILE *fp, *ft;
  char ch;
  char fname1[15], fname2[15];
  cout<<"Enter file name to be copied : ";
  gets(fname1); 
  fp = fopen(fname1 , "r");
  if(fp == NULL)
  {
     cout<<"Unable to open the file for reading \n";
     system("pause");
     exit(0);
  }
  cout<<"Enter name of new file : ";
  gets(fname2);
  ft = fopen(fname2 ,"w");
  if(ft == NULL)
  {
     cout<<"Unable to open the file for writing \n";
     system("pause");
     exit(0);
  }
  while(1)
  {
     ch = fgetc(fp); 
     if(ch == EOF)
        break;
     fputc(ch, ft);
  } 
  fclose(fp);
  fclose(ft);    
  system("pause");
} 
