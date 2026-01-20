// ==========================================
// SCOPE (Global vs Block)
// ==========================================

// 1. GLOBAL SCOPE
// Variables defined here are available everywhere.
var c = 300 
let a = 300 

if (true) {
    // 2. BLOCK SCOPE (Inside {})
    // Only 'let' and 'const' respect this boundary.
    
    let a = 10;   
    // ^ This is a COMPLETELY NEW variable. 
    // It is separate from the 'a' outside (Shadowing).
    
    const b = 20; 
    // ^ Exists only inside these brackets {}.
    
    c = 30;       
    // ^ DANGER: Since 'var' doesn't care about block scope, 
    // this line reaches OUTSIDE and changes the global 'c'.
    
    console.log("INNER a: ", a); // Output: 10
}


// ==========================================
// 3. OUTSIDE THE BLOCK
// ==========================================

console.log(a); 
// Output: 300 
// Why? Because the 'a' inside the block (10) died when the block ended.
// We are now printing the global 'a'.

// console.log(b); 
// ^ ERROR: b is not defined. 
// Why? 'b' was const inside the block. It cannot be accessed outside.

console.log(c); 
// Output: 30 
// Why? Because 'var' (or just c = 30) ignored the block boundary 
// and overwrote the original value of 300.


/* SUMMARY INTERVIEW ANSWER:
   - let/const: Block Scoped. They stay inside the {}. Safe.
   - var: Function Scoped (or Global). It "leaks" out of if-statements and loops.
          It creates bugs because you might accidentally change a variable 
          you didn't mean to.
*/

// ==========================================
// NESTED SCOPE (Lexical Scoping)
// "The Ice Cream Rule"
// ==========================================

function one() {
    const username = "Ganesh";

    function two() {
        const website = "YouTube";
        
        // --- CHILD ACCESSING PARENT (Allowed) ---
        // Function 'two' is INSIDE 'one'.
        // It can "look up" and see variables defined in 'one'.
        console.log(username); 
    }
    
    // --- PARENT ACCESSING CHILD (Not Allowed) ---
    // console.log(website); 
    // ^ ERROR: ReferenceError: website is not defined.
    // 'website' is created inside 'two' and DIES when 'two' finishes.
    // 'one' cannot see inside 'two'.

    two(); // Executes the inner function
}

one();


// ==========================================
// EXAMPLE 2: IF STATEMENTS (Same Logic)
// ==========================================

if (true) {
    const username = "Ganesh"
    
    if (username === "Ganesh") {
        const website = " youtube"
        
        // Inside accessing Outside -> OK
        console.log(username + website); // "Ganesh youtube"
    }
    
    // Outside accessing Inside -> ERROR
    // console.log(website); 
}

// Global accessing Block -> ERROR
// console.log(username);


/* SUMMARY - LEXICAL SCOPING:
   1. Inner functions can access variables of Outer functions.
   2. Outer functions CANNOT access variables of Inner functions.
   3. Scope Chain: JS looks for the variable inside current scope. 
      If not found, it goes up one level (parent). 
      If still not found, it goes up to Global. 
      If not in Global -> Error.
*/