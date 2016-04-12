#include "./double_template.hpp"

template <typename T>
merged_template<T>::merged_template() {
}

template <typename T>
merged_template<T>::~merged_template() {
}

template<typename T>
bool merged_template<T>::is_non_negative(T a_num) {
	return (0 <= a_num);
}

template<typename T>
T merged_template<T>::square_given_number(T a_num) {
	return (a_num*a_num);
}

