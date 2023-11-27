#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
using namespace std;

// function
void startgame(sf::RenderWindow& window, int& i);

int main() {
    int i = 1;

    sf::RenderWindow window(sf::VideoMode(1280, 720), "CREEPER OH-MAN");
    window.setFramerateLimit(60);

    // sound
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("C:/Users/Jerome/Desktop/Creeper/include/Cat.wav")) {
        return -1;
    }
	sf::Sound sound;
    sound.setBuffer(buffer);

    // play the sound automatically in the background
    sound.play();
    
    // set background music to loop
    sound.setLoop(true);
    
    // font
    sf::Font font;
    	if (!font.loadFromFile("C:/Users/Jerome/Desktop/Creeper/include/minecraft.ttf")) {
        // Handle font loading error
        return -1;
    }

	// main title
    sf::Text title("CREEPER OH-MAN", font, 60);
    title.setPosition(380, 150);
    title.setFillColor(sf::Color::Green);

    // menu options
    sf::Text startOption("Start Game", font, 30);
    startOption.setPosition(500, 350);
    startOption.setFillColor(sf::Color::White);

    sf::Text exitOption("Exit", font, 30);
    exitOption.setPosition(500, 450);
    exitOption.setFillColor(sf::Color::White);


	// main menu
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // mouse click
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                if (startOption.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                	// calling function to start game if na press yung start
                    startgame(window, i);
                } else if (exitOption.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                    // exits the game
                    window.close();
                }
            }
        }

        window.clear();

        // para ma display yung texts sa taas
        window.draw(title);
        window.draw(startOption);
        window.draw(exitOption);

        window.display();
    }

    return 0;
}


