#include <iostream>
using namespace std;

class Grandfather{
    public :

    void  disp(){
        cout<<"This is Grandfather class"<<"\n";
    }
};

//Father class inherits from Grandfather class
class Father : public Grandfather{
    public :

    void  disp(){
        cout<<"This is Father class"<<"\n";
    }
};

//Child class inherits from Father class : Hierarchical as it recieves methods and attributes from Grandfather also
class Child : public Father{
    public :

    void  disp(){
        cout<<"This is Child class"<<"\n";
    }
};
int main(void){
    Child c;
    
    cout<<"---Printing disp function of child class---"<<"\n";
    c.disp();
    cout<<"---Printing disp function of Father class---"<<"\n";
    c.Father::disp();
    cout<<"---Printing disp function of Grandfather class---"<<"\n";
    c.Grandfather::disp();
    
    return 0;
}

/*
Sample Output: 
---Printing disp function of child class---
This is Child class
---Printing disp function of Father class---
This is Father class
---Printing disp function of Grandfather class---
This is Grandfather class
*/






