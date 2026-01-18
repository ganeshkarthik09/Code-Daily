/* ======================================================
   STRINGS IN JAVASCRIPT
   Primitives (Stack Memory) | Immutable
   ====================================================== */

const name = "Ganesh"
const repoCount = 3

// 1. OLD WAY (Concatenation) - Avoid this
// console.log(name + " has " + repoCount + " repositories");

// 2. MODERN WAY (Template Literals / String Interpolation)
// Uses backticks (`) and ${} to inject variables.
console.log(`Hello my name is ${name} and my repo count is ${repoCount}`);


// 3. DECLARING AS OBJECT (The "new" keyword)
// Gives you extra control, but rarely used directly.
const gameName = new String('gnu09')

// Accessing keys
console.log(gameName[0]); // Output: 'h'
console.log(gameName.__proto__); // Output: {} (Shows the prototype object)


// ======================================================
// 4. IMPORTANT STRING METHODS
// ======================================================

// Length
console.log(gameName.length); 

// Case Change (Original string remains unchanged!)
console.log(gameName.toUpperCase()); // "HITESH-HC-COM"

// Finding Characters
console.log(gameName.charAt(2));  // 't' (Character at index 2)
console.log(gameName.indexOf('t')); // 2 (Index of character 't')


// SLICING (Extracting parts of string)
// ------------------------------------

// substring(start, end): Does NOT accept negative values.
const newString = gameName.substring(0, 4) 
console.log(newString); // "hite" (Last index 4 is excluded)

// slice(start, end): ACCEPTS negative values (starts from reverse).
const anotherString = gameName.slice(-8, 4) 
console.log(anotherString); 


// CLEANING & REPLACING
// --------------------

// trim(): Removes starting and ending spaces (Used for user input/passwords)
const newStringOne = "   ganesh    "
console.log(newStringOne);        // "   ganesh    "
console.log(newStringOne.trim()); // "ganesh"

// replace(): Replaces search term with new term
const url = "https://hitesh.com/hitesh%20choudhary"
console.log(url.replace('%20', '-')) // "https://hitesh.com/hitesh-choudhary"

// includes(): Asking questions (True/False)
console.log(url.includes('sundar')) // false
console.log(url.includes('hitesh')) // true


// CONVERTING TO ARRAY
// -------------------
// split(separator): Splits string based on a character (like space or dash)
const str = "ganesh-hc-com"
console.log(str.split('-')); 
// Output: [ 'hitesh', 'hc', 'com' ]