#pragma once
template<class T1, class T2>
class Iterator
{
public:
	T1* keys;
	T2* values;
	int index;
	Iterator& operator++() {
		keys++;
		values++;
		index++;
		return *this;
	}
	bool operator!=(Iterator& it) {
		return (keys != it.keys && values != it.values && index != it.index);
	}
	auto operator*() {
			return std::make_tuple(*keys, *values, index);
	}
};

template <class T1, class T2>
class Map
{
	T1* keys;
	T2* values;
	int index;
public:

	T2& operator[](T1 key) {
		keys[index] = key;
		return values[index++];
	}

	Map() {
		keys = new T1[100];
		values = new T2[100];
		index = 0;
	}
	~Map() {
		delete keys;
		delete values;
	}
	
	Iterator<T1, T2> begin() {
		/*Iterator<T1, T2> it;
		it.keys = &keys[0];
		it.values = &values[0];
		it.index = 0;*/
		return { &keys[0], &values[0], 0 };
		//return it;
	}
	Iterator<T1, T2> end() {
		/*Iterator<T1, T2> it;
		it.keys = &keys[index];
		it.values = &values[index];
		it.index = index;*/
		return { &keys[index], &values[index], index };
		//return it;
	}
};

