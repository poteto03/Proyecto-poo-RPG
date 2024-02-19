#include <iostream>
#include "Player/Player.h"
#include "Enemy/Enemy.h"

int main() {
    Player *player = new Player("Victor", 100, 8, 4, 10);
    Enemy *enemy = new Enemy("Estudiante de Redes", 50, 5, 2, 5, 10);

    cout << player->toString() << endl;
    cout << enemy->toString() << endl;

    cout << "=====================" << endl;

    int round=0;


    while (player->getHealth() >= enemy->getHealth() && enemy->getHealth() >= 0){
        player->doAttack(enemy);
        enemy->doAttack(player);
        round ++;
        cout <<"Round "<<round<<endl;
        cout << player->toString() << endl;
        cout << enemy->toString() << endl;
    }


   if (player->getHealth() > enemy->getHealth()){
       cout<<"After "<<round<<" rounds"<<endl;
       cout<<"Player "<<player->getName()<< " wins!"<<endl;
       cout<<"Remaining health "<<player->getHealth()<<endl;
   }
   else{
       cout<<"Enemy "<<enemy->getName()<< " wins!"<<endl;
   }

    delete player;
    delete enemy;
    return 0;
}
