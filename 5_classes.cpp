// Copyright (c) 2019 Alexandre Du lorier. All rights reserved.
/**
 * classes
 * function overloading
 * initializer list
 * interface
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class IBird {
 public:
    virtual ~IBird(void);
    virtual void sing(void) = 0;
};

class Bird: public IBird {
 public:
    int size;
    int color;
    string name;

    Bird(void): size(3), color(2), name("birdie"), weight(32), life(true)  {
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

    ~Bird(void) override {
        cout << this->name << " is dying" << endl;
    }

    Bird(const Bird& rhs) = default;
    Bird& operator=(const Bird& rhs) = default;

    void sing(void) override;

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
void Bird::sing(void) {
    cout << this->name << " is singing" << endl;
}

class AngryBird: public Bird {
 public:
    int anger;

    AngryBird() {
        this->anger = 9001;
        this->weight = 23;
    }

    void sing(void) override;

    void attack(void) {
        cout << this->name << " is attacking" << endl;
    }
};

void AngryBird::sing(void) {
    cout << this->name << " is angry and refuses to sing" << endl;
}

int main(void) {
    Bird bird;

    cout << bird.name << endl;
    // cout << bird.life << endl; NE COMPILE PAS
    bird.sing();

    Bird colorfulBird(1);

    AngryBird aBird;

    // aBird.weight = 34; NON ACCESSIBLE
    aBird.attack();
}
