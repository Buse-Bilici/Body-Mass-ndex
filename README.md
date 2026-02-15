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

## 🎨 Console Customization

The program uses: system("color 2F");  <br>
2 → Background color: Green <br>
F → Text color: White

## 📊 BMI Classification Logic

| **BMI Range** | **Category** |
|:-------------:|:------------:|
| BMI < 18      | Underweight  |
| 18 ≤ BMI < 25 | Normal       |
| 25 ≤ BMI < 30 | Overweight   |
| BMI ≥ 30      | Obese        |

## 🎯 Purpose

#### This project was built to practice:

Function design

Input normalization

Conditional logic

Clean code structure

Basic console UI customization

## 📸 Example Output (88 kg, 136 cm)

136 cm is converted to meters during the calculation and calculated as 1.36 meters. <br>
The program calculates a BMI of 47.58 and classifies it as Obese. <br>

<img width="584" height="266" alt="image" src="https://github.com/user-attachments/assets/983f85fc-47df-4cbe-a113-c5d66e7375be" />


## 📸 Example Output (52 kg, 1.64 cm)

<img width="606" height="263" alt="image" src="https://github.com/user-attachments/assets/5935ca2f-7dff-4a25-9375-f578ed98aec0" />



