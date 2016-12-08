#include <iostream>

int main()
{
	while(true)
	{
		float wellHeight, upDistance, downSlide, fatigueFactor;
		float currentHeight = 0.0;
		int currentDay = 1;
		std::cin >> wellHeight >> upDistance >> downSlide >> fatigueFactor;
		if(wellHeight == 0)
			break;
		float fatiguePenalty = upDistance * (fatigueFactor / 100.0);
		while(true)
		{
			currentHeight = currentHeight + upDistance;
			if(currentHeight > wellHeight)
				break;
			currentHeight -= downSlide;
			if(currentHeight < 0.0)
				break;
			upDistance -= fatiguePenalty;
			if(upDistance < 0.0)
				upDistance = 0.0;
			currentDay++;
		}//while, inside
		if(currentHeight < 0.0)
			std::cout << "failure on day " << currentDay << std::endl;
		else
			std::cout << "success on day " << currentDay << std::endl;
	}//while, outside
}//main()
