#include <iostream>
#include "Log.cpp"

#define LOG(x) std::cout << x << std::endl

//int s_Variable; // Can't define a variable like that which is a global, you should define sth like that below
extern  int s_Variable; // extern keyword must be written if a variable that you are defining is in a another script -> You can view Static.cpp file

class Player{
public:
    int x,y;
    int speed;

    void Move(int xa, int ya){
        x += xa * speed;
        y += ya * speed;
    }

    void Position(){
        LOG("X: " << x << " Y: " << y);
    }
    
};

struct Vec2{
    float x, y;
    void Add(const Vec2& other){
        x += other.x;
        y += other.x;
    }
};

int main() {
    /////////////////////////
    /*
    Player player1;
    player1.x = 5;
    player1.y = 5;
    player1.speed = 1;
    player1.Move(1, -1);
    player1.Position();
    */
    /////////////////////////

    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");

    std::cin.get();
}
