#pragma once

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
public:
	// Construct an empty array
	Array() : m_size(0), m_data(nullptr) {}

	// Construct an array with n elements initialized by default
	Array(unsigned int n) : m_size(n), m_data(new T[m_size]) {}

	// Copy constructor
	Array(const Array& other) : m_size(other.m_size), m_data(new T[m_size]) {
		for (size_t i = 0; i < m_size; i++) {
			m_data[i] = other.m_data[i];
		}
	}

	// Assignment operator
	Array& operator=(const Array& other) {
		// Check for self-assignment
		if (this == &other) return *this;

		// Free the existing memory
		delete[] m_data;

		// Allocate new memory and copy the data
		m_size = other.m_size;
		m_data = new T[m_size];
		for (size_t i = 0; i < m_size; i++) {
			m_data[i] = other.m_data[i];
		}

		return *this;
	}

	// Destructor
	~Array() {
		delete[] m_data;
	}

	// Subscript operator
	T& operator[](unsigned int index) {
		if (index >= m_size) {
			throw std::out_of_range("Index out of bounds");
		}
		return m_data[index];
	}

	// Const version of subscript operator
	const T& operator[](unsigned int index) const {
		if (index >= m_size) {
			throw std::out_of_range("Index out of bounds");
		}
		return m_data[index];
	}

	// Get the size of the array
	size_t size() const {
		return m_size;
	}

private:
	size_t m_size; // Number of elements in the array
	T* m_data; // Pointer to the data
};
