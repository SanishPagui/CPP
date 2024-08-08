#include <iostream>
using namespace std;
class Vector {
private:
    int* data;   // Pointer to dynamically allocated array for vector elements
    int size;    // Number of elements in the vector

public:
    // Constructor
    Vector(int n){
        data = new int[size];
    }
    // Function to set the value of an element at a specific index
    void set(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        }
    }

    // Function to get the value of an element at a specific index
    int get(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        }
        return 0;
    }

    // Function to multiply each element by a scalar value
    void multiplyByScalar(int scalar) {
        for (int i = 0; i < size; ++i) {
            data[i] *= scalar;
        

    // Function to add two vectors and return a new vector with the result
    Vector add(const Vector& other) const {
        if (size!=other.size) {
            cerr<<"Vectors must be of the same size to add." << endl;
            return Vector(0); // Return an empty vector in case of size mismatch
        }
        Vector result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Function to print the vector
    void print() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    int n, scalar;
    cout<<"Enter the number of elements in the vector: ";
    cin >> n;

    // Create a vector of size n
    Vector v1(n);
    Vector v2(n);

    // Input elements for the first vector
    cout << "Enter " << n << " elements for the first vector: ";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        v1.set(i, value);
    }

    // Input elements for the second vector
    cout << "Enter " << n << " elements for the second vector: ";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        v2.set(i, value);
    }

    // Input scalar value
    cout << "Enter a scalar value to multiply with the first vector: ";
    cin >> scalar;

    // Multiply the first vector by the scalar
    v1.multiplyByScalar(scalar);

    // Add the two vectors
    Vector v3 = v1.add(v2);

    // Print the results
    cout << "First vector after multiplying by scalar: ";
    v1.print();

    cout << "Second vector: ";
    v2.print();

    cout << "Resultant vector after addition: ";
    v3.print();

    return 0;
}
