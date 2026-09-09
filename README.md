# L-ASM
Custom Assembly Interpreter & Emulator in C++

This program is a lightweight interpreter and emulator for a custom, low-level assembly-like programming language. It allows users to dynamically input commands via the console, store them in parallel data structures, perform syntax and boundary checks, and execute the compiled code within a virtual machine environment.

The codebase spans 2236 lines of code and operates on a continuous command-line loop.

Data Architecture

The engine uses multiple synchronized std::list containers to map different components of a single instruction to the same index (indexc or rindexc):

coms: Stores the operation names (e.g., MOV, ADD, OUT).
letter1 / letter2: Stores operand types (R for register, N for number, M for memory, S for string).
nums1 / nums2: Stores raw numeric values (register IDs, memory slots, or literal constants).
stg: Stores literal string constants.

Hardware Simulation Specs:

reg: An array of 32 floating-point registers (float) for mathematical contexts.
memp: An array of 32 memory slots (std::string) for text-based variables.

Operating Modes

Upon startup, the program prompts the user with launch/code to select one of two primary states:

1. Code Mode (code)

Allows the user to write an assembly program line-by-line.
Each instruction goes through immediate validation. Invalid operand signatures or register boundaries outside the 0–32 range trigger the uncoms error counter.
Writing is finalized by entering the END instruction.
Once END is reached, the user is asked whether to enter advanced mode (copilot). Replying yes prints a complete memory dump of all parallel lists. If syntax errors were captured during input, compilation is safely aborted (Aborted).

2. Launch Mode (launch)

Handles the execution of successfully parsed code blocks.
Displays available entry points and their corresponding program size metrics.
Prompts the user to supply an index (prgch) to define the starting instruction for execution.

ISA (Instruction Set Architecture) Reference

General Instructions

MOV     R [dest_reg]   [R/N] [src_reg/num]   : Copies a numeric constant or a register value into a target register.
STORE   M [dest_mem]   [M/S] [src_mem/string]: Saves a text string or transfers data between memory addresses.
IN      [R/M]          [index]               : Pauses execution to accept a runtime console input into a register or memory slot.
OUT     [R/M/N/S]      [value]               : Prints the content of a register, a memory slot, a raw number, or a string literal to the console.
END                                          : Terminates program execution.

Arithmetic Operations (Exclusive to Registers)

ADD     R [dest] [R/N] [operand]       : Adds the operand to the destination register.
SUB     R [dest] [R/N] [operand]       : Subtracts the operand from the destination register.
MUL     R [dest] [R/N] [operand]       : Multiplies the destination register by the operand.
DIV     R [dest] [R/N] [operand]       : Divides the destination register by the operand.
INC     R [reg]                        : Increments the value of the specified register by 1.
DEC     R [reg]                         : Decrements the value of the specified register by 1.

Branching and Control Flow

CMP     [R/M] [op1] [R/N/M/S] [op2]       : Evaluates two values against each other, configuring system flags (cmp1 through cmp6).
JMP     [index]                           : Unconditionally shifts execution to the specified instruction index.
JEQ     [index]                           : Conditional jump (==) that executes only if the respective CMP flag evaluates to true.
JNE     [index]                           : Conditional jump (!=) that executes only if the respective CMP flag evaluates to true.
JLT     [index]                           : Conditional jump (<)  that executes only if the respective CMP flag evaluates to true.
JGT     [index]                           : Conditional jump (>)  that executes only if the respective CMP flag evaluates to true.
JLE     [index]                            : Conditional jump (<=) that executes only if the respective CMP flag evaluates to true.
JGE     [index]                           : Conditional jump (>=) that executes only if the respective CMP flag evaluates to true.

Limits and System Fail-Safes

Infinite Loop Prevention: The execution sequence tracks runtime steps using an inf counter. If a program hits more than 100,000 continuous operations, it shifts execution pointers forward and logs an inf error.
System Backdoor Trigger: While processing an IN instruction, providing the inputs 4320 or "4320" trips a hidden condition. The terminal outputs system code actived and breaks out of the evaluation loop immediately.
Overflow Boundary Check: Input values processed through IN are monitored against a threshold of 99999999999999999. Exceeding this boundary resets the respective register to 0 and throws a Bigger then limits error.
