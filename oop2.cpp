#include<bits/stdc++.h>
using namespace std;

class Box {
 double width;
public:
 friend void printWidth( Box box );
 void setWidth( double wid )
 {
     width = wid;
     }
};
void printWidth( Box box ) {
 /* Because printWidth() is a
friend of Box, it can
 directly access any member
of this class */
 cout << "Width of box : " <<
box.width <<endl;


};

int main( ) {
 Box box;

 box.setWidth(10.0);

 printWidth( box );
 return 0;
}

