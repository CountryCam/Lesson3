#include <iostream>
#include <string>

enum class optionMenu
{
	Play = 1,
	Options,
	Help,
	Quit
};

int main()
{
	std::cout << "Game Starting...." << std::endl;
	std::cout << "Enter Player Name" << std::endl;

	std::string playerName;
	std::cin >> playerName;
	std::cout << "Welcome " << playerName << std::endl;

	optionMenu optionPicked = optionMenu::Play;

	int keyPressed = (int)optionMenu::Play;
	std::cout << "Enter key [Play=1, Options=2, Help=3, Quit=3]" << std::endl;
	std::cin >> keyPressed;

	switch (optionPicked)
	{
	case optionMenu::Play:
		std::cout << "You are now playing!" << std::endl;
		break;

	case optionMenu::Options:
		std::cout << "Welcome to Options Menu" << std::endl;
		break;

	case optionMenu::Help:
		std::cout << "Help Menu" << std::endl;
		break;

	case optionMenu::Quit:
		std::cout << "You have Quit" << std::endl;

	default:
		std::cout << "That is invalid." << std::endl;
	}

	system("pause");
	return 0;
}