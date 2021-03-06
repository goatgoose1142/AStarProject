
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"
#include "AStar.hpp"
#include "OutputTimer.hpp"

int main(int, char const**)
{
    AStarWindow* window = new AStarWindow(100, 2, 1);
    window->distributeObsticles(40);
    
    OutputTimer timer = OutputTimer();
    timer.start();
    AStar::search(window->getStart(), window->getFinish(), window);
    timer.stop();
    
    cout << "time: " << timer.getTime() << endl;
    
    window->launch();
    

    return EXIT_SUCCESS;
}
