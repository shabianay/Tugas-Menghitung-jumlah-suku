#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int main()
{
	int a,i,bil;
	printf("Masukan Angka : "); scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		bil=((i*i)*i);
      printf(" %d",bil);
    }
  
  getch();
 }
