// Main.cpp : Defines the entry point for the console application.
//
// Made by Lars Langseth as part of testing out consepts from MetaMath
//
// https://github.com/LangsethLars/MetaMath
//

// I'm going to make my own code, but wanted to see some working code first:
#include "checkmm.h"

// Here is the start of my own code
#include "Test.h"



int main(int argc, char *argv[])
{
	int rv1 = mainCheckMM(2, "C:\\GitHub\\LangsethLars\\MetaMath\\Test\\anatomy.mm");
	int rv2 = test("C:\\GitHub\\LangsethLars\\MetaMath\\Test\\anatomy.mm");

	return rv1 | rv2;
}
