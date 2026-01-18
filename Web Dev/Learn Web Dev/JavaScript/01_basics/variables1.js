// 1. const: Used for values that should NEVER change.
// "Memory" is allocated and locked for this value.
const accountId = 14689;

// 2. let: The modern standard for variables that might change.
// It has "Block Scope" (it only lives inside the {} where it is defined).
let accountEmail = "gani@gmail.com";

// 3. var: The old way (pre-2015).
// It has "Function Scope" but ignores block scope (like if-statements or loops).
var accountPassword = "79";

accountCity = "NKD"; // 4. No Keyword: Creates a "Global" variable (avoid this!).

// 5. Uninitialized Variable: Declared but no value given yet.
// JavaScript automatically assigns the value 'undefined' to this.
let accountSate;

/* Prefer not to use var because of issue in block scope and functional scope . This is the main reason we switched to 'let' in ES6. */


// accountId = 2
// ^ ERROR: You cannot assign a new value to a 'const' variable.

accountEmail = "smg@gmail.com"; 
accountPassword = "123"; 
accountCity = "HYD"; // Allowed (global/no keyword)

// Prints a single value to the console
console.log(accountId);

/*
   console.table:
   A fantastic way to debug multiple variables at once.
   It organizes the data into an Index/Value table for easy reading.
*/
console.table([
    accountId, // 14689 (unchanged)
    accountEmail, // "smg@gmail.com" (updated)
    accountPassword, // "123" (updated)
    accountCity, // "HYD" (updated)
    accountSate, // undefined (never assigned a value)
]);
