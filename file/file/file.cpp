// file.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include "stdio.h"
#include "conio.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *infile;
	char  s[80];
	int n=80;

	infile = fopen("input.txt", "r");
	if (infile == NULL) {
	  printf("invalid file");
	  getch();
	  return 0;
	}
	//fgets(s,n,infile);
	printf("file valid");
	getch();

	fclose(infile);
	return 0;
}
	

