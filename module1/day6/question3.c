#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

// Function to read a complex number
void readComplex(struct Complex *c) {
    printf("Enter real part: ");
    scanf("%f", &(c->real));
    printf("Enter imaginary part: ");
    scanf("%f", &(c->imaginary));
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
