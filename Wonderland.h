#ifndef __WONDERLAND_H__
#define __WONDERLAND_H__

#include "Neighborhood.h"
#include <iostream>
#include <stdio.h>
#include <ctype.h>

class Wonderland : public Neighborhood {
    public:
        Wonderland();
        ~Wonderland();
	int** getGrid();
        int retrieveCoordinate(char x, int y);
        char getXCoordinate();
        int getYCoordinate();
        char getBonusCoordX();
        int getBonusCoordY();
        void setBlocks();
        int getPoints();
        void addPoints(int x);
        void setPoints(char x, int index2, int type);
        std::string getTheme();
        bool checkValidity(char x, int y);
        bool getGameOver();
        int getBonusCoordinateX();
        int getBonusCoordinateY(); 
	void setBonusCoordinateX(int);
        void setBonusCoordinateY(int);
	void accept(Visitor* v); 
        void deductPts();
        void setAttempts(int x);


    private:
        int points;
        std::string theme;
        int** grid; 
        bool gameOver;
        char coordinateX;
        int coordinateY;
        //Vistor* vistor;
        //Strategy* strategy;
	char bonusCoordinateX;
        int bonusCoordinateY;
        int attempts;
        void twoNeighborhoods();
        void threeNeighborhoods();
        void setPoint();
        bool check2ValidNeighbors(char x, int y, char z, int zz);
        bool check3ValidNeighbors(char x, int y, char z, int zz, char x1, int x2);
        char setXCoord(); // implement later
        int setYCoord(); // implement later
        

};
#endif

