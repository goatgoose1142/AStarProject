//
//  AStarWindow.hpp
//  AStar
//
//  Created by Sam Clark on 4/29/17.
//
//

#ifndef AStarWindow_hpp
#define AStarWindow_hpp

#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"
#include "BaseWindow.hpp"
#include "Tile.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Astar.hpp"
#include <math.h>

class AStarWindow: public BaseWindow {
public:
    AStarWindow(int gridSize, int scale, int borderWidth);
    
    void resetTiles();
    void distributeObsticles(int distributionPercent);
    Tile* getTile(int x, int y);
    
    int getDistance(Tile* tile1, Tile* tile2);
    double getEuclideanDistance(Tile* tile1, Tile* tile2);
    
    int getScale();
    int getGridSize();
    int getBorderWidth();
    
    Tile* getStart();
    Tile* getFinish();
    
private:
    int gridSize;
    int scale;
    int borderWidth;
    
    void updateTiles();
    
    vector<vector<Tile*>> tiles;
    
    virtual void resizeEvent(Event event);
};

#endif /* AStarWindow_hpp */
