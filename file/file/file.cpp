// file.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *infile;
	infile = fopen("input.txt", "r");
	

	fclose(infile);
	return 0;
}
	

