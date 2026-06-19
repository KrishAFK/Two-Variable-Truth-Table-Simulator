# Boolean Logic Truth Table Generator

A C++ command-line application that evaluates basic Boolean operations and prints their corresponding truth tables.

## 🚀 Features

* **Interactive CLI**: Prompt-driven interface to enter operations dynamically.
* **Truth Table Generation**: Supports multiple logical operations and cleanly prints out their binary truth tables.
* **Supported Operators**:
* `NOT` (Unary)
* `AND` / `NAND` (Binary)
* `OR` / `NOR` (Binary)
* `XOR` (Binary)
* `NAND` (Binary)
* `NOR` (Binary)


## 🛠️ Project Structure

The project is modularized into the following files:

* **`main.cpp`**: The entry point of the program that instantiates the `Boolean` object and kicks off evaluation.
* **`Boolean.h`**: The class header definition declaring the `Boolean` class constructor and member functions.
* **`Boolean.cpp`**: The implementation file containing the logic for checking string inputs and printing truth tables.

---

## 💻 How to Compile and Run

You can compile this project using any standard C++ compiler (like `g++`).

### 1. Compilation

Open your terminal or command prompt in the project directory and run:

```bash
g++ main.cpp Boolean.cpp -o BooleanEvaluator

```

### 2. Running the Application

After a successful compilation, execute the generated binary:

* **On Linux/macOS:**
```bash
./BooleanEvaluator

```


* **On Windows:**
```cmd
BooleanEvaluator.exe

```



---

## 📖 Usage & Examples

When you run the program, it will prompt you to **"Enter operation :"**. Simply type the logical gate you wish to evaluate (e.g., `A AND B`, `NOT A`, `XOR`).

### Example Output (`A AND B`):
```text
Enter operation : A AND B
The string is : A
The string is : B
The string is : AND 
| A | B | A AND B |
| 0 | 0 |    0    |
| 0 | 1 |    0    |
| 1 | 0 |    0    |
| 1 | 1 |    1    |

```

> **Note:** The program relies on substring matching (`s.find()`), so ensure your input contains the exact uppercase operator name (like `NOT`, `NAND`, `AND`, `NOR`, `XOR`, or `OR`) for it to trigger the correct truth table.


