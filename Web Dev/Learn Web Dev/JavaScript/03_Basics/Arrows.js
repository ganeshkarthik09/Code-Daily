// ==========================================
// 1. THE 'this' KEYWORD
// ==========================================

const user = {
    userName: "Ganesh",
    price: 79,

    welcomeMessage: function() {
        // 'this' refers to the CURRENT CONTEXT (The object invoking the function)
        console.log(`${this.userName}, welcome to website`);
        
        // Prints the whole object because we are inside it
        console.log(this); 
    }
}

// Case 1: Standard Call
user.welcomeMessage(); 
// Output: "Ganesh, welcome..." (Context is 'user' object)

// Case 2: Context Change
user.userName = "SR";
user.welcomeMessage(); 
// Output: "SR, welcome..." 
// Why? Because 'this' just points to the current memory. 
// Since we changed the value in memory, 'this' sees the new value.


// --- GLOBAL 'this' (Interview Question) ---
console.log(this); 

/* OUTPUT DIFFERENCE:
   1. In Node.js (Here): Output is {} (Empty Object).
   2. In Browser (Chrome): Output is Window Object (Global Window).
   
   Why? In the browser, the global object is the Window. 
   In Node, it's an empty module export by default.
*/


// ==========================================
// 2. ARROW FUNCTIONS (ES6)
// ==========================================

// Traditional Function
/*
function chai() {
    let username = "Ganesh"
    console.log(this.username); 
    // Output: undefined!
    // Why? 'this' context works in Objects, but NOT alone inside functions in Node.
}
*/

// --- ARROW FUNCTION SYNTAX ---
// Remove 'function', add '=>' after parameters.

const chai = () => {
    let username = "Ganesh"
    console.log(this); // Output: {} (Inherits from Global scope in Node)
}
chai();


// ==========================================
// 3. TYPES OF ARROW FUNCTIONS
// ==========================================

// Type A: Explicit Return (Basic)
// If you use curly braces {}, you MUST write 'return'.
const addTwo = (num1, num2) => {
    return num1 + num2
}


// Type B: Implicit Return (Professional)
// If it's one line, you can remove {} and 'return'.
// The value is automatically returned.
const addTwoImplicit = (num1, num2) => num1 + num2


// Type C: Returning an Object (Tricky!)
// You cannot just write { username: "Ganesh" } because JS thinks {} is the function block.
// FIX: Wrap it in parentheses ().
const returnObj = () => ({ username: "Ganesh" })

console.log(returnObj());