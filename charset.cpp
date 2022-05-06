#include <windows.h>

class person {
public:
char* name = "L.H 하레스";
char* owner = "레프";

};


class drone : public person { 
//protected:
public:
    drone();
    drone(int x, int y,bool is, char* str);
    drone(const drone& dr);
    ~drone();
public:
int count;
int range;
int damage;
bool harmful;
char* type;


};

class program : public person{
//private:
public:
    void makeBox(int vector, char* material);
    void EMP(int time);

public:
int vector;
char* material;
int time;

};

@override
program::makeBox(int vector, char* material) {
    
}

@override
program::EMP(int time) {
    sleep(time * 1000);
}

drone::drone(int x, int y,bool is, char* str) {
    count = x;
    range = y;
    type = str;
    harmful = is;
}

drone::drone(const drone& dr) {
    count = dr.count;
    range = dr.range;
    type = dr.type;
    harmful = dr.harmful;
}


int main()
{
    drone(40, 5,false, "reconnaissance drone");
    drone(100, 2, true, "target drone");
    drone(30, 5,true, "sinper drone");

}
