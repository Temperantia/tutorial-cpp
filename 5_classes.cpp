// Copyright (c) 2019 Alexandre Du lorier. All rights reserved.
/**
 * classes
 * function overloading
 * initializer list
 * interface
 */

#include <string>


namespace Config {
  static constexpr char *NAME = "ok";
}

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class IBird {
 public:
    IBird(void) =delete;
    virtual ~IBird(void) {};
    virtual void sing(void) = 0;
};

class ABird: public IBird {
  ABird(void) =delete;
  virtual ~ABird(void) {};
  virtual void sing(void) {
    cout << "hello" << endl;
  }
};

class Bird {
 public:
    int size;
    int color;
    string name;

    Bird(void): size(3), color(2), name("birdie"), weight(32), life(true) {
        cout << this->name << " is living " << endl;
    }
    // Bird(void);

    Bird(int _color):
        size(3),
        color(_color),
        name("colorful birdie"),
        weight(32),
        life(true) {
        cout << this->name << " is living " << endl;
    }

    ~Bird(void){
        cout << this->name << " is dying" << endl;
    }

    Bird(const Bird& rhs) = default;
    Bird& operator=(const Bird& rhs) = default;

    virtual void sing(void);

 protected:
    int weight;

 private:
    bool life;
};
/*
Bird::Bird(void) {
    this->name = "birdie";
    cout << this->name << " is living " << endl;
}
*/
void Bird::sing(void)  {
    cout << this->name << " is singing" << endl;
}

class AngryBird: public Bird {
 public:
    int anger;

    AngryBird() {
        this->anger = 9001;
        this->weight = 23;
    }

    void sing(void);

    void attack(void) {
        cout << this->name << " is attacking" << endl;
    }
};

void AngryBird::sing(void) {
    cout << this->name << " is angry and refuses to sing" << endl;
}
#include <array>
using std::array;
int main(void) {
    array<Bird, 2> a;
    Bird bird1;
    // bird1.size = 2;

    // Bird bird2 = bird1;
    // Bird bird3 = Bird(bird1);

    //cout << bird1.name << endl;
    // cout << bird.life << endl; NE COMPILE PAS

    Bird colorfulBird(1);

    AngryBird aBird;
    a[0] = bird1;
    a[1] = aBird;
    // aBird.weight = 34; NON ACCESSIBLE
    //aBird.attack();
    bird1.sing();
    aBird.sing();
  
    cout << endl;
  
    for (auto &bird : a) {
      bird.sing();
    }


}
