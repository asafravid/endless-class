#include <iostream>
#include <unistd.h>

class endless {
public:
    endless(int id) { id_   = id;                 printf("C%d|", id_);                            };
   ~endless()       { next_ = new endless(id_+1); printf("D%d|", id_); usleep(100); delete next_; };
private:
    endless* next_;
    int      id_;
};

int main() {
    endless e1(0);

    return 0;
}
