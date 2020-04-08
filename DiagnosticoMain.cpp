#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <iostream>
using namespace std;
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
	  char palabras[100];
	  cout <<  "Escribe algo: ";
	  cin.getline(palabras,100);  //lectura incluyendo espacios
	  cout << "Vos escribiste: " << palabras << endl;

	  system("pause");

}

