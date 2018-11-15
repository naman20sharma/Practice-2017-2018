/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc == 1)
    printf ("Please enter argument\n");
  int i, j, n, index = 0;
  char str[100];
  for(i = 0; argv[1][i] != NULL; i++)
  {
  str[i] = argv[1][i];
  }  
  str[i] = NULL;
  n = sizeof(str)/sizeof(str[0]);
 
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < i; j++)
	{
	  if (str[i] == str[j])
	     break;
	}     
	 if(j == i)   
	    str[index++] = str[i];
	
    }
  str[index] = NULL;

  printf("%s\n",str);
  return 0;
}
