// main.cpp
#include <SFML/Graphics.hpp>

int main()
{
	// ������� ���� �������� 600 �� 600 � �������� ���������� 60 ������ � �������
	sf::RenderWindow window(sf::VideoMode(600, 600), "15");
	window.setFramerateLimit(60);

	sf::Event event;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
			if (event.type == sf::Event::KeyPressed)
			{
				// �������� ������� ������� - ��������� ��������������� ��������
				if (event.key.code == sf::Keyboard::Escape) window.close();
			}
		}

		// ��������� ����������� �������� �� ���������
		window.clear();
		window.display();
	}

	return 0;
}