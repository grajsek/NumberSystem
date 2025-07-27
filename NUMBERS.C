/*
	Author: Gašper Rajšek, august 2001, last update july 2025
	E-mail, comments & bugs report: https://github.com/grajsek

	Released: august 2001
	Updated: 27.7.2025

	Compiled in: VS 2022 Community Edition (Console Application)

	Updates:
		* translated to English language
		* some minor visual and code fixes
		* removed the .dat file
		* last update: added new function clearScreen() and replaced clrscr()
*/
# include <windows.h>
# include <string.h>
# include <stdio.h>
# include <math.h>

// function prototypes

void DecToBin (long int number);
void BinToDec (void);
void DecToHex (long int number);
void HexToDec (void);
void BinToHex (void);
void HexToBin (void);
void DecToOct (long int number);
void OctToDec (void);
void OctToBin (void);
void BinToOct (void);
void HexToOct (void);
void OctToHex (void);
void Number_Limits (void);
void clearScreen(void);

int main()
{
	int Select01 = 0, Select02 = 0;
	long int number = 0;

	do
	{
		clearScreen ();
		printf ("NUMBER SYSTEM v1.1");
		printf ("\nAuthor: Gaçper Rajçek, august 2002");
		printf ("\n\n1 - Decimal number system");
		printf ("\n2 - Binary number system");
		printf ("\n3 - Hexadecimal number system");
		printf ("\n4 - Octal number system");
		printf ("\n5 - Number limits");
		printf ("\n6 - Exit");
		printf ("\n\nSelect: ");
		scanf ("%d", &Select01);
		switch (Select01)
		{
			case 1:
				do
				{
					clearScreen ();
					printf ("NUMBER SYSTEM v1.1");
					printf ("\nAuthor: Gaçper Rajçek, august 2002");
					printf ("\n\nDECIMAL NUMBER SYSTEM");
					printf ("\n\n1 - Decimal number convert into binary number");
					printf ("\n2 - Decimal number convert into hexadecimal number");
					printf ("\n3 - Decimal number convert into octal number");
					printf ("\n4 - Go back");
					printf ("\n\nSelect: ");
					scanf ("%d", &Select02);
					switch (Select02)
					{
						case 1:
							printf ("\nEnter number in decimal number: ");
							scanf ("%ld", &number);
							DecToBin (number);
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 2:
							printf ("\nEnter number in decimal number: ");
							scanf ("%ld", &number);
							DecToHex (number);
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 3:
							printf ("\nEnter number in decimal number: ");
							scanf ("%ld", &number);
							DecToOct (number);
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 4:
							break;
						default:
							printf ("\nWrong selection. Try again.");
							getch ();
							break;
					}
				} while (Select02 != 4);
				break;
			case 2:
				do
				{
					clearScreen ();
					printf ("NUMBER SYSTEM v1.1");
					printf ("\nAuthor: Gaçper Rajçek, august 2002");
					printf ("\n\nBINARY NUMBER SYSTEM");
					printf ("\n\n1 - Binary number convert into decimal number");
					printf ("\n2 - Binary number convert into hexadecimal number");
					printf ("\n3 - Binary number convert into octal number");
					printf ("\n4 - Go back");
					printf ("\n\nSelect: ");
					scanf ("%d", &Select02);
					switch (Select02)
					{
						case 1:
							BinToDec ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 2:
							BinToHex ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 3:
							BinToOct ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 4:
							break;
						default:
							printf ("\nWrong selection. Try again.");
							getch ();
							break;
					}
				} while (Select02 != 4);
				break;
			case 3:
				do
				{
					clearScreen ();
					printf ("NUMBER SYSTEM v1.1");
					printf ("\nAuthor: Gaçper Rajçek, august 2002");
					printf ("\n\nHEXADECIMAL NUMBER SYSTEM");
					printf ("\n\n1 - Hexadecimal number convert into decimal number");
					printf ("\n2 - Hexadecimal number convert into binary number");
					printf ("\n3 - Hexadecimal number convert into octal number");
					printf ("\n4 - Go back");
					printf ("\n\nSelect: ");
					scanf ("%d", &Select02);
					switch (Select02)
					{
						case 1:
							HexToDec ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 2:
							HexToBin ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 3:
							HexToOct ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 4:
							break;
						default:
							printf ("\nWrong selection. Try again.");
							getch ();
							break;
					}
				} while (Select02 != 4);
				break;
			case 4:
				do
				{
					clearScreen ();
					printf ("NUMBER SYSTEM v1.1");
					printf ("\nAuthor: Gaçper Rajçek, august 2002");
					printf ("\n\nOCTAL NUMBER SYSTEM");
					printf ("\n\n1 - Octal number convert into decimal number");
					printf ("\n2 - Octal number convert into binary number");
					printf ("\n3 - Octal number convert into hexadecimal number");
					printf ("\n4 - Go back");
					printf ("\n\nSelect: ");
					scanf ("%d", &Select02);
					switch (Select02)
					{
						case 1:
							OctToDec ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 2:
							OctToBin ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 3:
							OctToHex ();
							printf ("\n\nPress any key to return to the menu ...");
							getch ();
							break;
						case 4:
							break;
						default:
							printf ("\nWrong selection. Try again.");
							getch ();
							break;
					}
				} while (Select02 != 4);
				break;
			case 5:
				Number_Limits ();
				printf ("\n\nPress any key to return to the menu ...");
				getch ();
				break;
			case 6:
				break;
			default:
				printf ("\nWrong choice. Try again.");
				getch ();
				break;
		}
	} while (Select01 != 6);
	return 0;
}

