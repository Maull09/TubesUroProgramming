#ifndef ENEMYSHIP_HPP_
#define ENEMYSHIP_HPP_

class ship;
#include "ship.hpp"

class enemyShip{
private:
    int const damage = 5;       // damage kapal lawan
    int const maxRange = 4;     // jarak tembak maksimum kapal lawan
public:
    int defeat_counter = 0;     // jumlah kapal dikalahkan
    ship* ally;
    int x, y;                   // posisi kapal lawan
    int health;                 // kesehatan kapal lawan
    enemyShip();
    bool isAlive();
    void attack(ship& enemy);

friend class ship;
};

#endif /*ENEMYSHIP_HPP_*/