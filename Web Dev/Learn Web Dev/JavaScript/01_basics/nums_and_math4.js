// ==========================================
// 1. NUMBERS IN JAVASCRIPT
// ==========================================

const score = 400
console.log(score); // 400

// Explicitly defining a Number object
// This gives you access to more properties in the console
const balance = new Number(100)
console.log(balance); // [Number: 100]


// --- IMPORTANT METHODS ---

// 1. toString(): Converts number to string
// Now you can use string methods like .length
console.log(balance.toString().length); // 3

// 2. toFixed(digits): formatting decimal points
// Used HEAVILY in E-commerce apps (e.g., prices)
console.log(balance.toFixed(2)); // "100.00"

// 3. toPrecision(total_digits): 
// Focuses on TOTAL significant digits, not just decimals.
// Be careful: It might round up or use exponential notation!
const otherNumber = 123.8966

console.log(otherNumber.toPrecision(3)); // "124" (Rounded up)
console.log(otherNumber.toPrecision(4)); // "123.9"


// 4. Large Numbers (Readability)
const hundreds = 1000000
// toLocaleString(): Adds commas based on standard
console.log(hundreds.toLocaleString());          // "1,000,000" (US Standard)
console.log(hundreds.toLocaleString('en-IN'));   // "10,00,000" (Indian Standard)


// ==========================================
// 2. MATH LIBRARY (Built-in Object)
// ==========================================

console.log(Math); // Object [Math] {}

// Absolute value (Converts negative to positive)
console.log(Math.abs(-4)); // 4

// Rounding
console.log(Math.round(4.6)); // 5 (Standard rounding)
console.log(Math.ceil(4.2));  // 5 (Ceiling -> Top/Max value)
console.log(Math.floor(4.9)); // 4 (Floor -> Bottom/Lowest value)

// Min and Max (Finding lowest/highest in a list)
console.log(Math.min(4, 3, 6, 8)); // 3
console.log(Math.max(4, 3, 6, 8)); // 8


// ==========================================
// 3. MATH.RANDOM() - MOST IMPORTANT
// ==========================================

console.log(Math.random()); 
// Output: A random number between 0 (inclusive) and 1 (exclusive).
// Example: 0.123456... or 0.9999...

console.log((Math.random() * 10) + 1);
// * 10: Moves the decimal (0.1 -> 1.0)
// + 1: Ensures we never get 0 (Minimum becomes 1)
// Math.floor: Removes decimals to get clean integers


// --- THE GOLDEN FORMULA ---
// How to generate a random number between a specific Range (min and max)

const min = 10
const max = 20

console.log(Math.floor(Math.random() * (max - min + 1)) + min)

/*
   BREAKDOWN OF FORMULA:
   1. (max - min + 1) => Finds the range size (e.g., 20-10+1 = 11 possibilities)
   2. Math.random() * range => Gives random float inside that range
   3. Math.floor(...) => Removes decimals
   4. + min => Shifts the start point from 0 to 'min' (10)
*/