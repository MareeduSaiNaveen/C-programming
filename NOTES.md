# C PROGRAMMING

C is the most widely used language in embedded systems development

**1. Close to Hardware (Low-Level processess)**
    C allows **direct manipulation of memory and hardware** , using pointers and bit-level
    operations.
    Example: Accessing registers, ports, or memory-mapped I/O is easy and efficient.
**2. Efficient and Fast Execution**
    C programs are **compiled into very efficient machine code** , which is crucial for resource-
    constrained embedded systems (limited CPU, RAM, ROM).
**3. Portability and Scalability**
    You can write code in C and **reuse or adapt it across different microcontrollers** or
    processors with minimal changes.
**4. Rich Set of Operators and Libraries**
    C provides a wide set of **operators** , **control structures** , and **standard libraries** that are ideal
    for structured and modular programming in embedded applications.
**5. Deterministic Behavior**
    Embedded systems often require **predictable timing** and behavior. C allows fine control over
    execution without unexpected delays like in interpreted languages.
**6. Wide Industry Support and Ecosystem**
    C is supported by almost **every embedded development toolchain** , including compilers,
    debuggers, and RTOS platforms.
**7. Small Memory Footprint**
    Compared to higher-level languages, C programs can run in **very limited memory** , which is a
    major advantage in embedded devices.
**8. Supports Interrupt Handling and Real-Time Applications**
    C enables writing **Interrupt Service Routines (ISRs)** and handling **real-time constraints** ,
    which are critical in embedded control systems.

## There are three stages of implementation of c programming

```
1) Writing the Code
```
- The programmer writes source code using a text editor (vi and vim etc).
- The file is saved with a .c extension.
- The source code contains logic written using **C syntax**.

```
2) Compilation
```
- The .c file is given to the **compiler** (like GCC).
- The compiler checks for **syntax errors**.
- **Stagers of compilation**
    1. Preprocessing stage
       - In this stage removes comments lines.
    2. Compilation stage


3. Assembly stage
4. Linking stage
- If successful, it translates the code into **assembly** , then into **machine code** , producing an
**object file** (.o or .obj).
- Then, the **linker** combines the object file with necessary libraries (like stdio.h) to produce
an **executable file** (a.exe on Windows or a.out on Linux).
**3) Execution**
- When the executable file is run:
- The OS loads the program into **RAM** from Hard disk.
- Execution starts from **main() function(entry point)**.
o There are only one entry point of user space
o There is multiple enter points in kernel
- CPU executed Instructions **line by line**.
o Fetching
o Decoding
o Execute
- The above three steps are called as **instruction pipeline**
- Output is shown (e.g., on the terminal).
- After execution, program offloaded from Hard Disk.

**ASCII** stands for **American Standard Code for Information Interchange**.
It is a character encoding standard used to represent **text** in computers and communication devices.


### Computer Organization

In a computer system, memory plays a crucial role in storing data and instructions. Memory is broadly
classified into **Cache Memory** , **Main Memory (RAM)** , and **Secondary Memory** based on speed,
cost, and usage.

```
Feature Cache Memory Main Memory (RAM) Secondary Memory
```
```
Speed Fastest Fast Slow
```
```
Size Small (KB–MB) Medium (GB) Large (GB–TB)
```
```
Cost per Byte Most expensive Moderate Cheapest
```
```
Volatility Volatile Volatile Non-volatile
```
```
Location Inside/near CPU On motherboard Hard drive/SSD
```
```
Usage Temporary CPU data Active programs Permanent storage
```
### Compiler vs interpreter

**Compiler** and **Interpreter** are both types of language translators used to convert **high-level
programming languages (like C, Python, Java)** into **machine code** (binary code) that a computer

### can understand. However, they work in different ways.

**1. Compiler**

A **compiler** translates the entire high-level program into machine code **at
once** , before execution.

- It creates an **executable file (.exe)**.
- The program runs **after** successful compilation.
- If there are errors, they are all shown **after compilation**.

**Examples:**

- C, C++, Java (compiles to bytecode first)
**2. Interpreter**

An **interpreter** translates and executes the program **line by line**.

- It does **not** create an executable file.
- Execution **stops immediately** if an error is found.
- Used in scripting and interactive programming.

**Examples:**

- Python, JavaScript, Ruby


### Comments

**1. Multiple line comments**
    /* multiple line
    comments */
**2. Single line comment**
    //Single comment

### Basic Elements

The **basic elements** form the building blocks of any C program. Here's a list of the fundamental
elements in C:

**1. Character Set**
    C uses the ASCII character set, which includes:
       1) Letters: A–Z, a–z
       2) Digits: 0– 9
       3) Special characters:! @ # $ % ^ & * ( ) _ + - = { } [ ] ; : ' " ,. < > /? \ |
       4) Whitespace characters: space, tab, newline
**2. Identifiers**
    Names used for variables, functions, arrays, etc.
       1) Must begin with a letter or underscore (_)
       2) Cannot use keywords
       3) Examples: total, sum1, _temp
**3. Keywords**
    Reserved words with special meaning in C.
    Examples include: int, float, if, else, while, for, return, break, switch, case, void, char, double,
    etc.
**4. Data Types**
    Used to declare variables of different kinds:
       1) **Basic types:** int, char, float, double
       2) **Modifiers:** short, long, signed, unsigned
**5. Constants**
    Fixed values that do not change during execution.
       1) Integer constants: 100, - 25
       2) Floating-point constants: 3.14, -0.
       3) Character constants: 'a', '9'
       4) String constants: "Hello"
**6. Variables**
    Named locations in memory to store data.
    Example: int age = 21;
    float price = 50.5;
**7. Operators**
    Symbols used for preforming operations.
       1) Arithmetic operators: +, -, *, /, %


```
2) Relational operators: ==, !=, <, >, <=, >=
3) Logical operators: &&, ||,!
4) Assignment operator: =
5) Increment/Decrement: ++, --
```
**8. Expressions**
    Combination of variables, constants, and operators.
    Example: a + b * c
**9. Functions**
    Blocks of code that perform specific tasks.
    Example: int add(int x, int y) {
    return x + y;
    }
**10. Structure of a C Program**
    Basic structure:
    #include <stdio.h> // Preprocessor directive
    int main() { // Main function
    // variable declarations
    // statements
    return 0;
    }

### Character Set

The **character set** refers to the valid characters that can be used to write C programs. C uses the
**ASCII (American Standard Code for Information Interchange)** character set, which includes the
following categories:

**1. Letters**
    Uppercase letters: A to Z
    Lowercase letters **:** a to z
    **Used in:**
    Identifiers (e.g., variable names)
    Character constants (e.g., 'A')
**2. Digits**
    0 to 9
    **Used in:**
    Numeric constants (e.g., 123)
    Array indices, loops, etc
**3. Special Characters**
    Used for various syntactical purposes. Examples include:
       **Symbol Use**^

```
+ Addition operator^
```
- Subtraction operator^

```
* Multiplication operator^
```

```
Symbol Use^
```
```
/ Division operator^
```
```
% Modulus operator^
```
```
= Assignment operator^
```
```
< > Relational operators^
```
```
; Statement terminator^
```
```
() Function call or grouping^
```
```
{} Block of code^
```
```
[] Array brackets^
```
```
# Preprocessor directive^
```
```
" ' String/Character literals^
```
**4. Whitespace Characters**
    Used to separate tokens in code (ignored by the compiler but necessary for readability).
       1) Space: ' '
       2) Tab: '\t'
       3) Newline: '\n'
       4) Carriage return: '\r'
**5. Escape Sequences**
    Special characters represented with a backslash (\).
       **Escape**
       **Sequence**

```
Meaning
```
```
\n New line^
```
```
\t Horizontal tab^
```
```
\\ Backslash(only single backslash will print)^
```
```
\' Single quote^
```
```
\" Double quote^
```
```
\ 0 Null character^
```
- \ 0 this will use in string.
- Remaining all are used in printf().

**Printable and non-printable:**

```
Printable:
1) Characters
2) Digits
```

```
3) Special characters
```
```
Non-Printable:
1) Whitespace Characters
2) Escape Sequences
```
### Identifier

An **identifier** is the **name** used to identify variables, functions, arrays, structures, etc., in a C program.

Think of identifiers as **labels** you assign to different parts of your code so the compiler and human
readers can refer to them.

**Rules for Naming Identifiers in C:**

1. Must begin with a **letter (A-Z or a-z)** or **underscore _**
2. The rest can include **letters, digits (0-9), or underscores**
3. Cannot use **C keywords** (like int, return, etc.)
4. **Case-sensitive** : Count and count are different
5. **No spaces** or **special characters** like @, $, #, etc.
6. **Identifier** name can be of any length recognized only upto 31 characters’

Identifier also is called as:

```
1) Variable
2) Array
3) Structure
4) Union
5) Function name
```
### Keywords

**Keywords** are **reserved words** in C that have **special meaning** to the compiler.
They are used to **perform specific actions** or define the **syntax and structure** of C programs.

You **cannot use keywords** as variable or function names.

**Total Number of Keywords in C:**

- The C language defined by **ANSI C** has **32 keywords**.

There are categories into three types:

**1. Data Type Keywords**
    Used to define the type of a variable.
**2. Control Flow Keywords**
    Used for decision making and loops.
**3. Storage Class Keywords**
    Define the **scope** and **lifetime** of variables.
**4. Other Special Keywords**
    Used for function behavior and program structure.


```
Data Types Control Flow Storage Class Special Use
```
```
int if auto const
```
```
float else extern sizeof
```
```
char switch static typedef
```
```
double case register struct
```
```
void default union
```
```
short for enum
```
long while volatile (^)
signed do
unsigned goto
break, continue, return^

### Data Types:

Data type keywords in C define the **type of data** a variable can store, such as integers, floating-point
numbers, characters, etc.

They help the compiler **allocate memory** and **understand the nature** of data being processed.

List of Data Type Keywords in C:

```
Keyword Meaning
```
```
int Integer (whole numbers like 5, -10)
```
```
float Single-precision decimal (e.g., 3.14)
```
```
double Double-precision decimal (more accurate than float)
```
```
char Character (stores a single character, enclosed with single quote 'A')
```
```
void No value / empty type (used for functions that return nothing)
```
```
short Smaller integer type (less memory than int)
```
```
long Larger integer type (more memory than int)
```
```
signed Can store both positive and negative numbers
```
```
unsigned Can store only non-negative numbers (0 and above)
```

**Modifiers with Data Types**

You can **combine keywords** to form **modified data types** :

```
Type Description
```
```
short int Smaller range of integers
```
```
long int Larger range of integers
```
```
unsigned int Only positive integers
```
```
signed char Negative and positive character values
```
```
long double More precision than double
```
### Signed and unsigned

- **Description:**

```
o signed : Can store both positive and negative values. (Default for most data types
like int)
```
```
o unsigned : Can only store positive values (or zero).
```
- **Size:** Same as the base type (int, char, etc.), but the **range** differs.
- **Size of signed and unsigned Data Types** :

```
Data
Type
Signed Range Unsigned Range Size
```
```
int - 2,147,483,648 to 2,147,483,647 0 to 4,294,967,295 4 bytes
```
```
short - 32,768 to 32,767 0 to 65,535 2 bytes
```
```
long - 2,147,483,648 to 2,147,483,647 0 to 4,294,967,
```
```
4 or 8 bytes
(depends on
system)
```
```
char - 128 to 127 0 to 255 1 byte
```
```
long
long
```
- 9,223,372,036,854,775,808 to
9,223,372,036,854,775,

