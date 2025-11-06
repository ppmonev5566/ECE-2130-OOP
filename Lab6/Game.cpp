#include "Game.h"
#include <iostream>
#include <string>
#include <random>
using namespace std;

Game::Game() {
    // Constructor logic if needed
};
void Game::generatePlayers(int n){
    for (int i = 0; i < n; i++){   
        this->players.push_back(new RPG());
        string new_name = "NPC_" + std::to_string(i);
        this->players[i]->setName(new_name);
        this->live_players.insert(i);
    }
}
int Game::selectPlayer(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, this->live_players.size() - 1);
    
    int index = dis(gen);
    
    set<int>::iterator it = this->live_players.begin();
    std::advance(it, index);
    return *it;
}
void Game::endRound(RPG* winner, RPG* loser, int loser_index){
    winner->setHitsTaken(0);
    this->live_players.erase(loser_index);
    winner->updateExpLevel();
    cout << winner->getName() << " wins the round against " << loser->getName() << "!" << endl;
}
void Game::battleGround(){
    int player1_index = selectPlayer();
    int player2_index = selectPlayer();
    if (player1_index == player2_index){
        Game::battleGround();
        return;
    }

    RPG* player1 = this->players[player1_index];
    RPG* player2 = this->players[player2_index];
    
    while (player1->isAlive() && player2->isAlive()){
        player1->attack(player2);
        if (!player2->isAlive()){
            endRound(player1, player2, player2_index);
            return;
        }
        player2->attack(player1);
        if (!player1->isAlive()){
            endRound(player2, player1, player1_index);
            return;
        }
    }
}
void Game::gameLoop(){
    while (this->live_players.size() > 1){
        Game::battleGround();
    }
}
void Game::printFinalResults(){
    if (this->live_players.size() == 1){
        int winner_index = *(this->live_players.begin());
        RPG* winner = this->players[winner_index];
        cout << "The winner of the game is " << winner->getName() << "!" << endl;
        for (RPG* player : this->players){
            player->printStats();
        }
    } else {
        cout << "No players remaining." << endl;
    }
}

Game::~Game(){
    delete this;
}
