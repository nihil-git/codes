#include<stdio.h>
#include<math.h>

int main() {
    int choice;
    float length, width, side, radius, base, height;

    printf("Choose a shape to calculate area and perimeter:\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    printf("4. Triangle\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Rectangle
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Area of rectangle: %.2f\n", length * width);
            printf("Perimeter of rectangle: %.2f\n", 2 * (length + width));
            break;
        case 2: // Square
            printf("Enter side of the square: ");
            scanf("%f", &side);
            printf("Area of square: %.2f\n", side * side);
            printf("Perimeter of square: %.2f\n", 4 * side);
            break;
        case 3: // Circle
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of circle: %.2f\n", M_PI * radius * radius);
            printf("Perimeter (circumference) of circle: %.2f\n", 2 * M_PI * radius);
            break;
        case 4: // Triangle
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of triangle: %.2f\n", 0.5 * base * height);
            // Assuming it's an equilateral triangle for perimeter calculation
            float side_length = sqrt((base/2)*(base/2) + height*height); // Pythagorean theorem
            printf("Perimeter of triangle (assuming equilateral): %.2f\n", 3 * side_length);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

