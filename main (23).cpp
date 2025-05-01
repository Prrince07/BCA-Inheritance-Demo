#include <iostream>
using namespace std;

class Boy {
public:
    void student() {
        cout << "I am student of BCA ." << endl;
    }
};
class university: public Boy {
public:
    void name() {
        cout << "from Galgotias university." << endl;
    }
};

int main() {
    university d;
    d.student();   
    d.name();  

    return 0;
}
