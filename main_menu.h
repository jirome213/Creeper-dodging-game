#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "CREEPER OH-MAN");

    // Font for text
    sf::Font font;
    if (!font.loadFromFile("C:/Users/Jerome/Desktop/learn/font/minecraft/minecraft.ttf")) {
        // Handle font loading error
        return -1;
    }

    // Title text
    sf::Text title("CREEPER OH-MAN", font, 50);
    title.setPosition(200.0f, 50.0f);
    title.setFillColor(sf::Color::White);

    // Menu options
    sf::Text startOption("Start Game", font, 30);
    startOption.setPosition(300.0f, 200.0f);
    startOption.setFillColor(sf::Color::White);

    sf::Text exitOption("Exit", font, 30);
    exitOption.setPosition(300.0f, 300.0f);
    exitOption.setFillColor(sf::Color::White);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Handle mouse click for menu options
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                if (startOption.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                    start=creeper.cpp 
                } else if (exitOption.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                    // Exit the game
                    window.close();
                }
            }
        }

        window.clear();

        // Draw menu items
        window.draw(title);
        window.draw(startOption);
        window.draw(exitOption);

        window.display();
    }

    return 0;
}
