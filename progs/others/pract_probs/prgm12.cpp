#include<iostream>

using namespace std;

template<typename T>
void foo(const T& x) {

    static int i = 10;
    cout<<++i<<endl;
}

int main() {

    foo<int>(12);
    foo<int>(4);
    foo<double>(3.14);
    foo<double>(1.723);
    foo<char>('c');
    return 0;

}
