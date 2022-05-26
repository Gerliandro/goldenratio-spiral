#include <iostream>
#include <vector>
#include <string>
#include <math.h>

#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/OpenGL.hpp>

#include <gl_init.hpp>
#include <context_drawn.hpp>

std::string title_name = "OpengGL Golden Ratio";
bool running    = true,
     fullscreen = false;

sf::RenderWindow window;
sf::Vector2i window_size;

int main()
{
    window.create(sf::VideoMode::getDesktopMode(), title_name, sf::Style::Default, gl_settings());
    window_size = sf::Vector2i(window.getSize().x, window.getSize().y);
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(true);
    window.setActive(true);

    while(running)
    {   
        opengl_init();
        
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    running = false;
                    break;
                case sf::Event::Resized:
                    window_size = sf::Vector2i(event.size.width, event.size.height);
                    break;
                case sf::Event::KeyPressed:
                    switch (event.key.code)
                    {
                        case sf::Keyboard::Escape:
                            running = false;
                            break;
                        case sf::Keyboard::F11:
                            fullscreen = !(fullscreen);
                            if(fullscreen)
                                window.create(sf::VideoMode::getDesktopMode(), title_name, sf::Style::Fullscreen, gl_settings());
                            else
                                window.create(sf::VideoMode::getDesktopMode(), title_name, sf::Style::Default, gl_settings());
                            break;
                    }
                    break;    
            }
        }

        glViewport(0, 0, window_size.x, window_size.y);
        opengl_3d_init();
        drawn_3d_context();
       
        window.display();
    }

    return 0;
}