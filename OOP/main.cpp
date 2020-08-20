#include <iostream>
#include "Log.cpp"

#define LOG(x) std::cout << x << std::endl

//int s_Variable; // Can't define a variable like that which is a global, you should define sth like that below
extern  int s_Variable; // extern keyword must be written if a variable that you are defining is in a another script -> You can view Static.cpp file

class Player{ // Default private
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

struct Vec2{ // default public
    float x, y;
    void Add(const Vec2& other){
        x += other.x;
        y += other.x;
    }
};

struct Entity{
        static int x,y;

        void Print(){
            std::cout<< x << ", " << y << std::endl;
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
    /*
    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    */
    /////////////////////////

    Entity e;
    e.x = 2;
    e.y = 3;

    //Entity e1 = {5,8}; // It can be used if only variables are not static.
    Entity e1;
    e1.x = 5;
    e1.y = 8;

    e.Print();
    e1.Print();

    std::cin.get();
}
