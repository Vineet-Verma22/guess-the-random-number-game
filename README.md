# Guess the Random Number Game

## Description
This repository contains my C programming project called **Guess the Random Number**. In this game, the user tries to guess a randomly generated number between 0 and 999. The program will guide the user by indicating if the guessed number is higher or lower than the randomly generated number, until the correct number is guessed. The number of attempts is also counted and displayed at the end of the game.

## Features
- Generates a random number between 0 and 999.
- Gives feedback if the guessed number is too high or too low.
- Displays the total number of attempts to guess the correct number.
- Simple and interactive command-line interface.

## How to Run the Program

To run this program on your local machine, follow these steps:

1. **Clone the repository** to your local machine:
   ```bash
   git clone https://github.com/yourusername/guess-the-random-number-game.git
   
2. Navigate to the project directory:
   ```bash
   cd guess-the-random-number-game

3. Compile the C program using a C compiler like GCC:
   ```bash
   gcc -o guess_the_random_number guess_the_random_number.c

4. Run the compiled program:
   ```bash
   ./guess_the_random_number

5. Gameplay:
   The program will ask you to input a guess. Based on your input, it will tell you whether the random number is higher or lower, until you guess it correctly. It will also display the number of attempts at the end.

## Code Explanation
The main logic behind this program is fairly simple:

1. Random Number Generation: The program uses the rand() function seeded with the current time (srand(time(0))) to generate     a random number between 0 and 999.
2. User Input: The user guesses a number and the program provides feedback based on whether the guess is higher or lower        than the random number.
3. Loop: The program keeps looping until the user guesses the correct number.
4. Counting Attempts: Each wrong guess increments the number of attempts.

## Technologies Used
1. C Programming Language: The game is entirely coded in C.
2. GCC Compiler: Used to compile the C program.
3. Random Number Generation: rand() function is used for generating random numbers.

## Future Enhancements
Here are a few ideas for future improvements:

1. Difficulty Levels: Add difficulty levels where the range of random numbers could vary (e.g., easy: 0-50, medium: 0-500, hard: 0-999).
2. Hint System: Provide more detailed hints to the user (e.g., "You're very close!" or "You're far off!").
3. Multiplayer Mode: Allow two players to take turns guessing.
4. Graphical Interface: Implement a simple GUI for a more user-friendly experience.

## Author
Vineet Verma

* Hi! I'm currently pursuing my Bachelors of Technology in Artificial Intelligence & Machine Learning (AIML), i'm passionate   about coding and learning new programming languages.
* GitHub: Vineet-Verma22
* Feel free to contribute or suggest enhancements!

---

### Additional Steps Explained:

- **Open your terminal**: For beginners, this is to make sure they understand how to work with the terminal.
- **Install GCC**: If the user doesn't have a C compiler, provide instructions on installing GCC on various platforms.
- **Exit the game**: For clarity, mention that the program exits automatically after the user wins.

---

### Explanation of the Sections:

1. **Project Title**: The name of your project.

2. **Description**: A short summary of what your project is and what it does. You can briefly explain the goal of the program and how it works.

3. **Features**: Highlight key features of your project, like random number generation, user feedback, etc.

4. **How to Run the Program**: A step-by-step guide on how someone else can run your program, from cloning the repo to compiling and running the code.

5. **Technologies Used**: Mention the programming languages, tools, and libraries used in your project.

6. **Future Enhancements**: Suggest possible improvements or features that can be added in future updates.

7. **Author Information**: Include your name, a short bio, and a link to your GitHub profile or other social media.

---
