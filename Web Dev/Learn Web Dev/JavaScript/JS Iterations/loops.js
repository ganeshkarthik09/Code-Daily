// ==========================================
// FOR LOOP
// The most common way to run code multiple times.
// ==========================================

/* SYNTAX:
   for (initialization; condition; increment/decrement) {
       // code to execute
   }
*/

for (let i = 0; i <= 10; i++) {
    const element = i;
    
    if (element == 5) {
        // console.log("5 is best number");
    }
    // console.log(element);
}


// ==========================================
// 1. NESTED LOOPS (Loop inside a Loop)
// ==========================================
// Common use: Printing patterns, Multiplication Tables, Matrix/Grid logic.

for (let i = 1; i <= 10; i++) {
    // console.log(`Outer loop value: ${i}`);

    for (let j = 1; j <= 10; j++) {
        // This runs 10 times for EVERY 1 time the outer loop runs.
        // console.log(`Inner loop value ${j} and inner loop ${i}`);
        
        // Printing a Multiplication Table:
        // console.log(`${i} * ${j} = ${i * j}`);
    }
}


// ==========================================
// 2. WORKING WITH ARRAYS
// ==========================================

let myArray1 = ["flash", "batman", "superman"]
// console.log(myArray.length); // 3

// Note: condition must be '<' length, NOT '<='.
// Because index ends at 2, but length is 3. 
// If you use <=, you get 'undefined' at the end.
for (let index = 0; index < myArray1.length; index++) {
    const element = myArray1[index];
    // console.log(element);
}


// ==========================================
// 3. KEYWORDS: BREAK vs CONTINUE
// ==========================================

// --- BREAK ---
// "Stop everything and get out of the loop."
// Used when you find what you were looking for and don't need to finish.

for (let index = 1; index <= 20; index++) {
    if (index == 5) {
        console.log(`Detected 5`);
        break; // Loop DIES here. It will NOT print 5 or anything after.
    }
    console.log(`Value of i is ${index}`);
}


// --- CONTINUE ---
// "Skip just this one time, but keep going."
// Used to ignore specific bad data or conditions.

for (let index = 1; index <= 20; index++) {
    if (index == 5) {
        console.log(`Detected 5`);
        continue; // Skips the code below for THIS turn only.
    }
    console.log(`Value of i is ${index}`);
}

// ==========================================
// WHILE & DO-WHILE LOOPS
// Alternative ways to loop. Cleaner syntax when you don't know the exact end number.
// ==========================================

// 1. WHILE LOOP
// Checks condition FIRST, then executes.
// Syntax: while (condition) { ... }

let index = 0
while (index <= 10) {
    // console.log(`Value of index is ${index}`);
    index = index + 2 // Increment is crucial! Otherwise -> Infinite Loop.
}


// --- Working with Arrays ---
let myArray = ['flash', "batman", "superman"]
let arr = 0

while (arr < myArray.length) {
    // console.log(`Value is ${myArray[arr]}`);
    arr = arr + 1
}


// ==========================================
// 2. DO-WHILE LOOP (The Special Case)
// ==========================================
// Executes FIRST, then checks condition.
// Guarantee: It will always run AT LEAST ONE TIME.

let score = 11

do {
    console.log(`Score is ${score}`);
    score++
} while (score <= 10);

/* OUTPUT ANALYSIS:
   Output: "Score is 11"
   Why? 
   1. It enters the 'do' block immediately.
   2. Prints 11.
   3. Increases score to 12.
   4. Checks condition (12 <= 10) -> FALSE.
   5. Loop stops.
   
   If this was a normal while loop, it would print NOTHING.
*/