// function
void startgame(sf::RenderWindow& window, int& i) {
    

    while (window.isOpen()) {
	
		//window background color
        window.clear(sf::Color(153, 206, 235));
        
        //format sf::<shape>Shape <name>(sf::Vector2f(width,height));
        //position <name>.setPosition(x-coordinate, y-coordinate);
        //color <name>.setFillColor(sf::Color::<rgb values>);
        //outline <name>.setOutlineColor(sf::Color::<rgb values>; <name>.setOutlineThickness(number);
        //display drawing window.draw(name);
        
        //head
        sf::RectangleShape head(sf::Vector2f(80, 80));
        head.setPosition(200 + i, 385);
        head.setFillColor(sf::Color(1, 209, 72));
        head.setOutlineColor(sf::Color::Black);
        head.setOutlineThickness(5);
        window.draw(head);
        
        //head detail 1
        sf::RectangleShape detail1(sf::Vector2f(10, 10));
        detail1.setPosition(200 + i, 385);
        detail1.setFillColor(sf::Color(0, 156, 56));
        window.draw(detail1);
        
        //head detail 2
        sf::RectangleShape detail2(sf::Vector2f(10, 10));
        detail2.setPosition(270 + i, 435);
        detail2.setFillColor(sf::Color(0, 156, 56));
        window.draw(detail2);
		
		//left eye
        sf::RectangleShape lefteye(sf::Vector2f(20, 20));
        lefteye.setPosition(210 + i, 405);
        lefteye.setFillColor(sf::Color::Black);
        window.draw(lefteye);

		//right eye
        sf::RectangleShape righteye(sf::Vector2f(20, 20));
        righteye.setPosition(250 + i, 405);
        righteye.setFillColor(sf::Color::Black);
        window.draw(righteye);

		//mouth
        sf::RectangleShape mouth(sf::Vector2f(20, 30));
        mouth.setPosition(230 + i, 425);
        mouth.setFillColor(sf::Color::Black);
        window.draw(mouth);

		//mouth left side
        sf::RectangleShape mouthleft(sf::Vector2f(10, 30));
        mouthleft.setPosition(220 + i, 435);
        mouthleft.setFillColor(sf::Color::Black);
        window.draw(mouthleft);

		//mouth right side
        sf::RectangleShape mouthright(sf::Vector2f(10, 30));
        mouthright.setPosition(250 + i, 435);
        mouthright.setFillColor(sf::Color::Black);
        window.draw(mouthright);

        //body
        sf::RectangleShape body(sf::Vector2f(60, 100));
        body.setPosition(210 + i, 470);
        body.setFillColor(sf::Color(1, 209, 72));
        body.setOutlineColor(sf::Color::Black);
        body.setOutlineThickness(5);
        window.draw(body);
        
        //body detail 1
        sf::RectangleShape bodydetail(sf::Vector2f(10, 10));
        bodydetail.setPosition(260 + i, 470);
        bodydetail.setFillColor(sf::Color(0, 156, 56));
        window.draw(bodydetail);
        
        //body detail 2
        sf::RectangleShape bodydetail2(sf::Vector2f(10, 10));
        bodydetail2.setPosition(210 + i, 500);
        bodydetail2.setFillColor(sf::Color(0, 156, 56));
        window.draw(bodydetail2);
        
        //body detail 3
        sf::RectangleShape bodydetail3(sf::Vector2f(10, 10));
        bodydetail3.setPosition(220 + i, 510);
        bodydetail3.setFillColor(sf::Color(0, 156, 56));
        window.draw(bodydetail3);
        
        //body detail 4
        sf::RectangleShape bodydetail4(sf::Vector2f(10, 10));
        bodydetail4.setPosition(250 + i, 520);
        bodydetail4.setFillColor(sf::Color(0, 156, 56));
        window.draw(bodydetail4);
        
        //body detail 5
        sf::RectangleShape bodydetail5(sf::Vector2f(10, 10));
        bodydetail5.setPosition(260 + i, 530);
        bodydetail5.setFillColor(sf::Color(0, 156, 56));
        window.draw(bodydetail5);
        
        //body detail 6
        sf::RectangleShape bodydetail6(sf::Vector2f(10, 10));
        bodydetail6.setPosition(220 + i, 540);
        bodydetail6.setFillColor(sf::Color(0, 156, 56));
        window.draw(bodydetail6);
        
        //body detail 7
        sf::RectangleShape bodydetail7(sf::Vector2f(20, 10));
        bodydetail7.setPosition(250 + i, 560);
        bodydetail7.setFillColor(sf::Color(0, 156, 56));
        window.draw(bodydetail7);

		//leg
        sf::RectangleShape leg(sf::Vector2f(80, 60));
        leg.setPosition(200 + i, 575);
        leg.setFillColor(sf::Color(1, 209, 72));
        leg.setOutlineColor(sf::Color::Black);
        leg.setOutlineThickness(5);
        window.draw(leg);
        
        //foot
        sf::RectangleShape foot(sf::Vector2f(80, 10));
        foot.setPosition(200 + i, 625);
        foot.setFillColor(sf::Color(0, 102, 30));
        foot.setOutlineColor(sf::Color::Black);
        foot.setOutlineThickness(5);
        window.draw(foot);
        
        //in between lines
        sf::RectangleShape divider(sf::Vector2f(5, 60));
        divider.setPosition(238 + i, 575);
        divider.setFillColor(sf::Color::Black);
        window.draw(divider);
        
        //sf::Vertex line[] = {
            //sf::Vertex(sf::Vector2f(255 + i, 360), sf::Color::Black),
            //sf::Vertex(sf::Vector2f(255 + i, 420), sf::Color::Black)
        //};
        //window.draw(line, 2, sf::Lines);

        //grass
        sf::RectangleShape grass(sf::Vector2f(1280, 20));
        grass.setPosition(0, 640);
        grass.setFillColor(sf::Color(143, 202, 92)); // LightGreen
        window.draw(grass);
		
		//dirt
        sf::RectangleShape dirt(sf::Vector2f(1280, 60));
        dirt.setPosition(0, 660);
        dirt.setFillColor(sf::Color(131, 101, 57)); //RGB value of brown
        window.draw(dirt);

        //window
        window.display();
        
        //left border collision
        if (head.getGlobalBounds().left < 0) {
            i = 0;
        }
        //movement
        sf::Event e;
        if (window.pollEvent(e)) {
            if (e.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            i += 10;
            
        	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            	i -= 10;

			
			}	

		}
       
    


