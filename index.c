#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayMenu(void);
int getValidChoice(void);
float getTemperature(void);
float celsiusToFahrenheit(float celsius);
float celsiusToKelvin(float celsius);
float fahrenheitToCelsius(float fahrenheit);
float fahrenheitToKelvin(float fahrenheit);
float kelvinToCelsius(float kelvin);
float kelvinToFahrenheit(float kelvin);
int validateTemperature(float temp, int scale);

// Temperature scale constants for validation
#define CELSIUS_MIN -273.15
#define FAHRENHEIT_MIN -459.67
#define KELVIN_MIN 0.0

int main() {
    int choice;
    float temperature, result;
    char continueChoice;
    
    printf("========================================\n");
    printf("    Welcome to Temperature Converter    \n");
    printf("========================================\n\n");
    
    do {
        displayMenu();
        choice = getValidChoice();
        
        switch (choice) {
            case 1: // Celsius to Fahrenheit
                printf("Enter temperature in Celsius: ");
                temperature = getTemperature();
                if (validateTemperature(temperature, 1)) {
                    result = celsiusToFahrenheit(temperature);
                    printf("%.2f°C = %.2f°F\n", temperature, result);
                } else {
                    printf("Invalid temperature entered.\n");
                }
                break;
                
            case 2: // Celsius to Kelvin
                printf("Enter temperature in Celsius: ");
                temperature = getTemperature();
                if (validateTemperature(temperature, 1)) {
                    result = celsiusToKelvin(temperature);
                    printf("%.2f°C = %.2fK\n", temperature, result);
                } else {
                    printf("Invalid temperature entered.\n");
                }
                break;
                
            case 3: // Fahrenheit to Celsius
                printf("Enter temperature in Fahrenheit: ");
                temperature = getTemperature();
                if (validateTemperature(temperature, 2)) {
                    result = fahrenheitToCelsius(temperature);
                    printf("%.2f°F = %.2f°C\n", temperature, result);
                } else {
                    printf("Invalid temperature entered.\n");
                }
                break;
                
            case 4: // Fahrenheit to Kelvin
                printf("Enter temperature in Fahrenheit: ");
                temperature = getTemperature();
                if (validateTemperature(temperature, 2)) {
                    result = fahrenheitToKelvin(temperature);
                    printf("%.2f°F = %.2fK\n", temperature, result);
                } else {
                    printf("Invalid temperature entered.\n");
                }
                break;
                
            case 5: // Kelvin to Celsius
                printf("Enter temperature in Kelvin: ");
                temperature = getTemperature();
                if (validateTemperature(temperature, 3)) {
                    result = kelvinToCelsius(temperature);
                    printf("%.2fK = %.2f°C\n", temperature, result);
                } else {
                    printf("Invalid temperature entered.\n");
                }
                break;
                
            case 6: // Kelvin to Fahrenheit
                printf("Enter temperature in Kelvin: ");
                temperature = getTemperature();
                if (validateTemperature(temperature, 3)) {
                    result = kelvinToFahrenheit(temperature);
                    printf("%.2fK = %.2f°F\n", temperature, result);
                } else {
                    printf("Invalid temperature entered.\n");
                }
                break;
                
            case 7: // Exit
                printf("Thank you for using Temperature Converter!\n");
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        
        if (choice >= 1 && choice <= 6) {
            printf("\nDo you want to perform another conversion? (y/n): ");
            scanf(" %c", &continueChoice);
            printf("\n");
        }
        
    } while (choice != 7 && (continueChoice == 'y' || continueChoice == 'Y'));
    
    printf("Goodbye!\n");
    return 0;
}

void displayMenu(void) {
    printf("=== Temperature Converter ===\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("7. Exit\n");
    printf("=============================\n");
}

int getValidChoice(void) {
    int choice;
    
    printf("Enter your choice (1-7): ");
    
    while (scanf("%d", &choice) != 1 || choice < 1 || choice > 7) {
        printf("Error: Please enter a valid choice (1-7): ");
        
        // Clear input buffer
        while (getchar() != '\n');
    }
    
    return choice;
}

float getTemperature(void) {
    float temperature;
    
    while (scanf("%f", &temperature) != 1) {
        printf("Error: Please enter a valid number: ");
        
        // Clear input buffer
        while (getchar() != '\n');
    }
    
    return temperature;
}

int validateTemperature(float temp, int scale) {
    switch (scale) {
        case 1: // Celsius
            if (temp < CELSIUS_MIN) {
                printf("Error: Temperature cannot be below %.2f°C (absolute zero).\n", CELSIUS_MIN);
                return 0;
            }
            break;
            
        case 2: // Fahrenheit
            if (temp < FAHRENHEIT_MIN) {
                printf("Error: Temperature cannot be below %.2f°F (absolute zero).\n", FAHRENHEIT_MIN);
                return 0;
            }
            break;
            
        case 3: // Kelvin
            if (temp < KELVIN_MIN) {
                printf("Error: Temperature cannot be below %.2fK (absolute zero).\n", KELVIN_MIN);
                return 0;
            }
            break;
    }
    return 1;
}

// Conversion functions
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}