```
0 to
18,446,744,073,709,551,
8 bytes
```

**Data Type Sizes in C (Typical Sizes):**

```
Data Type Size (Bytes)
```
```
char 1 byte
```
```
short 2 bytes
```
```
int 4 bytes
```
```
long 4 or 8 bytes
```
```
long long 8 bytes
```
```
float 4 bytes
```
```
double 8 bytes
```
```
void No size
```
- Integers are in the form of decimal, hexadecimal and octal.

### Variables:

A **variable** is a **named memory location** used to **store data** during program execution.
It allows you to **store** , **retrieve** , and **manipulate values** in your C program.

Example: int age = 21;

float price = 99.50;

char grade = 'A';

Here:

- age, price, and grade are **variables**
- Their values can change during program
    execution

**Rules for Naming Variables:**

1. Must start with a **letter** (A–Z or a–z) or an
    **underscore _**
2. Can include **letters, digits (0–9), and**
    **underscores**
3. **No spaces** or **special characters** (like @, #, etc.)
4. **Cannot use C keywords** as variable names
5. **Case-sensitive** (e.g., Total and total are different)

**Conversation:**

1. Camel case – Name, Current_Year, Player_Name.
2. Snake case – Name, CurrentYear, PlayerName.


**Types of Variables (Based on Scope & Storage Class):**

1. **Local Variable** – Declared inside a function/block
2. **Global Variable** – Declared outside all functions
3. **Static Variable** – Retains value between function calls
4. **Extern Variable** – Declared in one file and used in another

**Note:**

In variable declaration before data type, we have to use unsigned or signed.

- default it take signed.

unsigned char ch = ‘A’;

### Memory Segments

When a C program is executed, its memory is divided into several segments. These segments are used

#### to store different parts of the program, such as instructions, variables, and more.

**1. Text Segment (Code Segment)**
    - **Purpose:** This segment stores the **compiled program code** (machine code).
    - **Properties:** It is usually **read-only** to prevent accidental modification of code.
**2. Data Segment**
    - **Purpose:** Stores **global** and **static variables** that are initialized by the programmer.
    - **Properties:** This segment has two parts:
       o **Initialized Data** : Stores variables that are explicitly initialized.
       o **Uninitialized Data (BSS)** : Stores variables that are declared but not initialized.
**3. BSS (Block Started by Symbol) Segment**
    - **Purpose:** Stores **global** and **static variables** that are **not**
       **initialized** by the programmer.

**Properties:** Variables in the **BSS segment** are automatically initialized
to **zero** by the operating system when the program starts.

- In this case, uninitialized Var is stored in the BSS segment
    and will be initialized to 0.
**4. Heap**
- **Purpose:** Stores **dynamically allocated memory**. This is
where memory is allocated during runtime (e.g., using
malloc(), calloc() and reallo()).
- **Properties:** The heap grows towards the **top of memory**.
Memory in the heap is **manually managed** (i.e., the
programmer must free it using free()).


**5. Stack**
    - **Purpose:** Stores **local variables** , function parameters, and function return addresses.
    - **Properties:** The stack grows towards down and shrinks with function calls and returns.
       The space is automatically managed by the system.
       o When a function is called, local variables are **pushed** onto the stack.

```
o When the function exits, the variables are popped off the stack.
```
```
Segment Stores Initialized/Uninitialized
Size
(Runtime)
```
```
Text
Segment
Program code Read-only Fixed
```
```
Data
Segment
Initialized global/static variables Initialized Fixed
```
##### BSS

```
Segment Uninitialized global/static variables^ Uninitialized (set to 0)^ Fixed^
```
```
Heap
Dynamically allocated memory (e.g.,
malloc())
Manual allocation Grows/shrinks
```
```
Stack
Local variables, function parameters, return
addresses
Local to function Grows/shrinks
```
### RAM

RAM is divided into bytes every bytes of RAM has a unique address. this unique address has a 32 bits
size

### Storing and Recalling value from memory

**Storing in memory**

1. “25” integer converts into ascii value.
2. ascii value “2, 53” value converted into binary.
3. Binary value “1111101” stores in memory.

**Recalling from memory**

1. In val memory “1111101” binary value presented
2. Binary value converted into ascii value “253”
3. Ascii value to ASCII characters “25”.

### Printf:

printf() is a **standard library function** in C used to **display output** on the screen. It comes from the
stdio.h header file.

1 st argument of printf is Control string.

- control string is known as which is enclosed with "double quotes (“ ”).


**Format specifiers** are special symbols used in functions like printf() and scanf() to tell the compiler
**what type of data** is being handled.
They act as **placeholders** for variables in a formatted string
A format specifier is a combination of % and a conversion specifier..

- %d, %f & %c etc..

**Categories of Format Specifiers**

**1. Integer Format Specifiers**

```
Specifier Description Example Value
```
```
%d Signed decimal integer int x = 10;
```
```
%i Signed decimal (same as %d) int x = -5;
```
```
%u Unsigned decimal integer unsigned int x = 20;
```
```
%o Octal (base 8) int x = 075;
```
```
%x Hexadecimal (lowercase) int x = 0x2a;
```
```
%X Hexadecimal (UPPERCASE) int x = 0x2A;
```
**2. Floating-Point Format Specifiers**

```
Specifier Description Example Value
```
```
%f Normal notation (float/double) float f = 3.14 2200 ;
```
```
%.2f Normal notation (float/double) Float f = 3.
```
```
%e / %E Exponential(Scientific) notation (lower/UPPER) 3.14e+00 / 3.14E+
```
```
%g / %G Shortest of %f or %e / %E 3.14 or 3.14e+
```
```
%lf Double (used with scanf, not printf) double d = 3.1415;
```
**3. Character and String Format Specifiers**

```
Specifier Description Example Value
```
```
%c Single character 'A'
```
```
%s String (char array) "Hello"
```
**4. Pointer Format Specifier**

```
Specifier Description Example Value
```
```
%p Memory address void *ptr
```
**5. Percentage Symbol**


```
Specifier Description
```
```
%% Prints % char
```
**To print a character in display:**

char ch = ‘A’;

printf(“%c”,ch);

output:

A

Output will give you without quote.

- **char ch = ‘A’;**
    When you perform variable declaration
       char ch = ‘A’;
    It will store value as:

A ASCII value Binary

- **printf(“%c”,ch);**
    when you perform printf function
    printf(“%c”,ch);
    it will recall value as:
    Binary ASCII value A

**To print ASCII value in display:**

char ch = ‘A’;

printf(“%d”,ch);

output:

65

Output will give you without quote.

- **char ch = ‘A’;**
    When you perform variable declaration
       char ch = ‘A’;
    It will store value as:

A ASCII value Binary

- **printf(“%c”,ch);**
    when you perform printf function
    printf(“%d”,ch);
    it will recall value as:
    Binary ASCII value

**getchar() and putchar()**


- getchar(): Reads a single character from standard input (keyboard).
- putchar(char): Prints a single character to the standard output (screen).

### Floating point values:

There are two types of notations are there in floating points.

1. Normal notation
2. Exponential notation

In scientific calculations we see larger decimal part and larger fraction part.

For reading larger decimal part and larger fraction part in short form we use exponential notation.

```
floating point value normal notation exponential notation
```
shifting decimal point to first non – zero value.

```
2356.95 2.35695*10^3 2.35695e^
```
**To print exponential value:**

float val = 2356.9 5

printf(“%f\n”,val);

output:

2.356950e+ 03

system will display:

```
2356.95 2.35695*10^3 2.35695e^3 2.356950e+
```
**To print exponential value:**

float val = 0.

printf(“%f\n”,val);

output:

1.7559e- 09

system will display:

```
0.0000000017559 1.7559*10^9 1.7559e^9 1.7559e- 09
```
### Round off:

float val = 23.

printf(“% **.2f** \n”,val);

output:

23. 57

**Round function**


The following function is in the math.h library.

Floating-point number to the **nearest integer**.

float val = 25.

printf(“%f\n”,round(val));

output:

25

**Floor function**

Rounds a floating-point number **down to the nearest integer** (floor).

float val = 25.

printf(“%f\n”,floor(val));

output:

25

**Ceil function**

Rounds a floating-point number **up to the nearest integer** (ceiling).

float val = 25.

printf(“%f\n”,ceil(val));

output:

26

### Bits and Bytes

**Bit**

- **Bit** stands for **binary digit**.
- It is the **smallest unit of data** in computing.
- A bit can have only **two possible values** : 0 or 1.
- Bits are the basic building blocks for all digital data.

**Byte**

- A **Byte** is a group of **8 bits**.
- It is used as a basic unit for storing data.
- One byte can represent **256 different values** (from 0 to 255) because 2^8=
- For example, one byte can store a single character like 'A' or a small number.

**How they relate**

- 1 byte = 8 bits


- Computers process data in bits, but memory and storage are usually measured in bytes.

### Ranges of data types:

The **ranges** of signed and unsigned values are calculated from the number of bytes:

**Unsigned values:**

- All bits are used for the magnitude (positive values only).
- The total number of possible values is 2^total bits
- Range of values is from 0 to 2^(total bits)- 1.

**Example:**
unsigned range is:

- Char storage size is 1 byte (8 bits).
- 2^8 = 2 56
- Range of values is **0** to 256 - 1 = **255**

**For Signed values (using two's complement system):**

- One bit is reserved for the sign (most significant bit).
- The remaining bits represent the magnitude.
- The range is from −2 ^ (total bits−1) to 2^(total bits – 1 )−1.

**Example:**
signed range is:

- Char storage size is 1 byte (8 bits).
- **2^8- 1 = - 128** to **2^( 8 - 1) - 1 =128 – 1**
- - 128 to 127
- Range of values is **- 128** to **127**

### MSB and LSB

- MSB = Most Significant Bit
- LSB = Least Significant Bit

These terms describe **positions** of bits in a binary number.

**MSB (Most Significant Bit)**

- It’s the **leftmost bit** in a binary number.
- It holds the **highest weight**.
- In **signed numbers** , MSB is also the **sign bit** :

```
o 0 → positive
o 1 → negative
```

**LSB (Least Significant Bit)**

- It’s the **rightmost bit** in a binary number.
- It holds the **lowest weight** (2⁰ = 1).
- Often used in checks like **odd/even** detection:

```
o LSB = 1 → Odd
```
```
o LSB = 0 → Even
```
### Wrap Around Method:

**Using wrap around method for signed:**

1. The **wrap around method** refers to a condition where a **counter or value exceeds its**
    **maximum limit** and **resets (or wraps)** to its **minimum** value.

char ch = 127;

ch = ch + 1; //ch = 128

printf(“%c”,ch);

output:

- 128
    - 128 ,- 127 ,-
126 ...............................................5,4,3,2,1,0,1,2,3,4,5.............................................
    5 ,12 6 ,12 7
2. The **wrap around method** refers to a condition where a **counter or value exceeds its
minimum limit** and **resets (or wraps)** to its **maximum** value.

char ch = -128;

ch = ch - 1; //ch = - 129

printf(“%c”,ch);

output:

127


##### - 128,-127,-

##### 126...............................................5,4,3,2,1,0,1,2,3,4,5.............................................

##### 5,126,

- - 128 is treated has MSB remaining from - 127 to 127 has LSB
- - 128 is signed and - 127 to 12 7 are unsigned

**Using wrap around method for unsigned:**

1. The **wrap around method** refers to a condition where a **counter or value exceeds its**
    **maximum limit** and **resets (or wraps)** to its **minimum** value.

char ch = 255 ;

ch = ch + 1; //ch = 256

printf(“%c”,ch);

output:

0

```
255,254...............................................................................................................
.................................3,2,1,
```
2. The **wrap around method** refers to a condition where a **counter or value exceeds its**
    **minimum limit** and **resets (or wraps)** to its **maximum** value.

char ch = 0 ;

ch = ch - 1; //ch = - 1

printf(“%c”,ch);

output:

256

```
255,254......................................................................................................3,2,1,
```
- 255 is treated has MSB remaining from 254 to 0 has LSB
- 255 is signed and 254 to 0 are unsigned.

### C standard library (libc)

libc.so is the shared object version of the C standard library (libc), used in Linux-based systems.

- **libc** stands for **"C standard library"**
- **.so** means **Shared Object** — a **dynamically linked library**

So, libc.so = dynamically linked version of the standard C library used at runtime.

**What Does libc.so Contain?**


It provides **core functions** like:

```
Function Group Examples
```
```
Input/Output printf, scanf, fgets, putchar
```
```
Memory Management malloc, calloc, free
```
```
String Handling strcpy, strlen, strcmp
```
```
Math Functions abs, rand, ceil, floor
```
```
Process Control exit, system, getpid
```
Static vs Shared

```
Type File Linked At
```
```
Static libc.a Compile time
```
```
Shared (Dynamic) libc.so Runtime
```
libc.so is used when compiling and running a C program:

- libc.so is the **C Standard Library** in Linux, provided as a **shared (dynamic) library**.
- It contains core functions like printf, scanf, malloc, etc.

When you compile a program like this:

gcc hello.c -o hello

- The compiler uses **libc.so automatically** to provide functions like printf.
- At **runtime** , your program uses this library from system paths like /lib.

When you compile:

gcc hello.c -o hello

- GCC automatically links against libc.so.
- You can **explicitly tell it** to link by using:

gcc hello.c -o hello -lc

- - lc means "link with **libc** (C standard library)."
- You can see it using:

ldd hello

**Manual Linking (Advanced)**

If you want to **manually** link using the ld command:

- Compile C to object file: gcc -c hello.c -o hello.o
- Link it manually:


**ld hello.o -o hello -lc** --dynamic-linker /lib64/ld-linux-x86-64.so.2 -L/lib64

```
Command What it does
```
```
gcc hello.c -o hello Compiles & links automatically with libc.so
```
```
gcc hello.c -o hello -lc Same as above, but explicitly uses libc
```
```
ld hello.o ... -lc ... Manual linking; must include -lc
```
### Why do we need to manually link (e.g., with ld -lc)?

In most cases, **you don’t have to** — because gcc takes care of linking automatically.
But **manual linking** becomes important in **specific scenarios** , especially in **embedded systems** ,
**bootloaders** , or **low-level development**.

**1. More Control**

You get full control over:

- What libraries are linked
- What memory layout is used
- Whether you want dynamic or static linking
**2. Smaller Executables**

In embedded systems (e.g., microcontrollers or small Linux boards), **storage is limited**.
Manual linking helps eliminate unnecessary libraries and features.

**3. Custom Linker Scripts**

In embedded Linux, you often use custom **linker scripts** to:

- Place code/data in specific memory sections (e.g., Flash, RAM)
- Control segment alignment
- Meet hardware-specific constraints
**4. Static or No Standard Library**

Some bare-metal or minimal builds don’t use the standard C library (libc).
You must:

- Write your own startup code
- Link only minimal object files (e.g., crt0.o)
- Use ld manually
**5. Cross-compilation**

When building firmware or Linux apps for **ARM, RISC-V** , etc., you often link manually with:

arm-linux-gnueabi-ld ... -lc ...


### Input/Output in c:

**stdin** - standard Input

**stdout** – standard output

**stderr** – standard error

#### input function:

- **scanf()** it read strings till delimiter.
- **fgets()** it read string with spaces.
- **getchar()** read singe character.

#### Output function:

- **printf()**
- **puts()**
- **fputs()**
- **putchar()**

### Scanf():

**1.** Other way of storing data into a variable using by **scanf().**
    o it takes input from user
    o to take input during execution (or) runtime.

1 st arrangement of scanf() is control string.

scanf(“%d”,val);

```
o in the above case it will get run time error.
o run time error known as program crashes during executing time.
```
2 nd arrangement should always base address of variable memory.

scanf(“%d”,&val);

Base address of variable memory

```
o base address – 1 st byte address.
o variable memory – depending on data type.
```
2. & is address operator.
3. scanf() Is also called as blocking call.
4. blocking call – suspend program execution.
5. Program will get out from suspend program execution state by user provides some input from
    keyboard and hit enter.
6. wherever input user provide it get stored at the base address passed as 2nd argument to scanf()
    function.

**Categories of Format Specifiers**

**1. Integer Format Specifiers**


```
Specifier Description Example Value
```
```
%d decimal integer Scanf(“%d”,&val);
```
```
%o Octal (base 8) Scanf(“%o”,&val);
```
```
%x Hexadecimal (lowercase) (0-8 & a-f) Scanf(“%x”,&val);
```
```
%X Hexadecimal (UPPERCASE)(0-8 & A-F) Scanf(“%X”,&val);
```
```
%i Decimal hexadecimal and octal Scanf(“%i”,&val);
```
**Common format specifier:**

1. %i is the common format specifier for decimal, hexadecimal and octal.
2. whenever we using format specifier then it is mandatory to mention prefix.

```
prefix Description Scanf() Printf()
```
```
NA decimal integer Scanf(“%i”,&val); Printf(“%d”,val);
```
```
0 Octal (base 8) Scanf(“%i”,&val); Printf("%o", val);
```
```
ox Hexadecimal (lowercase) (0-8 & a-f) Scanf(“%i”,&val); Printf(“% ox d”,val);
```
```
OX Hexadecimal (UPPERCASE)(0-8 &
A-F)
Scanf(“%i”,&val); Printf(“% OX d”,val);^
```
**2. Floating-Point Format Specifiers**

```
Specifier Description Example Value
```
```
%f Normal notation (float/double) float f = 3.142200;
```
```
%.2f Normal notation (float/double) Float f = 3.14;
```
```
%e / %E Exponential (Scientific) notation (lower/UPPER) 3.14e+00 / 3.14E+00
```
```
%g / %G Shortest of %f or %e / %E 3.14 or 3.14e+00
```
```
%lf Double (used with scanf, not printf) double d = 3.1415;
```
**Common format specifier:**

1. %g is the common format specifier for decimal, hexadecimal and octal.
2. whenever we using format specifier then it is mandatory to mention exponential notation.

```
prefix Description Scanf() Printf()
```
```
NA Normal notation Scanf(“%g”,&val); Printf(“%f”,val);
```
```
e Exponential notation Scanf(“%g”,&vale); Printf(“%e e ”,val);
```

#### Fgets()

#include<stdio.h>
int main(){
char name[100];
printf(“enter your name : ");
fgets(name,100,stdin);
//fgets(name,sizeof(name), stdin);
printf(“Hi %s\n”,name);
}
output: >>Enter your name : sai Naveen

>>Hi sai Naveen

- 99 characters it can take and 100th is ‘\0’

### Buffer in c:

#include<stdio.h>
int main(){
char name[100];
printf(“enter frist integers : ");
scanf(“%d\n”,&x);
printf(“enter seconed integers : ");
scanf(“%d\n”,&x);
printf(“adding of a and b = %d\”,x+b);
return 0;
}
Output: >>Enter first integer : 10
>>Enter second integer : 10
>>adding of a and b = 20
Output: **Buffer is can take input in junk when providing delimiter between two or more inputs.**
>>Enter first integer : 10 10
>>Enter second integer :
>>adding of a and b = 20

### Field width:

value with in format specifier is called field width.

the behaviour of values within format specifier depends on printf() or scanf().

Field width is used to take input or output in a specific format.

**1. Scanf()**

**Example 1** : scanf(“%2d%3d”,&a,&b);

Field width

**input:** 6 39

delimiters

delimiter is known as space, /, , and -.


If no.of digits input data is less then filed width then input is not changed and stored in corresponding
variable.

```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data(1)
```
< (^) Filed width No.of digits in
input data(1)
< Filed width

##### 6 2 39 3

**output:** 6 39

variable a

variable b

**Example 2** : scanf(“%2d%3d”,&a,&b);

Field width

**input:** 24 394

delimiters

delimiter is known as space, /, , and -.

If no. of digits input data is less then filed width then input is not changed and stored in corresponding
variable.

```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data( 2 )
```
##### ==

```
Filed width
No.of digits in
input data( 3 )
```
```
== Filed width
```
##### 24 2 394 3

**output:** 24 394

variable a

variable b

**Example 3** : scanf(“%2d%3d”,&a,&b);

Field width

**input:** 269 3845

delimiters

delimiter is known as space, /, , and -.


If number of digits input data is less then filed width then input is not changed and stored in
corresponding variable.

```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data( 3 )
```
> (^) Filed width No.of digits in
input data(1)
> Filed width

##### 3 2 39 3

the remaining digits in the frist input are not discarded. and they are considered as second input till
delimiter.

**output:** 26 9 3845

variable a discarded

variable b

**2. Printf()**

**Positive integer**

int val = 368;

printf(“%10d”,val);

**output:** _ _ _ _ _ _ _ 368

- 10 fields are allocated for printing output data.
- output data is displayed towards right hand side.

**Negative integer**

int val = 368;

printf(“%-10d”,val);

**output:** 368 _ _ _ _ _ _ _

- 10 fields are allocated for printing output data.
- output data is displayed towards left hand side.

**floating:**

**1. Scanf()**

**Example 1** : scanf(“% 3 f% 4 f”,&a,&b);

Field width

**input:** 5 5.9

delimiters


```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data(1)
```
##### <

```
Filed width
No.of digits in
input data( 3 )
```
```
< Filed width
```
##### 5 3 5.9 4

**output:** 5 5.9

variable a

variable b

**Example 2** : scanf(“% 3 f% 4 f”,&a,&b);

Field width

**input:** 5.93 65.87

delimiters

```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data( 3 )
```
##### ==

```
Filed width
No.of digits in
input data( 4 )
```
```
== Filed width
```
##### 5.9 3 65.8 4

**output:** 5.9 65.8

variable a

variable b

**Example 3** : scanf(“% 3 f% 4 f”,&a,&b);

Field width

**input:** 5.93 65.87

delimiters

```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data( 4 )
```
> (^) Filed width No.of digits in
input data( 5 )
> Filed width

##### 5.93 3 65.87 4

the remaining digits in the frist input are not discarded. and they are considered as second input till
delimiter.

**output:** 5.9 3.0 65.87

variable a discarded

variable b

- values after delimiter are discarded.


**printf():**

**Example 1** : printf(“%f\n”,&a,&b);

Field width

**input:** 3.4489165154896516551

```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data(4)
```
##### >

```
Filed width
No.of digits in
input data(5)
```
```
> Filed width
```
##### 5.93 3 65.87 4

- the remaining digits in the frist input are not discarded. and they are considered as second
    input till delimiter.
**output:** 3.448916

**Example 2** : printf(“%. 10 f\n”,&a,&b);

Field width

**input:** 3.4489165154896516551

```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data(4)
```
##### >

```
Filed width
No.of digits in
input data(5)
```
```
> Filed width
```
##### 5.93 3 65.87 4

- the remaining digits in the frist input are not discarded. and they are considered as second
    input till delimiter.

```
output: 3.4489165154
```
**Example 3** : printf(“%010.2f\n”,&a,&b);

Field width

**input:** 3.4489165154896516551

```
Variable a Variable a Variable b Variable b
```
```
No.of digits in
input data(4)
```
> (^) Filed width No.of digits in
input data(5)
> Filed width

##### 5.93 3 65.87 4

- the remaining digits in the first input are not discarded. and they are considered as second
    input till delimiter.

```
output: 000000 3.4 4
```

### Suppression of characters in scanf()

If you want to skip any input data.

scanf(“%d%*c%d%*c%d\n”,&day,&month,&year);

input: 30/09/2003

- 30 09 2003 are **int**
- / / / are **char**
- %*c is used to skipping the char

**output:** 30 09 2003

### Type conversation or type castings

- Fractional part will be truncated during conversion of float type to int type
- When double type is converted to float type, digits are rounded off.
- When a signed type is changed to unsigned type, the sign may be dropped.
- When an int is converted to float, or float to double there will be no increase in accuracy or
    precision.

#include<stdio.h>
int main(){
int x = 5, y = 2;
float z,q;
z = (float)x/y;
printf("f = %.1f\n",z);
printf("i = %d\n",(int)z);
}
Output: 6.500000

6

### const in c

#include<stdio.h>
int main(){
cont int x = 5 ;
printf("i = %d\n",x+1);
}
Output: compilers error

### Static in c

#include<stdio.h>
int main(){
static int x ;
printf("i = %d\n",x);
}
Output: 0


### Operators

- Operators are special symbols used to perform operations on variables and values. They are
    essential in forming expressions and controlling the logic of the program. Here's a detailed
    classification:
- operators specific an operation to be performs models (%)variable and constant.
- variable and constant are known as operands

Types of operators:

1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Increment & Decrement Operators
6. Conditional (Ternary) Operator
7. comma operator
8. bitwise operator
9. size of() operator

### Arithmetic Operators:

Used for basic mathematical operations:

1. unary Arithmetic Operators
2. binary Arithmetic Operators
**Unary Arithmetic Operators:**
required only one operand
example: - x, +x, +10, - 10
- + and - are called as unary - and unary +
**binary Arithmetic Operators:**
required two operates and one operator
example: x + 10, y – 10
- x and y are known as operates, + and – are known as operators.
operations are:
1. integer and arithmetic Operators
2. floating point arithmetic operators
3. mixed mode arithmetic Operators
**Integer and arithmetic Operators:**
both operates are type integer.
int a= 17, b=4;

```
Operator Meaning Example
+ Addition a + b
```
- Subtraction a - b
* Multiplication a * b
/ Division a / b
% Modulus a % b (remainder)
    - second operand is non zero value while using division (/) and modulus (%).
**Note:**
- If second operand is zero program will get segments error. which mean run time error.
- improper handling of address and pointers will cause run time error.


**Floating point arithmetic operators:**

- Both operand are in floating values.
- Module’s (%) operands can’t work in floating point arithmetic operators.
- Result is also in floating point only.
- Second operand is non zero value while using division (/).
**Mixed mode arithmetic Operators:**
- if one of the operand are in floating result also floating.
**Integer float Operations Result**
a = 12 b = 2.5 a + b 14.5
a = 12 b = 2.5 a - b 9.5
a = 12 b = 2.5 a * b 3.0
a = 12 b = 2.5 a / b 4.8

### Unary operator:

A **unary operator** is an operator that acts on **a single operand** to produce a result. In C and many
other programming languages, unary operators are used to perform operations such as negation,
increment, or dereferencing.

```
Operator Description Example Result
+ Unary plus (indicates positive) +a a
```
- Unary minus (negation) - a Negates a
++ Increment operator ++a or a++ Adds 1 to a
-- Decrement operator --a or a-- Subtracts 1 from a
! Logical NOT !a Inverts boolean value
~ Bitwise NOT ~a Flips bits of a
* Dereference pointer *ptr Value pointed by ptr
& Address-of operator &a Address of a
sizeof Returns size in bytes sizeof(int) Usually 4 (depends on system)

### Relational Operators:

- To compere two operates or two data types.
- Expression which used in relational operation are called as relation expression.
- Relation expression used in control flow statement.
- C is sequence language.it execute one by one.
- By using control flow statement, we can change or alternate sequence execution in two ways.
1. We can skip single or group of statement based on condition or sequence statement.
    - **if** , **if else** and **switch** (condition statement or sequence statement)
2. We can execute a single statement or group of statement multiple times based on condition.
    - **while** , **do while** and **for** (iterative or looping statement).
The expressions that use relation operator they evaluate through Boolean Ture or False.
example:
if(10 < 9) False
if(10 > 9) True
In c language we don’t have any data type to represent Boolean True or False.
- if(x > y)
- **x > y** is expression, which are present in () condition part.
- Result of expression that is evaluated In **True** or **False**.
- **if condition** check the Boolean value True or False which are in the condition part.
- If the condition is True statements, it will execute which are in the if condition block.
example: if(10 > 9);
printf(“10 is grater then 9\n”);


- According coding guidelines statements which are in the if condition block that are star from
    one tab space, thar space is called is indentation
- when condition part is false it doesn’t execute or skip statements which are in if condition
    block.
**Expression Valid / Executes? Reason**

val = 25; (^) Yes Assigns value 25 to variable val. Standard assignment.
val = x = 10; (^) Yes Chained assignment: x is set to 10, then val is also 10.
25 = val; No **Error** : You cannot assign to a constant (25 is not a variable).
val = 25 + val; (^) Yes Adds 25 to current val and stores result back in val.

### Compare Operator

- Right side of assignment operator should be variable, constant and expression.
- left side of assignment operator should be variable.
- Assignment operate can be combined with arithmetic Operators
    example: val += 10;
- **+=** is also called as **compound assessment operator** and **short hand assessment operator.
Operator Description Example Equivalent Expression**
= Simple assignment a = 5; Assign 5 to a
+= Add and assign a += 5; a = a + 5;
- = Subtract and assign a -= 3; a = a - 3;
*= Multiply and assign a *= 2; a = a * 2;
/= Divide and assign a /= 4; a = a / 4;
%= Modulus and assign a %= 3; a = a % 3;

### logical operations

Mainly in conditions and decision-making (if, while, etc.). They **combine or invert** the results of

### relational expressions (like ==, >, etc.) to make more complex logical statements.

```
Operator Name Description Example Binary /unary
&& Logical AND True if both conditions are true (a > 0 && b < 10) Binary
|| Logical OR ` (a > 0 || b < 10) Binary
! Logical NOT Inverts the result (true → false) !(a > 0) Unary
```
- **Non zero values are True.**
- **Zero value are False.
1. Logical AND (&&)**
- **Syntax** : expr1 && expr2
- **Short-circuit behaviour** : If the first condition is false, the second one is **not evaluated**.
- **Returns** true (1) if both expr1 and expr2 are true.
    **A B A && B**
    0 0 0
    0 1 0
    1 0 0
    1 1 1

example:
val = (5 == 5) && (5 < 10);
printf(“%d\n”,val);


output: 1

**2.. Logical OR (||)**
- **Syntax** : expr1 || expr2
- **Returns** true (1) if **any** one of the conditions is true.
- **Short-circuit behavior** : If the first condition is true, the second is **not evaluated**.
    **A B A || B**
    0 0 0
    0 1 1
    1 0 1
    1 1 1
example:
if(5 < 3 || 10 == 10);
printf(“Given statement is true\n”);
output: Given statement is true
**3. 3. Logical NOT (!)**
- **Syntax** : !expr
- **Returns** true (1) if expr is false, and vice versa.
    **A !A**
    0 1
    1 0

example:
int s = 0;
val = !(s);
printf(“%d\n”,val);
output: 1

### Increment & decrement operand:

**increment operand**
increment the value of the operand by **one** (++)**.
Decrement operand**
decrement the value of the operand by **one** (--)**.**

### Increment

**Pre-increment (++x)** and **post-increment (x++)** are unary operators used to **increase the value of a
variable by 1**. The key difference lies in **when the increment happens** relative to the expression in
which it appears.
**Post Increment Pre increment**
Int x = 10;
x++;
printf(“%d”,x);

```
Int x = 10;
++x;
printf(“%d”,x);
Output: 11 Output: 11
Int;
Int x = 10;
Y = x++;
printf(“%d%d”,x,y);
```
```
Int;
Int x = 10;
Y = ++x;
printf(“%d%d”,x,y);
Output: 11 10 Output: 11 11
```
**Pre-Increment (++x)**

- **First increases** , then returns the new value.


- **Increment happens before** the value is used in an expression.
- Can’t increment constant, increment expression can be done on variable.
**Post-Increment (x++)**
- **Returns the current value** , then increases the variable.
- **Increment happens after** the value is used in the expression.
- Can’t decrement constant, decrement expression can be done on variable.

### Decrement

Pre-decrement (--x) and post-decrement (x--) are unary operators used to decrease the value of a
variable by 1. The key difference lies in when the decrement happens relative to the expression in
which it appears.

```
Post decrement Pre decrement
Int x = 10;
x--;
printf(“%d”,x);
```
```
Int x = 10;
--x;
printf(“%d”,x);
Output: 9 Output: 9
Int;
Int x = 10;
Y = x--;
printf(“%d%d”,x,y);
```
```
Int;
Int x = 10;
Y = --x;
printf(“%d%d”,x,y);
Output: 9 10 Output: 9 9
```
**Pre-Decrement (--x)**

- **First decreases** , then returns the new value.
- **Decrement happens before** the value is used in an expression.

**Post-Decrement (x--)**

- **Returns the current value** , then decreases the variable.
- **Decrement happens after** the value is used in the expression
**Example 1:**

void main(){
printf("value is = %d",(10++));
}
output: main.c:5:28: error: lvalue required as increment operand
5 | printf("value is = %d",(10++));

```
Post Increment Pre increment Post decrement Pre decrement
Initial value present in
x value assigned to y.
(10)
```
```
The value x increment by
one (11)
```
```
Initial value present in
x value assigned to y.
(10)
```
```
The value x decrement
by one (9)
```
```
The value x increment
by one. (11)
```
```
increment value present in
x assigned to y. (11)
```
```
The value x decrement
by one. ( 9 )
```
```
Decrement value
present in x assigned to
y. ( 9 )
```
**Logical OR (||) Short-Circuit Behaviour**

- In an expression like A || B, if A is true (non-zero), **B is not evaluated**.
- That means if ++x or x++ is in B, it might **not get executed** at all.

#include <stdio.h>
int main() {
int a = 0, b = 5;
if (++a || ++b) {


printf("Inside if\n");
}
printf("a = %d, b = %d\n", a, b);
return 0;
}
Output:

Inside if

a = 1, b = 5 **Explanation:**

- ++a becomes 1 → true
- Because a is true, ++b is **not evaluated**
- b remains 5
Example 2: Post-Increment with ||

#include <stdio.h>
int main() {
int a = 0, b = 5;
if (a++ || b++) {
printf("Inside if\n");
}
printf("a = %d, b = %d\n", a, b);
return 0;
}
Output:

Inside if

a = 1, b = 6

**Explanation:**

- a++ evaluates to 0 (false), then a becomes 1
- Since a++ is false, b++ is evaluated
- b is 5 (used), then incremented to 6
- The overall expression becomes 0 || 5 → true

### Operator Precedence and Associativity

```
Precedence Category Operators Associativity
1 (Highest) Postfix expr++ expr-- () []. -> Left to Right
2 Unary ++expr --expr + -! ~ * & sizeof typecast Right to Left
3 Multiplicative * / % Left to Right
4 Additive + - Left to Right
5 Shift << >> Left to Right
6 Relational < <= > >= Left to Right
7 Equality == != Left to Right
8 Bitwise AND & Left to Right
9 Bitwise XOR ^ Left to Right
10 Bitwise OR ` `
11 Logical AND && Left to Right
12 Logical OR `
```

```
Precedence Category Operators Associativity
13 Conditional ?: Right to Left
14 Assignment = += -= *= /= %= <<= >>= &= ^= ` =`
15 (Lowest) Comma , Left to Right
```
- Order of evaluated based on lowest precedence first to higher precedence value.

**Example 1:**

x = a < b || b == c;

Output: >>x = 1

- First a < b as evaluated True, then b == c as evaluated False, then || operator as evaluated
    True.
- When two operators of the **same precedence** appear in an expression, **associativity** tells

#### which direction to evaluate:

```
o Left to Right (most common)
o Right to Left
```
**Example 2:**

x = a + b / c * d;

Output: >>x = 37

**Parentheses**

- Parentheses used to change order of evaluation, and also it used to increase readability of
    complex expressions.

**Example 1 :**

x = (22 - 4) / (2 + 4 * 2 - 1) //22-4 = 18 //2+4*2-1 = 9 // 18/9 = 2

Output: >>x = 2

**Nested parentheses**

- Pair of parentheses is used in other pair of parentheses is called as nested parentheses.
- Expression’s which are evaluated in inner parentheses are evaluated first.

**Example 1:**

x = (4 * (3 + 2)) / 10 **//** (4 * 5) / 10 **//** 20 / 10 **//** 2

Output: >>x = 2

**Example 2 :**

x = (5 * 5 / ( 7 – 2)) **//** 5 * 5 / 5 **//** 25 / 5 **// 5**

Output: >>x = 5

### condition expression:

- it required three operated.


Syntax of conditions expression

```
test expression? expression 1 : expression 2;
```
relation operator Test expression evaluates
false expression 2 will
execute

Method – 1:

int a = 10, b = 20;

a > b? printf(“a is greater then b\n”) : printf(“b is greater than a\n”)

Output: b is greater than a

Method – 2:

int a = 10, b = 20, c;
c = a > b? printf(“a is greater then b\n”) : printf(“b is greater then a\n”)
print(“%d\n”,c);
Output: b is greater than a
20
**Comma operator:**

multiple statements can be write in single line.

int a = 8;
int b = 10; int a = 8, b = 10, c = 9, a+b+c;
int c = 7;
int a + b + c;
Order of evaluation from left to right.

printf(“%d %d \ n”, i, j);

**Example 1:**

int i, j =10;
I = j, j + 1;
printf(“%d %d\n”, i, j);
Output: 10 10

- j + 1 this expression is not assigned to any variable

**Example 2 :**

int i, j =10;
i = (j, j + 1);
printf(“%d %d\n”, i, j);
Output: 11 10

- i = (j, j + 1) right most expression “j + 1” assigned to I variable.

**Example 3:**

int i, j =10;
i = (j + 1, j );
printf(“%d %d\n”, i, j);
Output: 10 10

```
Test expression
evaluates false
expression 2 will
execute
```
```
separating expression 1 and 2
```

- i = (j + 1, j) right most expression “j” assigned to i variable.

**Example 4:**

int i, j =10;
i = j, j = j + 10);
printf(“%d %d\n”, i, j);
Output: 10 20
**Example 5:**

int i, j =10;
i = (j, j = j + 10);
printf(“%d %d\n”, i, j);
Output: 20 20

- i = (j, j = j + 10) right most expression “j = j + 10” assigned to i variable.

**Example 6 :**

int i, j =10;
i = j, j++;
printf(“%d %d\n”, i, j);
Output: 10 10

- i = j expression j value store in i, j++ increment value by 1 result 11.

**Example 7:**

int i, j =10;
i = (j, j++);
printf(“%d %d\n”, i, j);
Output: 10 1 1

- j++ increment value by 1 result 11.
- i = (j, j++) right most expression “j++” assigned to i variable.

**Example 8 :**

int i, j =10;
i = j, ++j;
printf(“%d %d\n”, i, j);
Output: 10 11

- ++j increment value by 1 result 11.
- i = (j, ++j) right most expression “j”(10) assigned to i variable.

**Example 9:**

int i, j =10;
i = (j, ++j);
printf(“%d %d\n”, i, j);
Output: 11 11

- ++j increment value by 1 result 11.
- i = (j, ++j) right most expression “++j” assigned to i variable.

**Example 10:**

int i = 10, j = 2 0;


i = (i = i + j, j = i - j, i - j);
printf(“%d %d\n”, i, j);
Output: 20 10

- right most expression “i - j” assigned to i variable.

**Example 11:**

const char var='A';
++var;
printf("%c",var);
Output: >> main.c:5:5: error: increment of read-only variable ‘var’
>>5 | ++var;
**Example 1 2 :**

int x=10; x+=(x++)+(++x)+x;
printf("%d”, x);
Output: >> 46
**Return values:**

- we can check return value of any function in documentation.
- printf() – return value of printf function is number of characters are presented in side parterres
    “ “ and Including backslash charactersexample:

int a = 20, b= 10;
z = (a > b)? printf(“a is greater then b\n”) : printf(“b is grater then a\n”);
printf(“%d”,z);
output: a is greater than b

20

scanf() – return value of scanf function is number of inputs are give by user.

example:

printf(“Enter a number: “);
z = scanf(“%d”,&i);
printf(“%d”,z);
output: Enter a number: 20

### Sizeof();

- It looks like function, but it is not a function.
- it is compile time operator.
- the information that can pass in operand
    o Data type
    o Constant
    o variable

**int():**

**Data type**

int val = 50;
printf(“%d\n”, sizeof(int));
Output 4


During compilation this entry statement **(sizeof(int))** it replaced by number of bytes it replaces by **data
type int**.

**Variable**

int val = 50;
printf(“%d\n”, sizeof(val));
Output 4
During compilation this entry statement **(sizeof(val))** it replaced by number of bytes it is replaces by
varable **val**.

**Constant**

int val = 50;
printf(“%d\n”, sizeof( 50 ));
Output 4
During compilation this entry statement **(sizeof(int))** it replaced by number of bytes it replaces by **data
type int**.

**short int():**

**Data type**

short int sval = 2 0;
printf(“%d\n”, sizeof(short int));
Output 2

During compilation this entry statement **(sizeof(int))** it replaced by number of bytes it replaces by **data
type short int**.

**variable**

short int sval = 2 0;
printf(“%d\n”, sizeof(sval));
Output 2
During compilation this entry statement **(sizeof(val))** it replaced by number of bytes it is replaces by
varable **val**.

**Constant**

short int sval = 20 ;
printf(“%d\n”, sizeof( 20 ));
Output 4
During compilation this entry statement **(sizeof(int))** it replaced by number of bytes it replaces by **data
type int**. default it take integer value.

**char():**

**Data type**

char ch = ‘A’;
printf(“%d\n”, sizeof(char));
Output 1
During compilation this entry statement **(sizeof(int))** it replaced by number of bytes it replaces by **data
type int**.

**variable**


char ch = ‘A’;
printf(“%d\n”, sizeof(ch));
Output 1
During compilation this entry statement **(sizeof(val))** it replaced by number of bytes it is replaces by
varable **val**.

**Constant**

char ch = ‘A’;
printf(“%d\n”, sizeof(‘A’));
Output 4
During compilation this entry statement **(sizeof(int))** it replaced by number of bytes it replaces by
**Data type int**.

- Sizeof() operand used to write portable code.

Potable code is known as which we can run the code in any environment.

```
Linux Windows
Gcc 32bit compiler Turbo c 16bit compiler
Int – 4 bytes Int – 2 bytes
```
**malloc();**

- DMA – dynamic allocated memory.
- It allocates memory during run time.

**malloc(4); when we allocated memory of 4 bytes this statement doesn’t work in windows so we
have to use sizeof() operate to write code to run in windows and Linux.**

```
Static allocation Dynamic allocation
Int val = 41;
Creating a memory of 4 bytes. naming as val
```
```
Malloc(4);
Creating a memory of 4 bytes.
Creating a memory during compile time Creating a memory during run time.
BSS/data/Stack it depends on declaration Heap Segment
```
**potable code/ common code**

mallo(sizeof(int));

- This above statement can work in windows and Linux.

Accessing or using **malloc/DMA calls/malloc** created memory by using **pointers**.

- sizeof() is not a function due to in a function there are two things that are:
    o Function declaration
    o Function definition
- variable names should always represent by it usages, like int - val, short int - sval & char – ch.

### Pointers:

- Pointer is special variable to store address of memory location in RAM.
- ***** is named as **asterisk** but actual name is **Dereference operator.**
- we can access constant which is stored in variable by base address of variable.

There are steps to work with pointers:


1. Declaration of pointer.
2. Assigning a valid address.
3. De-reference.

**Integer**

**Declaration of pointer:**

int * ptr

**Assigning a valid address**

prt = &val;

**De-reference** (2 Steps)

*ptr //*0xb747 800

1. once * applied to ptr, it automatically applied to address.
2. When * applied to address then it will give access to constant which are in val.

int val =25;

```
0xb9769800 0xb9769801 0xb9769802 0xb9769803
```
```
Creating memory 4 bytes, Named as val
```
int *ptr;

```
Creating memory 4 bytes, Named as ptr
```
prt = &val;

```
Stroing base address of val
```
*ptr

```
Accessing memory of 4 bytes by base address which we stored in ptr memory
```
#include<stdio.h>
int main(){
int val = 25; //creating 4 bytes of memory named as val
int *ptr; // creating 4 bytes of memory named as *ptr
ptr = &val; // assigning val base address to ptr
printf(“%d\n”,ptr); //printing base address of val which is stored in ptr
printf(“%d\n”,&val); //printing base address of val
printf(“%d\n”,*ptr); //printing constant which is in the val by pointer through base address
printf(“%d\n”,val); //printing constant which is stored in val
return 0;
}
output: >>0xb9769800

##### 25

```
0xb9769800
```
```
0xb9769800 0xb9769800 25
```

>>0xb9769800
>> 25
>>25
**Short int;
Declaration of pointer:**

short int * sptr

**Assigning a valid address**

sprt = &sval;

**De-reference** (2 Steps)

*sptr //*0xb747800

1. once * applied to sptr, it automatically applied to address.
2. When * applied to address then it will give access to constant which are in sval.

short int sval =25;

```
0xb9769800 0xb976980 1
```
```
Creating memory 2 bytes, Named as val
```
short int *ptr;

```
Creating memory 4 bytes, Named as ptr
```
sprt = &val;

```
Stroing base address of val
```
*sptr

```
Accessing memory of 2 bytes by base address which we stored in ptr memory
```
**Character
Declaration of pointer:**

char * cptr

**Assigning a valid address**

cprt = &cval;

**De-reference** (2 Steps)

*cptr //*0xb747800

1. once * applied to sptr, it automatically applied to address.
2. When * applied to address then it will give access to constant which are in sval.

##### 25

```
0xb9769800
```
```
0xb9769800 0xb9769800 25
```

char cval =’A’;

```
0xb9769800
```
```
Creating memory 1 bytes, Named as val
```
char *ptr;

```
Creating memory 4 bytes, Named as ptr
```
cprt = &val;

```
Stroing base address of val
```
*cptr

```
Accessing memory of 1 bytes by base address which we stored in ptr memory
```
- Address is in hexadecimal value
- Pointer size always 4 bytes, it is storing hexadecimal value in it, hexadecimal is an integer.
**Pointer declaration Memory size**
Sizeof(ptr) //int 4
Sizeof(sptr) //short int 4
Sizeof(cptr) //character 4
Sizeof(*ptr) //int 4
Sizeof(*sptr) //short int 2
Sizeof(*cptr) //character 1

### Control flow:

To change order **or** alternate sequence of execution.

1. conditional statement
2. selective statement

**Logical AND**

**Example: 1**

#include<stdio.h>
int main(){
int num;
printf(“enter a number to check positive or not : \n”);
scanf(“%d”,&num);
if(num > 0){
printf(“positive”);
}return 0;
output: enter a number to check positive or not : 2
positive

##### ‘A’

```
0xb9769800
```
```
0xb9769800
0xb9769800 ‘A’
```

if – keyboard; (num > 0) – condition; Statements which are written inside {} are known as if block.

**Example: 2**

#include<stdio.h>
int main(){
int x = 0, y = 1;
if(x++ && ++y){
printf(“if block executed\n”);
}printf(“x = %d y = %d,x,y);}
output: 1 1

- If first expression evaluated false the end result is considered has false.
- Second expression not going to evacuated.
- If second expression is true or false there is no use in changing of end result.
- This technique is called as compiler optimization technique.

**Example: 3**

#include<stdio.h>
int main(){
int x = 0, y = 1;
if(x++ && y++){
printf(“if block executed\n”);
} printf(“x = %d y = %d,x,y);
return 0;
}
output: 1 1

- the second expression is evaluated when first expression is true.

example: 3

#include<stdio.h>
int main(){
int x = 0, y = 1;
if(++x && ++y){
printf(“if block executed\n”);
} printf(“x = %d y = %d,x,y);
return 0;
}
output: if block executed
1 2
example: 4

#include<stdio.h>
int main(){
int x = 1, y = 1;
if(++x && ++y){
printf(“if block executed\n”);
} printf(“x = %d y = %d,x,y);
return 0;
}
output: if block executed
2 2

- End result will depend on the second expression when first expression is true


**Logical OR:**

**Example: 1**

#include<stdio.h>
int main(){
int x = 0 , y = 1;
if(x++ && ++y){
printf(“if block executed\n”);
} printf(“x = %d y = %d,x,y);
return 0;
}
output: if block executed
1 2

- If first expression is True then it doesn’t evaluate second expression the end result will
    consider as True this technique is called as compiler optimization technique.

**Example: 2**

#include<stdio.h>
int main(){
int x = 1, y = - 1 ;
if(x++ && ++y){
printf(“if block executed\n”);
} printf(“x = %d y = %d,x,y);
return 0;
}
output: 2 0
**Program to print id a number is eve or odd**

**Example: 1**

#include<stdio.h>
int main(){
int num;
printf(“enter a number : \n”);
scanf(“%d”,&num);
if(num % 2 ){
printf(“odd\n”);
}else{
printf(“even\n”);
}return 0;
}
output: >>enter a number : 8
>>even

- (num % 2) in this statement **8 % 2** => **0,** 0 is always treated False.
- (num % 2) in this statement **7 % 2** => **1,** Non zero values is always treated True.
- Once if condition is false, it don’t executive inside in block statement.
- if block does not executive it automatically executive inside else block statement.
- this code can write multiple ways there are mentioned below.

Method – 2 :

if(num % 2 == 0){
printf(“even\n”);


Method – 3:

if(num % 2 == 1 ){
printf(“odd\n”);
Method – 4:

if(num % 2 != 0){
printf(“odd\n”);
Method – 5:

if(num % 2 != 1 ){
printf(“even\n”);
Method – 6:

if(!(num % 2)){
printf(“even\n”);
**Segmentation fault**

1. Improper using of pointers.
2. when values are tried to divide zero values.

example: 1

#include<stdio.h>
int main(){
int x, y;
printf("enter x and y : \n");
scanf("%d %d",&x, &y);
if(y > 0){
printf("coefficient of x and y : %d\n", x/y);
printf("Remember of x and y : %d\n", x%y);
}else{
printf("Second number is zero\n");
}return 0;
}
output: >>enter a and y : 8 2
>>coefficient of x and y : 8
>>Remember of x and y : 0

Method – 2:

if(y != 0){
printf("coefficient of x and y : %d\n", x/y);
printf("Remember of x and y : %d\n", x%y);
Method – 3:

if(y == 0){
printf("Second number is zero\n");

Method – 4:

if(y){
printf("coefficient of x and y : %d\n", x/y);
printf("Remember of x and y : %d\n", x%y);

- **if(y)** if this user enters non zero values, then if condition will be True and if block statement
    will execute.


Method – 5:

if(!y){
printf(“Second number is zero\n”);

- **if(!y)** if this user enters zero values, then if condition will be True and if block statement will
    execute.

### Macros & Symbol content:

**Macro** is a fragment of code that has been given a name. Whenever the name is used, it is replaced by
the contents of the macro **by the preprocessor while compilation** in the stage of **pre-prospering.**

**Macro definition**

#define PI 5

- By using **preprocessor derivative** assign **name to constant**.
- In preprocessing stage replacing **constant names** with **corresponding values**

example: 1

#include<stdio.h>
#define Arr_Size 5
int main(){
int i;
int arr[Arr_Size];
for(i = 0; i < Arr_Size; i++){
scanf("%d",&arr[i]);
}for(i = 0; i < Arr_Size; i++){
printf("%d\n",arr[i]);
}return 0;
}
output: >>0 1 2 3 4
>>0 1 2 3 4

- By using macro assign name has Arr_Size to constant 5
- Substituting corresponding vales in the place of macro.

### Preprocessing Stage

Statements stating with # are Prossed in this preprocessing
stage

1. Macro substituting - > #define
2. Inclusion of header files - > #include
3. Condition compilation - > #ifdef and #endif
4. Remove of comments -> Removing the single line
    and multiple line comments

To generate preprocessing output or to see preprocessing
stage output.

- Stop compiler after preprocessing stage by using
    **>>gcc -E sample.c**

We can stop compiler in each and every stage.
example: 2


#include<stdio.h>
#define MAX 100
int main(){
if( **MAX = 100** ){
printf("True\n");
}else{
printf("False\n");
}return 0;
}
Output: complier error

- Constant and values are can’t allow re assign macro after macro definition.

**To see documentation of gcc compiler**

- In gcc documentation **(gcc man)** there are stages of compilation.
- To see documentation of stages there are flag/opinions.
- to see documentation of Preprocessing by **- E**

**We can invoke printf with in if condition**

- For function invoke considering Boolean value based on return values
- printf return value is based on number character in double codes.
- based on **printf(“sai”)** return value is 3, non-zero values are True

example: 4

#include<stdio.h>
#define MAX 100
int main(){
if( **printf(** " **Sai** "){
printf("True\n");
}else{
printf("False\n");
}return 0;
}
Output: SaiTrue

### Nested if else:

Nested if-else statement occurs when one if or if-else statement is placed inside
another if or else block. This allows for more complex decision-making based on multiple conditions.

**Printing of greatest of three numbers**

#include<stdio.h>
int main(){
int a, b, c, big;
printf("Enter a three number : ");
scanf("%d %d %d",&a, &b, &c);
if(a > b){
if(a > c){
big = a;
}else{
big = c;
}


}else{
if(b > c){
big = b;
}else{
big = c;
}
}printf("Among three numbers %d id greater\n",big);
return 0;
}
output: >> 10 20 30
>> Among three numbers 30 id greater
**Disadvantages of nested if else**

- Number of conditions increased code shift towards right hand side dur to the level of
    indentation increased.
- Every **if** needs to have a matching **else** at proper location.
- Every open curly braise **{** to have a closed curly braise **}**.

To overcome these three disadvantages there is a other control flow statement **else if.**

#include<stdio.h>
int main(){
int a, b, c;
printf("Enter a three number : ");
scanf("%d %d %d",&a, &b, &c);
if(a > b && a > c){
printf("a is greater number among all %d\n",a);
}else if(b > a && b > c){
printf("b is greater number among all %d\n",b);
}else{
printf("c is greater number among all %d\n",c);
}return 0;
}
output: >> 10 20 30
>> c is greater number among all 30

- when if condition is True then if block will execute.
- when if condition is false then if else condition is true then else if block will execute.
- when else if all conditions is false then else block will execute.

### Switch statement:

- if -> uni directional control flow statement.
- if else -> by directional control flow statement.
- switch ->multi directional control flow statement.

**Declaration:**

Switch(_____):

Switch expression -> normal variable, function invocation, normal expression and
constant.

- Every possible result based in the separate case.

case ___:


case label - > constant and constant expression.

- Below case block there can be single or multiple statement and break (it is optional).
- Usage of break is dependent on the programmer requirements and logic.
- Result of switch expression should match with case label.
- Break will us to stop control flow and exit from switch block.

default:

- When result of switch experience didn’t match with case label’s then default block will
    execute.
- In default there is no need to use break, when last statement of default executed it
    automatically came out from switch block.

#include<stdio.h>
#include<string.h>
int main(){
int chose;
printf("Enter a number : ");
scanf("%d",&chose);
switch (chose){
case 1: printf("First\n");
break;
case 2: printf("Seconed\n");
break;
case 3: printf("Third\n");
break;
default: printf("Invailed input\n");
}
}
output: >> 1
>> First
output: >> 10
>> Invalid input

- case labels are not need to be in order they can be in any order.

#include<stdio.h>
#include<string.h>
int main(){
int chose;
printf("Enter a number : ");
scanf("%d",&chose);
switch (chose){
case 3 :
printf("Third\n");
case 1 :
printf("First\n");
case 2 :
printf("Second \n");
default:
printf("Invalid input\n");
}
}
output: >> 2
>>Second


>>Invalid input
output: >> 3
>>Third
>>First
>>Second
>>Invalid input
**Fall through case:**

- Break statement didn’t used in case block it will execute next statements which are false
    under different cases.
- Execute till it find break statement or last statement inside switch block, then it will exit
    switch block.
- Control will not come out of Switch when we use {} in case’s

#include<stdio.h>
#include<string.h>
int main(){
char chose;
printf("Enter a number : ");
scanf("%c",&chose);
switch (chose){
case ‘1’: {printf("First\n");
break;
}
case ‘2’: {printf("Seconed\n");
break;
}
default: printf("Invailed input\n");
}
}
output: >> 1
>> First
output: >> 10
>> Invalid input

- In case label we can also use character constant in case label.
- 1 – integer constant, ‘1’ – character constant.

**Invalid case labels:**

variable can’t be used in case label

int i= 3;
case i; printf(“Third\n”);
output: >>case label does not reduce to an integer constant.

float can’t be used in case label

case 3.2; printf(“Third\n”);
output: >>case label does not reduce to an integer constant.

expressions can’t be used in case label

case 3.2; printf(“Third\n”);
output: >>case label does not reduce to an integer constant.

strings can’t be used in case label


case “abc”; printf(“Third\n”);
output: >>case label does not reduce to an integer constant. **valid case labels:**

expressions with integer constant or character constant can be used in case label

case 3.2; printf(“Third\n”);
output: >>case label does not reduce to an integer constant.

**Common Statements**

- Case with common statements can be combined together.
- Case’s which are common they have to mentioned one below other.
- common statements need not to mentioned multiple time.

**Example 1 :**

- Findings how many days in months, using switch control flow?
- jan, march, August and so on 31 days, September, jun and so on 31 days
#include<string.h>
int main(){
int chose;
printf("Enter a number : ");
scanf("%d",&chose);
switch (chose){
case 1 :
case 3:
case 5 :
case 7:
case 8:
case 10:
case 12: prinntf(“31 days\n”);
case 4:
case 6:
case 9:
case 11: printf(“30 Days\n);
case 2: printf(“28 Days\n”);
default: printf("Invailed input\n");
}
}
output: >> 5
>> 31 Days
>> 6
>> 30 Days
**Example 2:**

case1: case 8 : case 3 : case 5: case 7: case 10: case 12:
printf(“31 Days\n”)
break;
case 4: case 6: case 9: case 11:
printf(“30 Days\n”);
break;

**Invalid switch expression:**

#include<stdio.h>


#include<string.h>
int main(){
int i = 11;
switch (i % 10){
case 1: printf("First\n");
case 2: printf("Seconed\n");
default: printf("Invailed input\n");
}
}
output: >> we can’t use expressions in switch labels
We can use character instead of ascii value

#include<stdio.h>
#include<string.h>
int main(){
int i = 97;
switch (i ){
case ‘a’: printf("First\n");
break;
case ‘b’: printf("Seconed\n");
break;
default: printf("Invailed input\n");
}
}
output: >>First
In switch block we can give statements not with in case block.
#include<stdio.h>
#include<string.h>
int main(){
int i = 97;
switch (i ){
x = x + 2;
case ‘a’: printf(“First\n”);
break;
case ‘b’: printf(“Seconed\n”);
break;
default: printf(“Invailed input\n”);
}
}
output: >>First

- x = x + 2 will not give any compilation error.
- Statement which does not fall under any call, they are never executed.

## Loops Statement

- looping statement is also called as iterative statement.
- To execute statements multiple time is called as lopping.
    a. while
    b. do while
    c. for()

### while

**Syntax:**


#include<stdio.h>
int main(){
int i = 0;
while(i < 5){
printf(“%d, “, i);
i++;
}printf(“\n”);
printf(“After loop body Statement \n”);
}
Output: 0 1, 2, 3, 4,
After loop body Statement

- i < 5 which is inside while () it is called as condition part and it can be expression or logical
    part.
- which are inside while(I < 5){} loop body.
- i++ is known as update part.
- condition part evaluated Boolean True or False.
- Once expression is evaluated true then inside loop body statements will execute.
- After execute statements control goes to condition part, again it will evaluate True or False.
- Inside loop body statements will execute till condition part will evaluate false.
- Once condition part evaluated False then control go which is after loop body statements.
- i is known as loop countess, how many time loops body want to execute it depends on i.
- if i is not updating in loop body then code goes to infinity loop.

**Example 1:**

**Blow mention code is infinite loop by using “ ; ”**

int i = 1;
while(i < 10) **;** {
printf(“%d “,i);
i = i +1;
}

- There is no compilation error This while loop doesn’t have loop body or empty loop body.
- Loop body which we write blow are not part I of while loop.
- below statement will execute only once after the loop get terminated.
- i is not updating is this loop so it will go to infinity loop.
- to come out of this loop we have to use in terminal “ctrl c”.

**Example 2:**

int i = 1;
while(i++ < 5 ) **;** {
printf(“%d “,i);
i++
}printf(“%d “,i);
Output: >>6 7

- After five times incrementing i then loop will terminal due to conditional part (i++ < 5);

**Example 3:**

**Program to print sum of number or values**

int num;


long int sum = 0;
printf(“Enter a number : );
scanf(“%d”,&num);
while(num > 0){
rem = num % 10;
sum = sum + rem;
num = num / 10;
}prinntf(“%ld is sum of digits \n”);
Output: >>1 321
>>1 0

```
Iteration num Before rem = num % 10 sum = sum + rem num = num / 10 sum After
```
```
1 4321 1 0 + 1 = 1 432 1
```
```
2 432 2 1 + 2 = 3 43 3
```
```
3 43 3 3 + 3 = 6 4 6
```
```
4 4 4 6 + 4 = 10 0 10
```
**Example 4:**

**Program to find Factorial of number.**

int num;
long int fact = 1 ;
printf(“Enter a number : );
scanf(“%d”,&num);
while(num > 1 ){
fact = fact *n;
num--;
}prinntf(“%ld is sum of digits \n”);
Output: >> 5
>>1 20

```
Iteration num fact = fact * n Updated fact
```
```
1 5 1 * 5 5
```
```
2 4 5 * 4 20
```
```
3 3 2 0 * 3 60
```
```
4 2 60 * 2 120
```
- The factorion of value num will increasing rapidly so we have to use long int.

**Example 5:**

**Program to reverse a number.**

long int rem, rev;
long int num = *n;
while(num != 0){
rem = num % 10;
rev = rev*10+rem;


num /=10;
}printf("%ld reveresed number\n",rev);
Output: >>1456
>>6541
**Example 6:**
Program to check whether a number is palindrome.
long int rem, rev;
scanf(“ld”,n);
long int num = n;
while(num != 0){
rem = num % 10;
rev = rev*10+rem;
num /=10;
}if(numm = rev){
printf(“given number is palindrome\n”);
}else{
printf(“given number is not palindrome\n”);
}
Output: >>1 441
>> given number is palindrome

### Do while

**Syntax**

do{

------loop--------

-------body-------

}while(conditional part);

### Do while

**Syntax**

#include<stdio.h>
int main(){
int I = 0;
do{
printf(“%d, “, i);
i++;
}while(I < 5);
printf(“\n”);
printf(“After loop body Statement \n”);
}
Output: 0 1, 2, 3, 4, 5
After loop body Statement

- I < 5 which is inside while () it is called as condition part and it can be expression or logical
    part.
- which are inside while(I < 5){} loop body.
- i++ is known as update part.
- Frist loop body inside statements will execute after it will check for condition part.
- condition part evaluated Boolean True or False.


- Once expression is evaluated true then it will execute next iteration inside loop body
    statements.
- After execute statements control goes to condition part, again it will evaluate True or False.
- Inside loop body statements will execute till condition part will evaluate false.
- Once condition part evaluated False then control go which is after loop body statements.
- I is known as loop countess, how many time loops body want to execute it depends on i.
- if I is not updating in loop body then code goes to infinity loop.

**Example 1:**

**Program to count numbers in digits.**

**Output:** >>4 >>0

- 0 is also integer, but is logic is not accepting 0 as integer.
- we can overcome this with **do while loop.**

**Program to count numbers in digits.**

**Output:** >>4 >> 1

**Example 3:**

**Program to find Factorial of number.**

int I = 0;
char ch = ‘A’;
do{
putchar(ch);
printf(“%d\n”,i);
}while(I ++< 5 || ++ch < ‘F’);
Output: A0
A1
A2
A3
A4
B5
C6
D7
E8
F9

```
int n = 3961;
int count = 0;
while(n > 0){
count++;
n /= 10;
}printf(“%d\n”, count);
```
```
int n = 3961;
int count = 0;
while(n > 0){
count++;
n /= 10;
}printf(“%d\n”, count);
```
```
int n = 3961;
int count = 0;
do{
count++;
n /= 10;
}while(n > 0);
printf(“%d\n”, count);
```
```
int n = 0 ;
int count = 0;
do{
count++;
n /= 10;
}while(n > 0);
printf(“%d\n”, count);
```

```
Iter I(before)^ ch (before) Condition i++ < 5 Condition ++ch <= ‘F’ Final i Final ch Output Loop Runs?
```
```
1 0 A (0 < 5) — 1 A A0
```
2 1 A (^) (1 < 5) — 2 A A1 (^)
3 2 A (^) (2 < 5) — 3 A A2 (^)
4 3 A (3 < 5) — 4 A A3
5 4 A (^) (4 < 5) — 5 A A4 (^)
6 5 A (5 < 5 →
)
++ch = B → B <= F
→
6 B B5 (^)
7 6 B (^) ++ch = C → 7 C C6 (^)
8 7 C (^) ++ch = D → 8 D D7 (^)
9 8 D (^) ++ch = E → 9 E E8 (^)
10 9 E (^) ++ch = F → 10 F F9 (^)
11 10 F (^) ++ch = G → 11 G (^) (exit)

### for loop

**Syntax**

for(initialisation part; conditional part; updating part) {

-------loop-------

--------body------

}printf(“%d”, i); //statement which after loop body starts from here

- Loop execution starts from initialisation part.
- Evaluating expression inside conditional part Boolean true or false to, when expression is true
    then execute statements inside loop body.
- after executing loop body then control comes to updating part.
- then again expression inside conditional evaluate till the false this loop will execute.
- once conditional part evaluates False then loop will terminate control goes after loop body
    statements.
- initialisation part to conditional part to loop body to update part to conditional part again it
    starts from conditional part it will execute till loop termites.

**Program to print 0 – 5 using for loop**
int i;
for(i = 0; i <= 5; i++){
printf(“%d ”, i);
}printf(“\n”);
Output: 1 2 3 4 5

- i is called as loop counter because how many time loop body executive that depends on value
    presented in I, I is present in initiation part and also I is in update part.


**Multiple tow numbers without using multiplexing operator**

int i a, b;
scanf(“%d%d”,&a<&b);
for(i = 1 ; i <= b; i++){
result = result + a;
}printf(“%d”, result);
Output: >> 4 3
>>12
**leaving empty initiation part**

for( ; i < 5; i++)

- we can leave empty initialisation part by initiation I before.

**Program to print 0 – 5 using for loop**
int i = 0;
for( ; i <= 5; i++){
printf(“%d ”, i);
}printf(“\n”);
Output: 1 2 3 4 5

- it will not generate any compilation error.

**leaving empty conditional part**

for(I = 0; ; i++)

- we can’t leave empty conditional.

**program to print 0 – 5 using for loop**
int i ;
for(i = 0; ; i++){
printf(“%d ”, i);
}printf(“\n”);
Output: 0 1 2 3 4 5 6 7.......... infinity

- it will not generate any compilation error.
- in logical we didn’t mention where to stop loop.
- Printing numbers till code get smash.

**leaving empty updating part**

for(I = 0; ; i++)

- we can’t leave empty updating part.

**Program to print 0 – 5 using for loop**

int i ;
for(i = 0; I <= 5; ){
printf(“%d ”, i);
}printf(“\n”);
Output: 0 0 0 0.......... infinity

- it will not generate any compilation error.
- in logical we didn’t mention to do any update
- “0” will print till code smash.


**leaving empty initialisation part, conditional part and updating part**

for( ; ; )

- we can’t leave empty conditional.

**program to print 0 – 5 using for loop**

int i = 0;
for( ; ; ){
printf(“%d ”, i);
}printf(“\n”);
Output:

- It will not generate any compilation error.
- It will go to infinity loop
**program to ascii values**

int i = 0;
for( i = 0 ; i < 128 ; i++){
printf(“%d ”, i);
}printf(“\n”);
Output: >>

- It will go to infinity loop
- it will go on wrap around method.
- because 128 will be -128 and it goes on.
**End of for loop using “;”**

int i = 0;
for( i = 0 ; i < 5 ; i++) **;**
printf(“%d ”, i);
Output: >> 5

- No compilation error, for loop doesn’t have any loop body (or) empty loop body.
- printf(“%d”,i); statement is not part of loop body, completely different statement it executed
    only once after for loop termites.
**Using multiple initialisation part**

for( i = 0, j =0; ; ) **;**

- multiple expression can be used inside initialisation part with using comma ‘,’ to separate.

**Using multiple conditional part**

for( ;i = 3 , j < 5 ; ) **;**

- multiple expression can be used inside conditional part with using comma ‘,’ to separate.
- Right most expression **(j < 5)** will consider as conditional part.

**Using multiple updating part**

for( ; ;i ++, j++) **;**

- multiple expression can be used inside updating part with using comma ‘,’ to separate.
**Example 1:**

int i, j;
for( i = 0, j = 0 ; i < 3, j < 5 ; i++, j++){
printf(“%d %d\n”, i);
}


Output: >>0 0
>>1 1
>>2 2
>>3 3
>>4 4
>>5 5
**Example 2:**

int i, j;
for( i = 0, j = 0 ; i < 3, j <= 5 ; i++, j++);
printf(“%d %d\n”, i);
}
Output: >>5 5
**Example 3 :**

int i, j;
for( i = 0, j = 10 ; i <= j ; i++, j--){
printf(“%d %d\n”, i);
}
Output: >>0 10
>>1 9
>>2 8
>>3 7
>>4 6
>>5 5
**Example 4:**

int i, j;
for( i = 0, j = 10 ; i < 10, j < 10; ){
printf(“%d %d\n”, i);
}
Output: >>1 1
>>1 1
>>infinity
**Involving function in condition part**

for( ; printf(“%d”,i) ; );

- Involving function can compile without any error in condition part
- function innovation is elevated Boolean true or false, Boolean values are based on return
    value of printf.
- return value of printf is 0, 0 is treated as number and not treated as non-zero.
- “ ;” is presented so it doesn’t have any loop body or empty loop body.

**Example 1:**

int i;
for( i = 0 ; printf(“%d”,i); );
Output: >>0 0 0 0.......infinity

- Return value of printf is based on the number of characters inside the printf, return value of
    printf is 1.
- “ ; “ skipping loop body or empty loop body.


**Example 2:**

int i;
for( i = 1 0 ; printf(“%d \n”,i); );
Output: >> 10
>>1 0
>>infinity

- Return value of printf is based on the number of characters inside the printf, return value of
    printf is 3.
- “ ; “ skipping loop body or empty loop body.

**Involving function in update part**

for( ; ;printf(“%d”,i));

- Involving function can compile without any error in update part.

**Example 1:**

int i;
for( i = 0 ; i < 10 ; printf(“%d ”,i), i++);
Output: >>0 1 2 3 4 5 6 7 8 9

- initialisation part to conditional part to loop body(skyping) to update part(order of evaluation
    left to right) to conditional part again it starts from conditional part it will execute till loop
    termites
- “ ; “ skipping loop body or empty loop body.

**Example 2:**

int i;
for( i = 0 ; i < 10 ; i++, printf(“%d ”,i));
Output: >>1 2 3 4 5 6 7 8 9 10

- initialisation part to conditional part to loop body(skyping) to update part(order of evaluation
    left to right) to conditional part again it starts from conditional part it will execute till loop
    termites
- “ ; “ skipping loop body or empty loop body.

### Nested loop:

When a for loop is pressed inside other loop body is called nested for loop.

for( **i** = 0; **i** < 3; **i** ++){ //outer for loop
for( **j** = 0; **j** < 5; **j** ++){ //inner for loop

- outer for loop and inner for loop must be used different loop counter. (i and j)
- loop start from outer loop, in the 1st iteration of outer loop inner loop will execute.
- when inner loop starts traversing’s execute loop body of inner loop till the its termites, then it
    will return to update part.
- after updating **i** then it will check condition part of outer loop, again inner for loop will
    execute, till the inner loop and outer loop termites.

int i, j;
for( i = 0 ; i < 5 ; i++) **;**
for(j = 0; j < 5; j++)
printf(“%d %d, ”, i, j);
printf(“\n”);


Output: >> 11 , 12, 13, 14
>>21, 22, 23, 24
>>31, 32, 33, 34

- left side number of digit is outer loop, right side number is inner loop.

**Armstrong numbers from 100 to 999**

- Sum of cube of all digits is equal to original number.

#include<stdio.h>
int main(){
int num, cude, d, n, sum = 0;
for(num = 100; num <= 999; num++){
sum = 0;
n = num;
for(n = num; n > 0; n = n/10){
d = n % 10;
cude = d * d * d;
sum = sum + cude;
}if(sum == num){
printf("%d\n", sum);
}
}return 0;
}
**Example 2:**

Program to find sum of digits of number till sum is reduced single dight

#include<stdio.h>
int main(){
int num, cude, d, n, sum = 0;
scanf("%d", &num);
do{
sum = 0;
for(num = num; num > 0; num = num/10){
d = num % 10;
sum = sum + d;
}num = sum;
}while(num >= 10);
printf("%d ",num);
return 0;
}

- Nested loop is used to Prosser multi dimension array.
- Two loop is used to Prosser two-dimension array.
- Three loop is used to Prosser three-dimension array.

**step by step execution**

- It is used in debating.
- it helps to see line by execution by using debating tools.

### Functions

A **function** in C is a **block of code** that performs a specific task. It helps you **organize** your program
into **smaller, manageable pieces** , making it reusable and readable.


**Types of Functions**

There are two main types:

1. **Library Functions** – Predefined (like printf(), scanf(), strlen()).
2. **User-defined Functions** – Created by the programmer.

#### User-defined Functions

There are three **Steps to Use a Function**

1. Function declaration / Function prototype / Function signature.
2. Function invocation / Function call.
3. Function definition.

**Function declaration:**

A **declaration** tells the **compiler** :

1. The **name** of the function
2. The **return type**
3. The **number and type of parameters**

int add(int , int);
int add(int a, int b);

Return type Function parameters

Function name

- Return type can be used int, char and void, depending on code.
- Without using return type in function declaration compiler automatically take int return type.
- In function parameters format arguments are separate by comma “,” there can be multiple
    formal arguments.
- In argument list name of variable is not mandatory but data type is mandatory
- Function name shode be name as related to function for readable to another coder.
- If arguments list empty, then retune type should be void.
- Function declaration always mentioned above main function, if not mentioned it
    automatically takes as int as return type.
- For complier check we need function declaration.

**Function invocation**

This is when you **use** the function in your code — often inside main().

int main() {
int sum = add(10, 20); //Function invocation
printf("Sum is: %d\n", sum);
return 0;
}

- Function invocation passing actually argument to function definition.
- without function involution code inside function never execute.


**Function Definition:**

The **actual body** of the function — the code that does the work.

int add(int a, int b) { //return type function name (formal argument, formal argument)
int c; //function body
c = a + b; //function body //compound statements
return c; //function body
}

- Actual argument values are copied to formal arguments.
- Function definition content’s function declaration and whole code.
- Control start executes from first statement of function body.
- Function can take multiple statements as argument but return only single value.
- If function definition is missed in code, then complier error as linker error.

**Return**

- Return it not mandatory, as soon as control reached return current function termites.
- Control go backs to previse function/ main function/ location from where function is
    involved.
- Function return value to previous function/main function.
- Stack frame of the function is completely destroyed, it means memory of local variables and
    formal arguments are destroy.
- Function invocations are repealed with/ substitute with return value.

**Complete code of struct**

#include <stdio.h>
int add(int a, int b); //Declaration
int main() {
int sum = add(10, 20); //Function call
printf("Sum is: %d\n", sum);
return 0;
}
int add(int a, int b) { //Definition

return a + b;
}

```
Multiple inputs Function task/Data processing Single output
```
### Stack frame

- Stack memory will create while run time.
- Stack frame content of formal variables and local variables.
- While main function is execute then block memory will create for main function.
- In main function while user defined function invocation then user defined function crate block
    of memory on stack is called as stack frame.
- Stack frame crate towards down, in that stack frame memory has created for formal
    agreements and local variables.
- After execution user defined function stack frame of user defined function will be destroy
    from stack.


- After main function execution main function also destroy from stack.

Before execution function While function code execution After execution function

- when ever a new thread is created a block of memory is created in stack area
- stack area for threads, stack frame for function.

**Compiler checks** :

- Compare function declaration with function invocation.
- Compare function declaration with function definition.

```
Comparing
```
```
1) Return type.
2) Number of arguments.
3) Type of each argument.
```
- If number of arguments miss marches will generate compiler error.
- Type miss marches will generate compiler warring.
- Return type miss marches will generate compile warring.

Note:

- In some times compiler error is generated while use struct type.
- when ever function, declaration is missed then the function return type is in struct type
    compiler automatically take return type as int and it will compare with int then it will generate
    compiler error.

#### Library Functions:

**user-defined functions** are functions that the programmer creates to organize and reuse code. These
are **not built-in** like printf() or scanf() — you define them based on what your program needs.

#include<stdio.h> //function declaration
int main(){
printf(“Hello world \n”); //function invocation
}

- Head file(stdio.h) contains of function declaration structure and macros.
- Declaration of user define as pre define function are mentioned above the main().
- Preprocess directives are pressed during compilation at 1st stage which is preprocessing.
- #include<stdio.h> this entry statement is repeated with contact of stdio.h.
- Function memory contains in text segment.

### Explanation of stage of compilation

There are four stages in compilation, by using some flags and options to stop execution in each and
every stage and see output.

- Function declaration of predefine function in stdio.h


- Source code is file which is constants of c statements written by coder.

#### Preprocessing stage

This is the first stage of compilation in this stage.

- In preprocessing stage there is no change with function
    definitions.
- Function is presented in text segment
    1. Replacing preprocess directives
    2. Removing comment lines
    3. Macro substation
    4. condition compilation

To stop compiler at preprocessor stage by using -E

gcc -E sample.c

- By using this flag and option, to see expanded code on
    terminal screen.
- Whenever terminal closed then expanded code will be lost, to overcome this there is an
    operator.

**Redirection operato**

The > is called a redirection operator. It redirects the standard output (stdout) of a command to a file
instead of the terminal.

- Preprocess output file must be in fore of “ **.i** ” example: **sample.i**

gcc -E smaple.c > sample.i

- sample.i file in this format of text.
- printf definition is not present in c code, it presents in three fomes.
    1. Pre-compilation form.
    2. instructions form.
    3. object form.

#### Compilation stage

This is the second stage of compilation in this stage.

- In compilation stage function definitions is replaced with assembly code.
- Function is pressed in text segment.
- To stop compiler at compilation stage by using -S

gcc -s sample.s

- By using this flag and option, directly it will not show on compilation stage output on
    terminal screen.
- compilation stage output file must be in form of “ **.s** ” example: **sample.s**

gcc -S smaple.c > sample.s

- sample.s file in this format of text.


#### Assumable stage

This is the third stage of compilation in this stage.

- In assumable stage function definitions in the form of object code.
- Function is pressed in text segment.
- To stop compiler at assumable stage by using -c

gcc -c sample.o

- By using this flag and option, directly it will not show on assumable stage output on terminal
    screen.
- Assumable stage output file must be in form of “ **.o** ” example: **sample.o**

gcc -c smaple.c > sample.o

- sample.o is not in the format of text, it is in the format of obj, in obj format everything is
    replaced with binary.
- To open binary file objdump.

objdump -s sample.c