void DecToBin (long int number)
{
	int counter01 = 0, counter02 = 0, i = 0, bit = 0, number01pos[32] = {0}, number01neg01[32] = {0}, number01neg02[32] = {0};
	long int temp01 = 0, temp02 = 0, temp03 = 0, temp04 = 0, temp05 = 0, temp06 = 0, temp07 = 0, temp08 = 0;

	temp01 = number;     // saving entered number
	temp07 = temp01 % 2; // useful for negative even numbers
	if ( (number >= -128) && (number <= 127) ) // 8 bit number
	{
		bit = 8;
		temp08 = -number - 128;
	}
	else if ( (number >= -32768) && (number <= -128) || ( (number <= 32767) && (number >= 127) ) ) // 16 bit number
	{
		bit = 16;
		temp08 = -number-32768;
	}
	else if ( ((number >= -2,147,483,648) && (number <= -32768) && (number <= -128)) || ((number <= 2,147,483,647) && (number >= 32767) && (number >= 127)) ) // 32 bit number
	{
		bit = 32;
		temp08 = -number-2147483648;
	}
	for (counter01 = 0; counter01 <= bit-1; counter01++)
	{
		i++;                            // increasing counter i
		if ( (temp07 == 0) && (temp01 < 0) ) // this counts for the negative even numbers
		{
			temp02 = temp08;			     // always save divided number
			temp08 = temp08 / 2;  		  // divide number with 2
			temp03 = temp08 * 2;  		  // divided number multiply with 2
			temp04 = temp02-temp03; 	  // subtract and we get 0's and 1's
			temp05 = !temp04;       	  // negate temp04 -> this is good for the negative value
			temp06 = !temp05;				  // negate negation
			number01neg02[counter01] = temp06;
		}
		else                            // other numbers
		{
			temp02 = number;
			number = number / 2;
			temp03 = number * 2;
			temp04 = temp02-temp03;
			temp05 = !temp04;
			number01pos[counter01] = temp04;
			number01neg01[counter01] = temp05;
		}
		if ( (temp01 < 0) && (i == 1) )   // if the number is negative and (i equals 1) -> first number
		{
			if (temp05 == 0) number01neg01[0] = 1; // after negation I change number 0 into 1
			else if (temp05 == 1) counter02 = 1;
		}
		if ( (temp01 < 0) && (i == bit) && (counter02 == 1) ) // this only counts when we negated negation and if it is at the end number 1, then at the beggining we change 0 To 1
		{
			number01neg02[bit-1] = 1;
		}
	}
	// write out on the screen
	if (temp01 >= 0)
	{
		printf ("\nBinary number = ");
		for (counter02 = bit-1; counter02 >= 0; counter02--)
		{
			printf ("%d", number01pos[counter02]);
		}
	}
	else if ((temp01 < 0) && (counter02 == 1))
	{
		printf ("\nBinary number = ");
		for (counter02 = bit-1; counter02 >= 0; counter02--)
		{
			printf ("%d", number01neg02[counter02]);
		}
	}
	else
	{
		printf ("\nBinary number = ");
		for (counter02 = bit-1; counter02 >= 0; counter02--)
		{
			printf ("%d", number01neg01[counter02]);
		}
	}
}

