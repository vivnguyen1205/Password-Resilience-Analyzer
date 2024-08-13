# Password Resilience Analyzer

## Overview
In the ever-evolving realm of cybersecurity, strong passwords are essential for protecting sensitive information from unauthorized access and security breaches. This tool plays a crucial role in helping individuals and organizations assess the resilience of their passwords against potential brute-force and sophisticated attacks. By simulating possible attack strategies on a chosen password, the analyzer provides insights into potential vulnerabilities, encouraging users to create stronger, more secure passwords.

## Objective
The objective of this project is to design and develop a C program named "Password Resilience Analyzer". The program evaluates the strength of a password based on a set of predefined criteria, ensuring that users understand the importance of robust passwords in safeguarding their digital presence.

## Background
In today's digital age, a strong password is not just a simple barrier to entry; it is a critical defense mechanism that protects sensitive data and ensures digital security. The strength of a password is determined by various factors, including length, the use of diverse character sets, avoidance of predictable patterns, and more. As cyber threats continue to grow in complexity, understanding what makes a password strong is crucial. The Password Resilience Analyzer delves into these factors, helping users develop and appreciate the nuances of creating secure passwords.

## Project Features & Details

### 1. Main Menu 
- **User Interface:** A user-friendly main menu that allows easy navigation through the program.
- **Options Provided:**
  - **Test a New Password:** Allows the user to input a password for strength analysis.
  - **View Strength of Last Tested Password:** Displays the strength rating (Weak, Moderate, Strong) of the last tested password.
  - **Exit:** Closes the program.

### 2. Password Input 
- **Prompt for Password:** The user is prompted to input a password, which is stored for analysis.
  - Prompts the user to enter a password: 
  - Stores the entered password using an array (string in C)
  - Ensures the password is at least 8 characters long. If not, program displays an error message and prompts the user to enter a longer password

### 3. Strength Tests 
- **Password Evaluation:** The strength of a password is determined based on multiple criteria. Each criterion met adds a point to the password's strength score.
  - Checks for lowercase letters
  - Checks for uppercase letters
  - Checks for numerical digits
  - Checks for special characters (e.g., `!@#$%^&*()`)
  - Awards a point for passwords that are 12 or more characters long


### 5. Password Strength Score 
- **Score Calculation:** The total strength of a password is computed as a score from 0 (weakest) to 5 (strongest).

### 6. Output 
- **Password Strength Display:** Based on the computed score, the password is categorized into:
  - 0-2 points: "Weak"
  - 3-4 points: "Moderate"
  - 5 points: "Strong"
- The appropriate strength category is displayed to the user after analysis.

