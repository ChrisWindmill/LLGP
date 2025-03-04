#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

/*
    This version of the SFML "hello world" is statically linked, you may wish to try the dynamically linked version as well.
*/
int WinMain()
{
    RenderWindow window(VideoMode({ 400, 400 }), "SFML works!");
    CircleShape shape(100.f, 9);
    shape.setFillColor(Color::Magenta);
    RectangleShape rectangle({ 50.f, 50.f });
    rectangle.setFillColor(Color::Blue);
    rectangle.setSize({ 100.f, 100.f });
    rectangle.setPosition({250.f, 100.f});


    while (window.isOpen())
    {
        // Event polling section of code - this must be done in the thread which created the window
        // we will talk about threading later, but essentially this must be done here
        while (const optional event = window.pollEvent())
        {
            if (event->is<Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(rectangle);
        window.display();
    }
}