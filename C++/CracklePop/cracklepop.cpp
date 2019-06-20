
#include <cstdlib>
#include <iostream>

/*
Loops from 1 to 100 (inclusive) in variable i
If not divisible by 3 or 5, number is printed to screen 
If divisible by 3, "Crackle" is printed to screen 
If divisible by 5, "Pop" is printed to screen 
If divisible by 3 and 5, "CracklePop" is printed to screen
After each number, a new line in added
*/
void CrackPop()
{
	// Loop through 1 to 100
	for( int i = 1 ; i <= 100 ; i++)
	{
		// If i is divisible by 3 or 5, print special character
		if( i%3 == 0 || i%5 == 0 )
		{
			// If divisible by 3, print "Crackle"
			if( i%3 == 0 )
			{
				std::cout << "Crackle";
			}
			// If divisible by 5, print "Pop"
			if( i%5 == 0 )
			{
				std::cout << "Pop";
			}
		}
		// If not divisible by 3 or 5, print i
		else
		{
			std::cout << i;
		}
		// New Line
		std::cout << std::endl;
	}
}

int main()
{
	CrackPop();

return 0;
}