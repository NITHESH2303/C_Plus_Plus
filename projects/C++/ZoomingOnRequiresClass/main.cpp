#include <iostream>
using namespace std;

template<typename T>
concept TinyType = requires(T t){
    sizeof(T)<4;
};

TinyType auto add(TinyType auto a, TinyType auto b) {
    return a + b;
}

int main(int argc, char** argv){
    char x{54};
    char y{55};
    add(x, y);
    return 0;
}