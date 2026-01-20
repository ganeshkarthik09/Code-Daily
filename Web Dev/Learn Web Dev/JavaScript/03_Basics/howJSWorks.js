// ==========================================
// HOW JAVASCRIPT EXECUTES CODE
// (Execution Context + Call Stack)
// ==========================================

/* When you run a JS file, the engine creates a 
   "Global Execution Context" (GEC).
   
   It puts this GEC into a variable called 'this'.
   - Browser: 'this' is Window Object.
   - Node.js: 'this' is {} (Empty Object).
*/


// --- THE 2 PHASES OF EXECUTION ---
// Every time code runs, it happens in two phases:

// PHASE 1: Memory Creation Phase (Creation Phase)
// - JS scans the code.
// - Allocates memory for variables/functions.
// - Variables get 'undefined'.
// - Functions get their full definition code.

// PHASE 2: Execution Phase
// - JS runs the code line by line.
// - Assigns actual values to variables.
// - Executes function calls.


// --- CODE EXAMPLE TO TRACE ---
let val1 = 10;
let val2 = 5;

function addNum(num1, num2) {
    let total = num1 + num2;
    return total;
}

let result1 = addNum(val1, val2);
let result2 = addNum(10, 2);


/* ==========================================
   STEP-BY-STEP TRACE (How the engine sees it)
   ==========================================
   
   1. GLOBAL EXECUTION CONTEXT (Created & pushed to Stack)
      
   2. MEMORY PHASE (First Pass - Scanning)
      - val1   -> undefined
      - val2   -> undefined
      - addNum -> definition { ...code... }
      - result1 -> undefined
      - result2 -> undefined

   3. EXECUTION PHASE (Second Pass - Running)
      - val1 = 10
      - val2 = 5
      - addNum is skipped (definition already stored)
      
      - Line: result1 = addNum(val1, val2)
        --> NEW "Function Execution Context" is created!
        --> A new "Sandbox" opens for this function.
        
        INSIDE addNum(10, 5):
          A. Memory Phase (for this function):
             - val1 (param) -> undefined
             - val2 (param) -> undefined
             - total        -> undefined
             
          B. Execution Phase (for this function):
             - num1 = 10
             - num2 = 5
             - total = 15
             - return total (Returns 15 to the parent context)
        
        --> "Sandbox" is DESTROYED (deleted from memory).
        --> result1 = 15

   4. Line: result2 = addNum(10, 2)
      --> REPEAT process (New sandbox, new memory phase, new execution).
      --> result2 = 12
*/


// ==========================================
// THE CALL STACK (LIFO - Last In, First Out)
// ==========================================

/*
  Imagine a stack of plates.
  1. Global Context is at the bottom.
  2. one() is called -> Placed on top.
  3. two() is called -> Placed on top of one().
  4. two() finishes -> Removed (Popped).
  5. one() finishes -> Removed (Popped).
*/

function one() {
    console.log("one");
    two();
}
function two() {
    console.log("two");
    three();
}
function three() {
    console.log("three");
}

one(); 
// Stack Trace:
// |  three() | <--- Top (Runs first, finishes first)
// |   two()  |
// |   one()  |
// |  GLOBAL  | <--- Bottom