// ==========================================
// CONTROL FLOW IN JAVASCRIPT
// ==========================================

// 1. IF - ELSE
// Basic logic to execute code based on conditions.

const isUserLoggedIn = true;
const temperature = 41;

// Comparison Operators:
// <, >, <=, >=, == (value check), === (value + type check), !=, !==

if (temperature === 40) {
    console.log("Temperature is exactly 40");
} else {
    console.log("Temperature is NOT 40");
}

console.log("This always runs"); // Outside the block


// 2. SHORT HAND NOTATION (Implicit Scope)
// Readable for one line, but messy for two.
const balance = 1000;

// if (balance > 500) console.log("test"); // Allowed
// if (balance > 500) console.log("test"), console.log("test2"); // NOT RECOMMENDED (Bad Readability)


// 3. NESTING (Multiple Conditions)
if (balance < 500) {
    console.log("Less than 500");
} else if (balance < 750) {
    console.log("Less than 750");
} else if (balance < 900) {
    console.log("Less than 900");
} else {
    console.log("Less than 1200");
}


// 4. LOGICAL OPERATORS (&&, ||)
// && (AND): All conditions must be true.
// || (OR):  At least one condition must be true.

const userLoggedIn = true
const debitCard = true
const loggedInFromGoogle = false
const loggedInFromEmail = true

if (userLoggedIn && debitCard) {
    console.log("Allow to buy course");
}

if (loggedInFromGoogle || loggedInFromEmail) {
    console.log("User logged in");
}


// ==========================================
// 5. SWITCH STATEMENT
// (Used when checking one value against many cases)
// ==========================================

const month = 3; // March

switch (month) {
    case 1:
        console.log("January");
        break; 
        // BREAK is important! 
        // If you miss it, code "falls through" and executes the NEXT case too.
    case 2:
        console.log("February");
        break;
    case 3:
        console.log("March");
        break;
    case 4:
        console.log("April");
        break;
    default:
        console.log("Default case matched");
        break;
}

/* INTERVIEW TIP (Switch Fallthrough):
   If you match case 3 but forget the 'break', 
   JS will also execute case 4 and default! 
   (It executes everything BELOW the match until it hits a break or ends).
*/
// ==========================================
// TRUTHY & FALSY VALUES
// ==========================================

const userEmail = [] // Empty Array

// In JS, we don't need to check (userEmail.length > 0) sometimes.
// We can just check the variable itself.

if (userEmail) {
    console.log("Got user email");
} else {
    console.log("Don't have user email");
}


// --- 1. FALSY VALUES (Memorize these 8) ---
// These are the ONLY values that are considered false.
/*
    1. false
    2. 0
    3. -0
    4. BigInt 0n
    5. "" (Empty string)
    6. null
    7. undefined
    8. NaN
*/

// --- 2. TRUTHY VALUES (Everything else) ---
// Surprising ones that are actually TRUE:
/*
    1. "0"       (String with zero)
    2. "false"   (String with text "false")
    3. " "       (String with space)
    4. []        (Empty Array)
    5. {}        (Empty Object)
    6. function(){} (Empty Function)
*/


// ==========================================
// 3. HOW TO CHECK FOR EMPTY ARRAYS & OBJECTS
// ==========================================

// Checking Array:
const myArr = []
if (myArr.length === 0) {
    console.log("Array is Empty");
}

// Checking Object:
const emptyObj = {}
// Object.keys(emptyObj) returns an Array of keys [].
if (Object.keys(emptyObj).length === 0) {
    console.log("Object is Empty");
}


// ==========================================
// 4. NULLISH COALESCING OPERATOR (??)
// ==========================================
// Designed to handle 'null' and 'undefined' ONLY.
// It is different from OR (||).

let val1;
// val1 = 5 ?? 10      // -> 5
// val1 = null ?? 10   // -> 10 (Safety fallback)
// val1 = undefined ?? 15 // -> 15

// TRICKY CASE:
val1 = null ?? 10 ?? 20 // -> 10 (Takes the first real value)

console.log(val1);


// ==========================================
// 5. TERNARY OPERATOR (Shorthand If-Else)
// ==========================================
// Syntax: condition ? true : false

const iceTeaPrice = 100
iceTeaPrice >= 80 ? console.log("Too expensive") : console.log("Cheap");


// ==========================================
// BONUS: INTERVIEW COMPARISONS
// ==========================================
// false == 0   -> true
// false == ''  -> true
// 0 == ''      -> true

