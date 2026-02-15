# 🧮 Body Mass Calculator 💚

A simple console-based Body Mass Index (BMI) calculator written in C.

This project calculates BMI based on user input and classifies the result into standard health categories. It also includes automatic height normalization (cm → meters) and formatted output precision.


 ## 🚀 Features

-User input for weight (kg) and height <br>
-Automatic height conversion (centimeters to meters if needed) <br>
-Float-based precise BMI calculation <br>
-Console color customization <br>
-Formatted BMI output (2 decimal precision) <br>
🌿Green themed console <br>
 ### Classification into: <br>
-Underweight <br>
-Normal <br>
-Overweight <br>
-Obese  

## 🧠 How It Works

The BMI is calculated using the standard formula: <br>
➡️ **BMI = weight / (height × height)**  <br>
If the entered height is greater than 3.0, the program assumes the value is in centimeters and converts it to meters before performing the calculation.

# 🎨 Console Customization

The program uses: system("color 2F");  <br>
2 → Background color: Green <br>
F → Text color: White

# 📊 BMI Classification Logic

| **BMI Range** | **Category** |
|:-------------:|:------------:|
| BMI < 18      | Underweight  |
| 18 ≤ BMI < 25 | Normal       |
| 25 ≤ BMI < 30 | Overweight   |
| BMI ≥ 30      | Obese        |




