#include <cstdio>
#include <iostream>
#include <list>


bool isspace(char ip){
	if(ip=='\n' || ip==' ' || ip=='\t' || ip=='\v' || ip=='\f' || ip=='\r')
		return(true);
	else
		return(false);
}// bool isspace(char)

int main(){

	char input;

	std::list<char> wordReverser;

	bool currentlyInWord;

	//Establish whether we are starting in a word
	input = getchar();
	if(isspace(input))
	{
		std::cout << input;
		currentlyInWord = false;
	}//if
	else
	{
		wordReverser.push_front(input);
		currentlyInWord = true;
	}//else

	//Main loop
	while( (input = getchar()) != EOF)
	{
		if(!isspace(input) && currentlyInWord)
			wordReverser.push_front(input);
		else if(isspace(input) && !currentlyInWord)
		{
			std::cout << input;
		}//else if
		else if(!isspace(input) && !currentlyInWord)
		{
			wordReverser.push_front(input);
			currentlyInWord = !currentlyInWord;
		}
		else if(isspace(input) && currentlyInWord)
		{
			for(std::list<char>::iterator lit = wordReverser.begin(); lit != wordReverser.end(); ++lit)
				std::cout << *lit;
			wordReverser.clear();
			std::cout << input;
			currentlyInWord = !currentlyInWord;
		}
		else
		{
			std::cout << "none of base cases reached." << std::endl;
		}//else
	}//while
}//main)
