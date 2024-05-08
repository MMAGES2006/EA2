#include "Rectangle.hpp"
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace sf;
using namespace std;

int main()
{
    // setup
    RenderWindow window(VideoMode(800, 600), "SFML works!");
    window.setFramerateLimit(30);
    Rectangle rect(Vector2f(30, 30));

    // loop
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            Event event;
            if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    int xo = event.mouseButton.x;
                    int yo = event.mouseButton.y;
                    Vector2i position(xo, yo);
                    /** (5pts)
                        Cuando se de click izquierdo, se deberá actualizar el objetivo del cuadrado a la posición del mouse.
                    */
                }

                window.clear();
                rect.update();
                rect.drawTo(window);
                window.display();
            }

            return 0;
        }
    }
)