
// Foo.tpp
template <typename T>
void Foo<T>::doSomething(T param)
{
    //implementation
	cout << "=	Testing the templates:::" << param << "===" << endl;
}

template <class T>
Foo<T>::Foo() {}