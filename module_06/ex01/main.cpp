#include <cstdint>
#include <iostream>

struct Data {
int x;
double y;
char z;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data data;
	data.x = 1;
	data.y = 3.14;
	data.z = 'a';
	uintptr_t serialized = serialize(&data);
	// std::cout << "x: " << data.x << std::endl;
	// std::cout << "y: " << data.y << std::endl;
	// std::cout << "z: " << data.z << std::endl;

	Data* deserialized = deserialize(serialized);
	// std::cout << "x: " << deserialized->x << std::endl;
	// std::cout << "y: " << deserialized->y << std::endl;
	// std::cout << "z: " << deserialized->z << std::endl;
	std::cout << deserialized << " | " << &data << std::endl;
	if (deserialized == &data)
		std::cout << "The original pointer and the deserialized pointer are equal." << std::endl;
	else
		std::cout << "The original pointer and the deserialized pointer are not equal." << std::endl;

	return 0;
}
