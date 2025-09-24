# 🏷 Experiment 13: Constructor, Function, and Operator Overloading in C++

---

## 🎯 Aim
To study and implement **Constructor, Function, and Operator Overloading** in C++ to demonstrate:
- Multiple constructors with different parameter lists.
- Functions with the same name but different signatures.
- Custom behavior for operators for user-defined classes.

---

## 🛠 Tools Used
- VS Code / Any C++ IDE
- C++ Compiler (GCC, MinGW, etc.)

---

## 📘 Theory

### 1️⃣ Function Overloading
- **Definition:** Multiple functions with the **same name** in the same scope or class but with **different parameter lists**.
- **Compile-time Polymorphism:** Compiler decides which function to call based on arguments.
- **Benefits:**
  - Improves code readability
  - Avoids multiple function names for similar tasks
  - Easier maintenance and extension

**Syntax Concepts:**
- Functions must have the same name but differ in:
  1. Number of parameters
  2. Type of parameters
  3. Order of parameters

**Types of Function Overloading:**
1. By **Number of Parameters**  
2. By **Type of Parameters**  
3. By **Order of Parameters**  

---

### 2️⃣ Operator Overloading
- **Definition:** Customize behavior of operators (`+`, `-`, `*`, `/`, `<<`, `>>`, etc.) for **user-defined types**.
- **Compile-time Polymorphism**
- **Benefits:**
  - Intuitive code
  - Simplifies object manipulation
  - Avoids verbose function calls

**Types:**
1. **Unary Operators:** Operate on a single operand (`++`, `--`, `!`, `-`)  
2. **Binary Operators:** Operate on two operands (`+`, `-`, `*`, `/`, `%`)  
3. **Stream Operators:** Input/output for objects (`<<`, `>>`)  

---

### 3️⃣ Constructor Overloading
- **Definition:** Multiple constructors with different parameter lists in the same class.
- **Purpose:** Allows creating objects in **different ways** depending on the input.
- **Benefits:**
  - Flexibility in object creation
  - Cleaner and more versatile code
  - Supports **polymorphism at object initialization**

**Types of Constructors:**
- **Default Constructor:** Initializes members to default values  
- **Parameterized Constructor:** Initializes members with user-provided values  
- **Copy Constructor:** Initializes object as a copy of another object  

**Key Note:**  
Copy constructors can be part of overloaded constructors but are treated separately due to their special role in object copying.

---

## 🔢 Algorithms

### Program 1: Constructor Overloading
1. Start  
2. Define a class `fetch` with data members `a` and `b`.  
3. Create three constructors:  
   - Default → `a=0, b=0`  
   - 1-parameter → `a=value, b=0`  
   - 2-parameter → `a=value1, b=value2`  
4. Define `disp()` to display values of `a` and `b`.  
5. In `main()`, create objects using all constructors.  
6. Call `disp()` to display results.  
7. End  

---

### Program 2: Constructor Overloading with Default, Parameterized, and Copy
1. Start  
2. Define class `fetch` with data members `a` and `b`.  
3. Create constructors:  
   - Default → `a=3, b=4`  
   - Parameterized → `a=m, b=n`  
   - Copy → `a=obj.a, b=obj.b`  
4. Define `disp()` to print values.  
5. In `main()`, create objects using all constructors (`f1, f2, f3, f4`).  
6. Call `disp()` for all objects.  
7. End  

---

### Program 3: Function Overloading
1. Start  
2. Define two functions `purchase`:  
   - `purchase(productName, quantity)` → CART view  
   - `purchase(productName, unit_price, quantity)` → CHECKOUT view  
3. Input product details from user  
4. Call both `purchase()` functions  
5. Call hardcoded purchases  
6. End  

---

### Program 4: Operator Overloading
1. Start  
2. Define class `Purchase` with attributes: `productName, unit_price, quantity`  
3. Implement:  
   - Constructor → initializes attributes  
   - `totalPrice()` → returns `unit_price * quantity`  
   - Overload `+` → sum of total prices  
   - Overload `<<` → display object  
4. In `main()`:  
   - Create objects `p1` and `p2`  
   - Display both using `<<`  
   - Compute `p1 + p2`  
   - Display combined total  
5. End  

---

## 🔄 Flowcharts

### Program 1 & 2: Constructor Overloading
Start → Define class → Define constructors → Define disp() → main() → Create objects → Call disp() → End
### Program 3: Function Overloading
Start → Define two purchase() functions → Input product details → Call purchase() functions → Call hardcoded purchases → End
### Program 4: Operator Overloading
Start → Define class → Constructor → totalPrice() → operator+ → operator<< → main() → Create objects → Display objects → Calculate combined → Display → End
---

## 💡 Real-Life Applications

**Constructor Overloading**
- Banking: Default vs parameterized account creation  
- Geometry: Shapes with default vs custom dimensions  
- File handling: Default vs named file constructors  
- Games: Player placement at origin vs custom coordinates  

**Function Overloading**
- Mathematical operations (sum, multiply for int/float/double)  
- Display functions in GUI/cart applications  
- Library functions (`cout`, `cin`) internally use function overloading  

**Operator Overloading**
- Math objects: Vectors, Matrices, Complex numbers  
- Finance: Money, Invoice calculations  
- Game dev: Point/vector manipulation  
- Stream operations: Custom input/output of objects  

---

## 📊 Differences Between Function, Constructor, and Operator Overloading

| Feature               | Function Overloading                  | Constructor Overloading            | Operator Overloading                |
|-----------------------|-------------------------------------|-----------------------------------|-----------------------------------|
| Scope / Location      | Global or inside class               | Inside class                       | Inside class                       |
| What is Overloaded    | Normal functions                     | Constructors                       | Operators (+, -, *, <<, >>)       |
| Purpose               | Similar operations for different args| Initialize objects differently     | Custom behavior for operators     |
| Return Type           | Can vary                             | N/A                                | Depends on operator                |
| Compile-time Polymorphism | Yes                               | Yes                                | Yes                                |

---

## 🔑 Key Concepts Covered
- Constructor, function, and operator overloading  
- Default, parameterized, and copy constructors  
- Compile-time polymorphism  
- Friend functions for stream operator overloading  
- Practical usage scenarios  

---

## 🎓 Learning Outcomes
- Understand and implement **constructor overloading**  
- Understand and implement **function overloading**  
- Understand and implement **operator overloading**  
- Improve **code readability** and **flexibility**  
- Apply overloading concepts in **real-world C++ scenarios**  

---
