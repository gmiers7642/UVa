#include <cstdio>
#include <iostream>

int main(){
	char input;
	bool openQuoteFlag = true;
	while( (input = getchar()) != EOF)
	{
		if(input == '\"' && openQuoteFlag)
		{
			std::cout << "``";
			openQuoteFlag = !openQuoteFlag;
		}
		else if(input == '\"' && !openQuoteFlag)
		{
			std::cout << "\'\'";
			openQuoteFlag = !openQuoteFlag;
		}
		else
		{
			std::cout << input;		
		}
	}//while

}//main()
