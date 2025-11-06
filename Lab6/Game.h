#ifndef GAME_H
#define GAME_H

#include <vector>
#include "RPG.h"
#include <set>
struct Game {
    Game();
    void generatePlayers(int n);
    int selectPlayer();
    void endRound(RPG* winner, RPG* loser, int loser_index);
    void battleGround();
    void gameLoop();
    void printFinalResults();
    ~Game();

    private:
        std::vector<RPG*> players;
        set<int> live_players;
};
#endif