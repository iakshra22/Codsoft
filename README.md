# CodSoft Internship Tasks 

# 1. 🎯 Number Guessing Game (C++)

Welcome to the **Number Guessing Game** – a simple, fun, and interactive console-based game built using C++

---

## 📌 About the Game

This game picks a random number between **1 and 100**, and your task is to guess it right! 
After each guess, you'll get helpful hints like:  

- **Too High**  → Try a smaller number   
- **Too Low** → Try a bigger number 

The game tracks how many attempts you take to guess correctly and encourages you to play again!

---

## 🎮 Features

- Random number generation between 1 and 100
- Input validation (so the game never crashes on wrong input)
- Feedback after each guess
- Option to play again after winning
- Simple and user-friendly console interaction

---

## 🛠️ Technologies Used

- **Language:** C++
- **Libraries:**  
  - `iostream` for input/output  
  - `cstdlib` & `ctime` for random number generation  
  - `limits` & `cctype` for input validation and control

---

## 🧑‍💻 **How to Run**

1. **Clone the repo** or copy the code to your local system.  
2. **Compile the program** using any C++ compiler like `g++`:

   ```bash
   g++ numberguess.cpp -o numberguess

##   Run the program:
./numberguess

## 📌 Note
This is a console-based game, so no GUI will appear. It's meant for terminal/command-line execution only.

## Feel free to fork, enhance, or contribute!


/*
# 2. 🧮 Advanced Calculator in C++

## 📌 About
This is a **menu-driven advanced calculator** program written in C++.  
It performs **basic arithmetic operations** as well as **scientific calculations** like power, square root, factorial, logarithm, and trigonometric functions.  
The program allows the user to **run multiple calculations** in one execution and includes error handling for invalid inputs.

---

## ✨ Features
- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication 
- ➗ Division (with zero check)
- 🟰 Modulus (integer only)
- 🔼 Power calculation
- √ Square Root
- ! Factorial
- 📊 Logarithm (base 10)
- 📐 Trigonometric functions:
  - Sine
  - Cosine
  - Tangent
- Menu-based interface with **Y/N** option to continue
- Friendly messages like **"Welcome", "Thank you"**

---
 
## 🛠 Technologies Used
- **Language:** C++
- **Compiler:** g++ (GNU Compiler Collection)
- **Libraries:**
  - <iostream> – for input/output
  - <cmath> – for mathematical functions
  - User-defined factorial function

---

## 🚀 How to Run
1. **Clone or download** the program to your system.
2. Open a terminal or command prompt.
3. Navigate to the folder containing the `.cpp` file.
4. Compile the program using:
   ```bash
   g++ calculator.cpp -o calculator
##  Run the program:
./calculator

## When you run the program: 

1. A welcome message is displayed.
2. Operators are shown in two columns.
3. Enter your choice of operation.
4. Provide the required number(s).
5. The result is displayed in the format:
 Your '+' operation result is: 15
6. You will be asked:
 Do you want to use the calculator again? (Y/N)
7. If you choose Y, the menu will appear again.
8. If you choose N, the program exits with a goodbye message.

## 📝 Note
1. For modulus (%), enter integer values only.
2. Division by zero and modulus by zero are not allowed.
3. Square root of a negative number is not valid.
4. Factorial is only available for non-negative integers.
5. Trigonometric inputs should be entered in degrees.

## Feel free to fork, enhance, or contribute!

# 3.📝 To-Do List Manager 

## 📖 About  
A simple console-based To-Do List Manager built in C++ that allows users to add tasks, view them, mark tasks as completed, and remove tasks. It helps in organizing daily tasks efficiently via a terminal-based interface.

## ✨ Features  
- ➕ Add new tasks with custom descriptions  
- 👀 View all tasks with status (Completed / Pending)  
- ✅ Mark tasks as completed  
- ❌ Remove tasks from the list
- 🔁 Menu-driven interface for easy interaction  
- 📋 Uses vector, struct, and C++ standard libraries
-
- ## 🛠 Technologies Used  
- Language: C++  
- IDE/Compiler: Dev C++ / g++ / any C++ compiler  
- Concepts: Vectors, Structs, Functions, Loops, Conditionals   

## ⚙️ How to Run  

💻 On Local Machine:

1. Clone the repository:  
   git clone https://github.com/iakshra22/Codsoft-task-2/blob/main/todolist.cpp  

2. Navigate into the folder:  
   cd CodSoft-Task2-ToDoList  

3. Compile the C++ file:  
   g++ todo.cpp -o todo  

4. Run the program:  
   ./todo  
   (on Windows, run: todo.exe)

## 🎮 Sample Run  
==== HELLO THERE! THIS IS TO-DO LIST MANAGER ====  
1. Add Task  
2. View Tasks  
3. Mark Task as Completed  
4. Remove Task  
5. Exit  
Enter your choice:

## 🚀 Future Enhancements  
- Add file-saving/loading feature so tasks persist after program exits  
- Add task deadlines and priority levels  
- Create a GUI version using Qt or SFML  

## 📝 Note  
- This is a basic version intended for beginners learning C++.  
- The task list is not persistent — it will reset each time the program restarts.

## Feel free to fork, enhance, or contribute! 

