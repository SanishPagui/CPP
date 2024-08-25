#include<iostream>
using namespace std;
class Pokemon{
    string str;
    public:
        Pokemon(){
            cout<<"Constuctor of all the Pokemons"<<endl;
        }
        void display(){
            cout<<"I need to catch them"<<endl;
        }
};
class Fire:virtual public Pokemon{
    public:
        Fire(){
            cout<<"Constructor for Fire Type"<<endl;
        }
};
class Flying:virtual public Pokemon{
    public:
        Flying(){
            cout<<"Constructor for Flying Type"<<endl;
        }
};
class Charizard:public Fire,public Flying{
    public:
        Charizard(){
            cout<<"Fan Favorite Pokemon"<<endl;
        }
        void description(){
            cout<<"Charizard is a fire and flying type pokemon"<<endl;
        }
};
int main(){
    Charizard c;
    c.description();
    c.display();
}