void BinToDec ()
{
	int counter01 = 0, number[32] = {0}, number01 = 0, Bit = 0, i = 0;
	long int result01 = 0, result02 = 0;
	unsigned long int result03 = 0;
	double temp = 0;

	printf ("\nWhich bit number will you enter (8, 16 or 32)? ");
	scanf ("%d", &Bit);
	switch (Bit)
	{
		case 8:
		case 16:
		case 32:
			for (counter01 = 0; counter01 <= Bit-1; counter01++)
			{
				printf ("%d. Enter number (0 or 1): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 == 0) || (number01 == 1) )
				{
					number[counter01] = number01; 	     // fill the number table
					temp = pow (2, Bit-1-i);           	  // calculate 2**7, ...
					result01 += number[counter01] * temp; // sum the last result and multiply it with 2**7, ...
					result03 += number[counter01] * temp; // saving unsigned number
					i++;                              	  // increasing counter i
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use.\n");
					getch ();
				}

			}
			break;
		default:
			printf ("\nWrong use.");
			break;
	}
	if ( (Bit != 32) && ((Bit == 8) || (Bit == 16)) )
	{
		printf ("\nUnsigned number -- Decimal number is %ld", result01);
	}
	else if ( (Bit == 8) || (Bit == 16) || (Bit == 32) )
	{
		printf ("\nUnsigned number -- Decimal number is %lu", result03);
	}
	// for negative values which are 1ž and 2ž negated in binary number
	if ( (Bit == 8) && ((result01 < 256) && (result01 > 127)) ) // limits for negative numbers
	{
		result02 = result01 - 256;
		printf ("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ( (Bit == 16) && ((result01 < 65536) && (result01 > 32767)) )
	{
		result02 = result01 - 65536;
		printf ("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ( (Bit == 32) && (result03 > 2147483647) )
	{
		result02 = result03 - 4294967296;
		printf ("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ( (Bit == 32) || (Bit == 8) || (Bit == 16) ) printf("\nSigned number -- Decimal number is %ld", result01);
}

void DecToHex (long int number)
{
	int counter01 = 0, counter02 = 0, i = 0, BitHex = 0, number01[8] = {0};
	long int temp01 = 0, temp02 = 0, temp03 = 0, temp04 = 0;
	unsigned long int temp05 = 0;

	temp01 = number; // saving entered number
	// negative and positive numbers
	if ( ((number >= -128) && (number <= -1)) || ((number <= 127) && (number >= 0)) ) // 8 bit numbers
	{
		BitHex = 2;
		temp05 = number+256; // only for negative numbers
	}
	else if ( ((number >= -32768) && (number <= -129)) || ((number <= 32767) && (number >= 128)) ) // 16 bit numbers
	{
		BitHex = 4;
		temp05 = number+65536; // only for negative numbers
	}
	else if ( ((number >= -2,147,483,648) && (number <= -32769)) || ((number <= 2147483647) && (number >= 32768)) ) // 32 bit numbers
	{
		BitHex = 8;
		temp05 = number+4294967296; // only for negative numbers
	}
	for (counter01 = 0; counter01 <= BitHex-1; counter01++)
	{
		i++;
		if (temp01 < 0) // only for negative numbers
		{
			temp02 = temp05;			      // always save divided number
			temp05 = temp05 / 16;  		   // divide number with 16
			temp03 = temp05 * 16;  		   // divided number multiply with 16
			temp04 = temp02-temp03; 	   // subtract and we get result from 0 To 15
			number01[counter01] = temp04; // napolnim tabelo çtevil v çestnaj. zapisu
		}
		else  // positive numbers
		{
			temp02 = number;
			number = number / 16;
			temp03 = number * 16;
			temp04 = temp02-temp03;
			number01[counter01] = temp04;
		}
	}
	// write out on the screen
	printf("\nHexadecimal number = ");
	for (counter02 = BitHex-1; counter02 >= 0; counter02--)
	{
		if (number01[counter02] < 10)  printf ("%d", number01[counter02]);
		if (number01[counter02] == 10) printf ("A");
		else if (number01[counter02] == 11) printf ("B");
		else if (number01[counter02] == 12) printf ("C");
		else if (number01[counter02] == 13) printf ("D");
		else if (number01[counter02] == 14) printf ("E");
		else if (number01[counter02] == 15) printf ("F");
	}
}

void HexToDec ()
{
	int counter01 = 0, number[8] = {0}, number01 = 0, Bit = 0, BitHex = 0, i = 0;
	long int result01 = 0, result02 = 0;
	unsigned long int result03 = 0;
	double temp = 0;

	printf("\nWhich bit number will you enter (8, 16 or 32)? ");
	scanf("%d", &Bit);
	BitHex = Bit / 4;
	switch (BitHex)
	{
		case 2:
		case 4:
		case 8:
			printf ("\nA = 10, B = 11, C = 12, D = 13, E = 14, F = 15\n");
			for (counter01 = 0; counter01 <= BitHex-1; counter01++)
			{
				printf ("%d. Enter number (0 To 15): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 >= 0) && (number01 <= 15) )
				{
					number[counter01] = number01; 		// filling the number table
					temp = pow(16, BitHex-1-i);  	  	   // calculate 16**2, ...
					result01 += number[counter01]*temp; // sum previos result and multiply it with 16**2, ...
					result03 += number[counter01]*temp; // same as up but only for unsigned numbers
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use.\n");
					getch ();
				}
			}
			break;
		default:
			printf ("\nWrong use.");
			break;
	}
	if ( (BitHex != 8) && ((BitHex == 4) || (BitHex == 2)) )
	{
		printf ("\nUnsigned number -- Decimal number is %ld", result01);
	}
	else if ((BitHex == 2) || (BitHex == 4) || (BitHex == 8))
	{
		printf ("\nUnsigned number -- Decimal number is %lu", result03);
	}
	// for negative values which are 1ž and 2ž negated in binary number
	if ( (BitHex == 2) && ((result01 < 256) && (result01 > 127)) ) // negative number limits
	{
		result02 = result01 - 256;
		printf ("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ( (BitHex == 4) && ((result01 < 65536) && (result01 > 32767)) )
	{
		result02 = result01 - 65536;
		printf ("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ( (BitHex == 8) && (result03 > 2147483647) )
	{
		result02 = result03 - 4294967296;
		printf ("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ( (BitHex == 8) || (BitHex == 4) || (BitHex == 2) ) printf ("\nSigned number -- Decimal number is %ld", result01);
}

void BinToHex ()
{
	int counter01 = 0, counter02 = 0, counter03 = 0, number[32] = {0}, number01 = 0, number02[8] = {0}, Bit = 0, BitHex = 0, i = 0;
	long int temp01 = 0, temp02 = 0, temp03 = 0;
	unsigned long int result01 = 0;
	double temp = 0;

	printf ("\nWhich bit number will you enter (8, 16 or 32)? ");
	scanf ("%d", &Bit);
	BitHex = Bit / 4;
	switch (Bit)
	{
		case 8:
		case 16:
		case 32:
			for (counter01 = 0; counter01 <= Bit-1; counter01++)
			{
				printf ("%d. Enter number (0 or 1): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 == 0) || (number01 == 1) )
				{
					number[counter01] = number01;
					temp = pow (2, Bit-1-i);
					result01 += number[counter01] * temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use.\n");
					getch ();
				}

			}
			break;
		default:
			printf ("\nWrong use.");
	}
	// convert from decimal to hexadecimal
	for (counter02 =0; counter02 <= BitHex-1; counter02++)
	{
		i++;
		temp01 = result01;
		result01  = result01 / 16;
		temp02 = result01 * 16;
		temp03 = temp01-temp02;
		number02[counter02] = temp03;
	}
	// write out on the screen
	printf ("\nHexadecimal number = ");
	for (counter03 = BitHex-1; counter03 >= 0; counter03--)
	{
		if (number02[counter03] < 10) printf ("%d", number02[counter03]);
		if (number02[counter03] == 10) printf ("A");
		else if (number02[counter03] == 11) printf ("B");
		else if (number02[counter03] == 12) printf ("C");
		else if (number02[counter03] == 13) printf ("D");
		else if (number02[counter03] == 14) printf ("E");
		else if (number02[counter03] == 15) printf ("F");
	}
}

void HexToBin ()
{
	int counter01 = 0, counter02 = 0, counter03 = 0, number[8] = {0}, number01 = 0, number02[32] = {0}, Bit = 0, BitHex = 0, i = 0;
	long int temp01 = 0, temp02 = 0, temp03 = 0;
	unsigned long int result01 = 0;
	double temp = 0;

	printf ("\nWhich bit number will you enter (8, 16 or 32)? ");
	scanf ("%d", &Bit);
	BitHex = Bit / 4;
	switch (BitHex)
	{
		case 2:
		case 4:
		case 8:
			printf ("\nA = 10, B = 11, C = 12, D = 13, E = 14, F = 15\n");
			for (counter01 = 0; counter01 <= BitHex-1; counter01++)
			{
				printf ("%d. Enter number (0 to 15): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 <= 15) && (number01 >= 0) )
				{
					number[counter01] = number01;
					temp = pow (16, BitHex-1-i);
					result01 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use. \n");
					getch ();
				}
			}
			break;
		default:
			printf("\nWrong use.");
			break;
	}
	// convert from decimal to binary number
	for (counter02 = 0; counter02 <= Bit-1; counter02++)
	{
		i++;
		temp01 = result01;
		result01  = result01 / 2;
		temp02 = result01 * 2;
		temp03 = temp01-temp02;
		number02[counter02] = temp03;
	}
	// write out on the screen
	printf("\nBinary number = ");
	for (counter03 = Bit-1; counter03 >= 0; counter03--)
	{
		printf ("%d", number02[counter03]);
	}
}

void DecToOct (long int number)
{
	int counter01 = 0, counter02 = 0, i = 0, BitOct = 0, number01[11] = {0};
	long int temp01 = 0, temp02 = 0, temp03 = 0, temp04 = 0;
	unsigned long int temp05 = 0;

	temp01 = number;
	if ( ((number >= -128) && (number <= -1)) || ((number <= 127) && (number >= 0)) ) // 8 bit
	{
		BitOct = 3;
		temp05 = number+256;
	}
	else if ( ((number >= -32768) && (number <= -129)) || ((number <= 32767) && (number >= 128)) ) // 16 bit
	{
		BitOct = 6;
		temp05 = number+65536;
	}
	else if ( ((number >= -2,147,483,648) && (number <= -32769)) || ((number <= 2147483647) && (number >= 32768)) ) // 32 bit
	{
		BitOct = 11;
		temp05 = number+4294967296;
	}
	for (counter01 = 0; counter01 <= BitOct-1; counter01++)
	{
		i++;
		if (temp01 < 0)					  // only for negative numbers
		{
			temp02 = temp05;
			temp05 = temp05 / 8;
			temp03 = temp05 * 8;
			temp04 = temp02-temp03;
			number01[counter01] = temp04;
		}
		else
		{
			temp02 = number;
			number = number / 8;
			temp03 = number * 8;
			temp04 = temp02-temp03;
			number01[counter01] = temp04;
		}
	}
	// write out on the screen
	printf("\nOctal number = ");
	for (counter02 = BitOct-1; counter02 >= 0; counter02--)
	{
		printf ("%d", number01[counter02]);
	}
}

void OctToDec ()
{
	int counter01 = 0, number[32] = {0}, number01 = 0, Bit = 0, BitOct = 0, i = 0, j = 0, n = 1;
	long int result01 = 0, result02 = 0;
	unsigned long int result03 = 0;
	double temp = 0;

	printf ("\nWhich bit number will you enter (8, 16 or 32)? ");
	scanf ("%d", &Bit);
	if (Bit == 8) BitOct = 3;
	else if (Bit == 16) BitOct = 6;
	else if (Bit == 32) BitOct = 11;
	switch (BitOct)
	{
		case 6:
			for (counter01 = 0; counter01 <= BitOct-n; counter01++)
			{
				printf ("%d. Enter number (0 to 7): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 <= 7) && (number01 >= 2) && (i == 0) )
				{
					number[counter01] = number01;
					j++;
				}
				if (j == 1) n = 2;
				if ((number01 <= 7) && (number01 >= 0))
				{
					number[counter01] = number01;
					temp = pow (8, BitOct-n-i);
					result01 += number[counter01]*temp;
					result03 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use. \n");
					getch ();
				}
			}
			break;
		case 3:
		case 11:
			for (counter01 = 0; counter01 <= BitOct-n; counter01++)
			{
				printf ("%d. Enter number (0 to 7): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 <= 7) && (number01 >= 4) && (i == 0) )
				{
					number[counter01] = number01;
					j++;
				}
				if (j == 1) n = 2;
				if ((number01 <= 7) && (number01 >= 0))
				{
					number[counter01] = number01;
					temp = pow (8, BitOct-n-i);
					result01 += number[counter01]*temp;
					result03 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use. \n");
					getch ();
				}
			}
			break;
		default:
			printf ("\nWrong use.");
			break;
	}
	if ( (BitOct != 11) && ((BitOct == 6) || (BitOct == 3)) )
	{
		printf ("\nUnsigned number -- Decimal number is %ld", result01);
	}
	else if ( (BitOct == 3) || (BitOct == 6) || (BitOct == 11) )
	{
		printf ("\nUnsigned number -- Decimal number is %lu", result03);
	}
	if ( (BitOct == 3) && ((result01 < 256) && (result01 > 127)) )
	{
		result02 = result01 - 256;
		printf ("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ( (BitOct == 6) && ((result01 < 65536) && (result01 > 32767)) )
	{
		result02 = result01 - 65536;
		printf("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ((BitOct == 11) && (result03 > 2147483647))
	{
		result02 = result03 - 4294967296;
		printf("\nSigned number -- Decimal number is %ld", result02);
	}
	else if ((BitOct == 11) || (BitOct == 6) || (BitOct == 3)) printf("\nSigned number -- Decimal number is %ld", result01);
}

void OctToBin ()
{
	int counter01 = 0, counter02 = 0, counter03 = 0, number[11] = {0}, number01 = 0, number02[32] = {0}, Bit = 0, BitOct = 0, i = 0, j = 0, n = 1;
	long int temp01 = 0, temp02 = 0, temp03 = 0;
	unsigned long int result01 = 0;
	double temp = 0;

	printf ("\nWhich bit number will you enter (8, 16 or 32)? ");
	scanf ("%d", &Bit);
	if (Bit == 8) BitOct = 3;
	else if (Bit == 16) BitOct = 6;
	else if (Bit == 32) BitOct = 11;
	switch (BitOct)
	{
		case 6:
			for (counter01 = 0; counter01 <= BitOct-n; counter01++)
			{
				printf ("%d. Enter number (0 to 7): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 <= 7) && (number01 >= 2) && (i == 0) )
				{
					number[counter01] = number01;
					j++;
				}
				if (j == 1) n = 2;
				if ( (number01 <= 7) && (number01 >= 0) )
				{
					number[counter01] = number01;
					temp = pow (8, BitOct-n-i);
					result01 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use.\n");
					getch ();
				}
			}
			break;
		case 3:
		case 11:
			for (counter01 = 0; counter01 <= BitOct-n; counter01++)
			{
				printf ("%d. Enter number (0 to 7): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 <= 7) && (number01 >= 4) && (i == 0) )
				{
					number[counter01] = number01;
					j++;
				}
				if (j == 1) n = 2;
				if ( (number01 <= 7) && (number01 >= 0) )
				{
					number[counter01] = number01;
					temp = pow (8, BitOct-n-i);
					result01 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use. \n");
					getch ();
				}
			}
			break;
		default:
			printf ("\nWrong use.");
			break;
	}
	for (counter02 = 0; counter02 <= Bit-1; counter02++)
	{
		i++;
		temp01 = result01;
		result01  = result01 / 2;
		temp02 = result01 * 2;
		temp03 = temp01-temp02;
		number02[counter02] = temp03;
	}
	// write out on the screen
	printf("\nBinary number = ");
	for (counter03 = Bit-1; counter03 >= 0; counter03--)
	{
		printf ("%d", number02[counter03]);
	}
}

void BinToOct()
{
	int counter01 = 0, counter02 = 0, number[32] = {0}, number01 = 0, number02[11] = {0}, Bit = 0, BitOct = 0, i = 0;
	long int temp01 = 0, temp02 = 0, temp03 = 0;
	unsigned long int result01 = 0;
	double temp = 0;

	printf ("\nWhich bit number will you enter (8, 16 or 32)? ");
	scanf ("%d", &Bit);
	if (Bit == 8) BitOct = 3;
	else if (Bit == 16) BitOct = 6;
	else if (Bit == 32) BitOct = 11;
	switch (Bit)
	{
		case 8:
		case 16:
		case 32:
			for (counter01 = 0; counter01 <= Bit-1; counter01++)
			{
				printf ("%d. Enter number (0 or 1): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 == 0) || (number01 == 1) )
				{
					number[counter01] = number01;
					temp = pow(2, Bit-1-i);
					result01 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use.\n");
					getch ();
				}
			}
			break;
		default:
			printf ("\nWrong use.");
			break;
	}
	if ((Bit == 32) || (Bit == 16) || (Bit == 8)) // 32, 16 and 8 bit numbers
	{
		printf("\nOctal number of binary number\n");
		for (counter02 = 0; counter02 <= Bit-1; counter02++)
		{
			printf ("%d", number[counter02]);
		}
		printf (" = ");
	}
	// from decimal to octal number
	for (counter01 =0; counter01 <= BitOct-1; counter01++)
	{
		i++;
		temp01 = result01;
		result01  = result01 / 8;
		temp02 = result01 * 8;
		temp03 = temp01-temp02;
		number02[counter01] = temp03;
	}
	// write out on the screen
	for (counter01 = BitOct-1; counter01 >= 0; counter01--)
	{
		printf ("%d", number02[counter01]);
	}
}

void HexToOct ()
{
	int counter01 = 0, counter02 = 0, number[8] = {0}, number01 = 0, number02[11] = {0}, Bit = 0, BitHex = 0, BitOct = 0, i = 0;
	long int temp01 = 0, temp02 = 0, temp03 = 0;
	unsigned long int result01 = 0;
	double temp = 0;

	printf ("\nWhich bit will you enter (8, 16 or 32)? ");
	scanf ("%d", &Bit);
	if (Bit == 8) BitOct = 3;
	else if (Bit == 16) BitOct = 6;
	else if (Bit == 32) BitOct = 11;
	BitHex = Bit / 4;
	switch (BitHex)
	{
		case 2:
		case 4:
		case 8:
			printf("\nA = 10, B = 11, C = 12, D = 13, E = 14, F = 15\n");
			for (counter01 = 0; counter01 <= BitHex-1; counter01++)
			{
				printf ("%d. Enter number (0 to 15): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 >= 0) && (number01 <= 15) )
				{
					number[counter01] = number01;
					temp = pow (16, BitHex-1-i);
					result01 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use.\n");
					getch ();
				}

			}
			break;
		default:
			printf ("\nWrong use.");
			break;
	}
	if ((BitHex == 8) || (BitHex == 4) || (BitHex == 2)) // 32, 16 in 8 bit-ne cifre
	{
		printf("\nOctal number of hexadecimal number");
		for (counter02=0; counter02<=BitHex-1; counter02++)
		{
			if (number[counter02] < 10) printf ("%d", number[counter02]);
			if (number[counter02] == 10) printf ("A");
			else if (number[counter02] == 11) printf ("B");
			else if (number[counter02] == 12) printf ("C");
			else if (number[counter02] == 13) printf ("D");
			else if (number[counter02] == 14) printf ("E");
			else if (number[counter02] == 15) printf ("F");
		}
		printf (" = ");
	}
	// from decimal to octal number
	for (counter01 = 0; counter01 <= BitOct-1; counter01++)
	{
		i++;
		temp01 = result01;
		result01  = result01 / 8;
		temp02 = result01 * 8;
		temp03 = temp01-temp02;
		number02[counter01] = temp03;
	}
	for (counter01 = BitOct-1; counter01 >= 0; counter01--)
	{
		printf ("%d", number02[counter01]);
	}
}

void OctToHex ()
{
	int counter01 = 0, counter02 = 0, counter03 = 0, number[11] = {0}, number01 = 0, number02[8] = {0}, Bit = 0, BitOct = 0, BitHex = 0, i = 0, j = 0, n = 1;
	long int temp01 = 0, temp02 = 0, temp03 = 0;
	unsigned long int result01 = 0;
	double temp = 0;

	printf ("\nWhich bit number will you enter (8, 16 or 32)? ");
	scanf ("%d", &Bit);
	if (Bit == 8) { BitOct = 3; BitHex = 2; }
	else if (Bit == 16) { BitOct = 6; BitHex = 4; }
	else if (Bit == 32) { BitOct = 11; BitHex = 8; }
	switch (BitOct)
	{
		case 6:
			for (counter01 = 0; counter01 <= BitOct-n; counter01++)
			{
				printf("%d. Enter number (0 to 7): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 <= 7) && (number01 >= 2) && (i == 0) )
				{
					number[counter01] = number01;
					j++;
				}
				if (j == 1) n = 2;
				if ((number01 <= 7) && (number01 >= 0))
				{
					number[counter01] = number01;
					temp = pow (8, BitOct-n-i);
					result01 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use.\n");
					getch ();
				}
			}
			break;
		case 3:
		case 11:
			for (counter01 = 0; counter01 <= BitOct-n; counter01++)
			{
				printf ("%d. Enter number (0 to 7): ", i+1);
				scanf ("%d", &number01);
				if ( (number01 <= 7) && (number01 >= 4) && (i == 0) )
				{
					number[counter01] = number01;
					j++;
				}
				if (j == 1) n = 2;
				if ((number01 <= 7) && (number01 >= 0))
				{
					number[counter01] = number01;
					temp = pow (8, BitOct-n-i);
					result01 += number[counter01]*temp;
					i++;
				}
				else
				{
					counter01 = i-1;
					printf ("\nWrong use.\n");
					getch ();
				}
			}
			break;
		default:
			printf ("\nWrong use.");
			break;
	}
	// from decimal to hexadecimal number
	for (counter02=0; counter02<=BitHex-1; counter02++)
	{
		i++;
		temp01 = result01;
		result01  = result01 / 16;
		temp02 = result01 * 16;
		temp03 = temp01-temp02;
		number02[counter02] = temp03;
	}
	// write out on the screen
	printf("\nHexadecimal number = ");
	for (counter03 = BitHex-1; counter03 >= 0; counter03--)
	{
		if (number02[counter03] < 10) printf ("%d", number02[counter03]);
		if (number02[counter03] == 10) printf ("A");
		else if (number02[counter03] == 11) printf ("B");
		else if (number02[counter03] == 12) printf ("C");
		else if (number02[counter03] == 13) printf ("D");
		else if (number02[counter03] == 14) printf ("E");
		else if (number02[counter03] == 15) printf ("F");
	}
}

void Number_Limits ()
{
	clearScreen ();
	printf ("\t\tNUMBER LIMITS (8, 16 and 32 bit numbers)");
	printf ("\n\n\n\t\t\t\t8 BIT numbers");
	printf ("\n\n\t\tUnsigned 8 bit number:  0..255");
	printf ("\n\t\tSigned 8 bit number:    -128..127");
	printf ("\n\n\t\t\t\t16 BIT numbers");
	printf ("\n\n\t\tUnsigned 16 bit number: 0..65535");
	printf ("\n\t\tSigned 16 bit number:   -32768..32767");
	printf ("\n\n\t\t\t\t32 BIT numbers");
	printf ("\n\n\t\tUnsigned 32 bit number: 0..4,294,967,295");
	printf ("\n\t\tSigned 32 bit number:   -2,147,483,648..2,147,483,647");
}

void clearScreen() {
	DWORD n;
	DWORD size;
	COORD coord = { 0 };
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(h, &csbi);
	size = csbi.dwSize.X * csbi.dwSize.Y;

	FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
	FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
	SetConsoleCursorPosition(h, coord);
}