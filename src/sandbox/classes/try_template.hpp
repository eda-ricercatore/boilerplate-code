template<typename T>
class Foo
{
    T bar;
    static void doSomething(T param) {/* do stuff using T */}
};

// somewhere in a .cpp
Foo<int> f;

// Do I need to create a C++ implementation file for this header file? Yes.