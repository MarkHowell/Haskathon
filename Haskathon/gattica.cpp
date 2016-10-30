#include <string>
#include <iostream>
#include <vector>
using namespace std;

// A C G T
// | | | |
// T G C A





int main()
{

	string baseString = "TAACGGTACGTC";
	string templateString = "TTGCC";
	string matchingString = templateString;
	int baseLength = baseString.length();
	int templateLength = templateString.length();

	//convert the template string to a strand that would pair with it
	for (int i = 0; i < templateLength; ++i)
	{
		if (templateString[i] == 'A')
			matchingString[i] = 'T';
		else if (templateString[i] == 'C')
			matchingString[i] = 'G';
		else if (templateString[i] == 'G')
			matchingString[i] = 'C';
		else if (templateString[i] == 'T')
			matchingString[i] = 'A';
		else
			// Invalid nucleotides in DNA, where did this thing come from?
			;
	}
	

	// for the length of the base strand, check for matches from the template strand
	std::vector<int> matchLocations = {};

	for (unsigned int currentPosition = 0; currentPosition < baseString.length();)
	{
		size_t found = baseString.find(matchingString, currentPosition);
		if (found != string::npos)
		{
			matchLocations.push_back(found);
			currentPosition = found + 1;
		}
		else
			break;
	}
	


	return 0;

}


