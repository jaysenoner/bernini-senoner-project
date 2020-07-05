#ifndef THE_CASTLE_OF_DARKNESS_INVENTORY_H
#define THE_CASTLE_OF_DARKNESS_INVENTORY_H


class Inventory {

//Private Members
private:
    bool excaliburJunior;
    bool dagger;
    bool leatherVest;
    int healthPotions;
    int balm;
    int lightningFlashes;
    int fireBall;

//Public Functions
public:
    Inventory();
    int updateHealthPotions();
    int updateBalm();
    int updateLightningFlashes();
    int updateFireBalls();

};


#endif //THE_CASTLE_OF_DARKNESS_INVENTORY_H
