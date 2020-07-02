

#ifndef THE_CASTLE_OF_DARKNESS_PLAYER_H
#define THE_CASTLE_OF_DARKNESS_PLAYER_H

#include <cstdlib>

class Player {

//Private Members
private:
    int lifePoints;
    int gold;
    int expPoints;

//Public Functions
public:
    Player();
    virtual ~Player();
    static int rollTheDice();
    void gainHealth( int healthGained);
    void takeDamage( int damageTaken);
    void addExp( int expGained);
    void update();

    //Getters and setters
    int getLifePoints() const;
    void setLifePoints(int lifePoints);
    int getGold() const;
    void setGold(int gold);
    int getExpPoints() const;
    void setExpPoints(int expPoints);



//Private Functions
private:
    void initVariables();
    void initLifePoints();
    void initExp();
    void initGold();

};


#endif //THE_CASTLE_OF_DARKNESS_PLAYER_H
