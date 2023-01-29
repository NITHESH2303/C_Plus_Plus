#include <iostream>
#include <cstring>
using namespace std;

template <typename T> T maximum( T a, T b){
    return a > b ? a : b;
}

template <>
const char * maximum <const char*>( const char *a, const char *b){
    return (std::strcmp(a,b)>0)?a:b;
}


int main(){
    int a{2};
    int b{42};
    double c{1.5};
    double d{23.5};
    string e{"hello"};
    string f{"World!"};

    auto maxi= maximum(a,b);
    auto maxd = maximum(c,d);
    auto maxs = maximum(f,e);

    cout << "maxi: "<<maxi <<endl<<"maxd: "<< maxd <<endl <<"maxs: "<<  maxs << endl;

    const char *g{"test"};
    const char *h{"Windows"};
    const char *result = maximum(g,h);
    cout <<"maxc: "<< result <<endl;
}