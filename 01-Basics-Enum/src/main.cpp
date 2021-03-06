#include <iostream>

enum class Aliment
{
	BURGER, 
	SUSHI, 
	SALAD, 
	PIZZA
};

enum class Cities
{
	PARIS = 1,
	LONDON,
	BERLIN,
	MADRID
};

std::string PrintSuit(Aliment suit_) {

	switch (suit_)
	{
	case Aliment::BURGER:
		return "American food with bread, meat and cheese";
		break;

	case Aliment::SUSHI:
		return "Japanese food but cold";
		break;

	case Aliment::SALAD:
		return "One of the five to eat everyday";
		break;

	case Aliment::PIZZA:
		return "No ananas";
		break;

	default:
		break;
	}

}

int main() {

  std::cout << "01-Basics-Enum" << std::endl;

  Aliment aliment;
  aliment = Aliment::PIZZA;
  std::cout << PrintSuit(aliment) << std::endl;

  Cities city;
  city = Cities::LONDON;
  std::cout << static_cast<int>(city) << std::endl;

  return EXIT_SUCCESS;

}


