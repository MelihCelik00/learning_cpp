#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Player{

public:
    int x,y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }

    void Position()
    {
        LOG("X: " << x << " Y: " << y);
    }
    
};


int main() {

    Player player1;
    player1.x = 5;
    player1.y = 5;
    player1.speed = 1;

    player1.Move(1, -1);

    player1.Position();


    std::cin.get();
}
