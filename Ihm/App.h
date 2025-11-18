#ifndef APP_H
#define APP_H

#include <SFML/Graphics.hpp>
#include <vector>

#include "../Components/Figure.h"
#include "../Components/Cercle.h"
#include "../Components/Triangle.h"
#include "../Components/Rectangle.h"
#include "../Components/Carre.h"

class App {
private:
    sf::RenderWindow window;
    std::vector<Figure*> figures;
    sf::Font font;

public:
    App();
    ~App();

    void run();
};

#endif

