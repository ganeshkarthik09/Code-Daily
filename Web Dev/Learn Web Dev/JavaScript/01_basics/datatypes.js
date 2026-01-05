// ==========================================
// 1. ENVIRONMENT & STANDARDS
// ==========================================

"use strict"; //Treat all JS code as newer version
// This enables "Strict Mode". It prevents you from using undeclared variables
// and throws errors for unsafe actions (like writing to read-only properties).

// alert("Hello") ---> We are using node js not a browser
// Explanation: 'alert' is a method of the 'window' object, which exists only in browsers.
// Node.js is a server-side environment, so it doesn't have a 'window'.

console.log(6 + 3);

console.log("Gani"); //Use ; for better readability
// ASI (Automatic Semicolon Insertion) exists in JS, but manual ';' is best practice
// to avoid rare but confusing bugs.

// ==========================================
// 2. DATA TYPES & MEMORY
// ==========================================

let name = "gani"; //String --> " "
let age = 20; //int (In JS, this is just 'Number')
let isLoggedIn = false; //Boolean --> true/false
let state = null;

// number  => 2 to power 53
// (If you need numbers bigger than this, use 'BigInt')

// null --> standalone value
// It is a representation of "Empty Value". It is NOT 0, it is NOT undefined.
// It is intentionally empty.

// undefined -->
// Variable is declared, but no value has been assigned yet.

// symbol --> unique
// Used heavily in React/Libraries to identify unique components.

// Two types of data types one is premitive and another is non premitive based on accessing memory

// A) Primitive -> call by value (Stored in STACK Memory)
// When you copy them, you get a COPY. Changing the copy doesn't change the original.
// Types: String, Number, Boolean, Null, Undefined, Symbol, BigInt.

// B) Non premitive -> call by refference (Stored in HEAP Memory)
// When you copy them, you get a REFERENCE (pointer). Changing one changes the original.
// Types: Array, Objects, Functions.

//Object

console.log(typeof null); //Object
// ^^^ IMPORTANT INTERVIEW Q: This is a known "bug" in JavaScript that was never fixed.
// Ideally, it should be 'null', but it returns 'object'.

console.log(typeof undefined); //Undefined

// ==========================================
// 3. TYPE CONVERSION (Coercion)
// ==========================================

let score = "22abc";
let vari = null;

console.log(typeof score);
console.log(typeof score);

let valueInNumber = Number(score);
console.log(typeof valueInNumber); // 'number'
console.log(valueInNumber); 
// Output: NaN (Not a Number).
// Special Note: The TYPE of NaN is actually 'number'. Confusing, but true.

console.log(Number(vari)); 
// Output: 0. (Number(null) converts to 0)

// Quick Summary of Number() conversion:
// "33" --> 33
// "22abc" ---> NaN
// true -> 1 ; false -> 0
// null -> 0
// undefined -> NaN

let isLogIn = "gani"; 
// Boolean Conversion Rules:
// 1 --> true 
// 0 --> false
// "" (Empty String) --> false
// "String" (Non-empty) --> true

let BooleanisLoggIn = Boolean(isLogIn);
console.log(BooleanisLoggIn);

let someNum = 33;
let StringNumber = String(someNum);
console.log(StringNumber);
console.log(typeof StringNumber); // string

// ==========================================
// 4. OPERATIONS
// ==========================================

let value = 39;
let negVal = -value;
console.log(negVal);

// Arithmetic
console.log(2 * 2);
console.log(2 ** 2); // Power (Exponentiation). 2^2 = 4
console.log(2 / 2);
console.log(2 % 2); // Modulus (Remainder). Very useful for even/odd logic.

let str1 = "ganesh";
let str2 = " karthik";
let str3 = str1 + str2;
console.log(str3);

// The "Tricky" String Coercion
console.log("1" + 2);     // "12"
console.log(1 + "2");     // "12"
console.log("1" + "2");   // "12"

console.log("1" + 2 + 2); 
// Output: "122"
// Why? If String is FIRST, everything after it is treated as String.

console.log(1 + 2 + "2");
// Output: "32"
// Why? Math happens first (1+2=3), THEN string concatenation ("3" + "2").

console.log(+true); //op --> 1 (The '+' converts boolean to number)
console.log(+" ");  //op --> 0 (Empty space converts to 0)

// Prefix and postfix operator
// let x = 3;
// y = x++; // Postfix: y is 3, then x becomes 4 (Usage first, then increment)
// y = ++x; // Prefix:  x becomes 4, then y is 4 (Increment first, then usage)

// ==========================================
// 5. COMPARISON
// ==========================================

console.log("2" > 1);  // true (String "2" becomes number 2)
console.log("02" > 1); // true

// Make sure that both the elements are of same type before comparing
// These are "Unpredictable Results" - avoid in real code.
console.log(null > 0);  // false
console.log(null == 0); // false 
console.log(null >= 0); // true

// equality check == and comparision > < <= >= work differently
// Comparison converts null to a number treating it as 0
// Thats why null >= 0 is true and null > 0 is false.
// However, equality check (==) works differently for null (it only equals null or undefined).

// === STRICT CHECK
// Checks Value AND Data Type
console.log("2" === 2); // false (String is not equal to Number)

// ==========================================
// NON-PRIMITIVE DATA TYPES (Reference Types)
// Stored in HEAP Memory. Access is by Reference.
// ==========================================

// 1. ARRAYS (Collection of items)
// syntax: const name = [item1, item2, ...];

const heroes = ["Shaktiman", "Naagraj", "Doga"];
const marks = [98, 85, 91, 76];
const mixed = ["Ganesh", 20, true, null]; // JS arrays can hold mixed types

// Accessing Array Elements
console.log(heroes[0]); // Output: Shaktiman (Index starts at 0)
console.log(heroes.length); // Output: 3

// Modifying Array
heroes[1] = "Krish"; // "Naagraj" is replaced by "Krish"
console.log(heroes); 

// ==========================================

// 2. OBJECTS (Key-Value Pairs)
// syntax: const name = { key: value, ... };
// Most important data type in JS.

let myObj = {
    name: "Ganesh",
    age: 22,
    city: "Hyderabad",
    isStudent: true,
    "full address": "Hitech City, Hyd" // Key with space must be in quotes
}

// Accessing Object Values
console.log(myObj.name);        // Dot Notation (Common)
console.log(myObj["city"]);     // Bracket Notation (Useful for dynamic keys)
console.log(myObj["full address"]); // MUST use brackets for keys with spaces

// Modifying Object
myObj.age = 23; 
console.log(myObj);

// ==========================================

// 3. FUNCTIONS (Variables that hold code)
// Functions in JS can be treated like variables.

// Function Definition
const myFunction = function(){
    console.log("Hello World");
}

// Function Call (Execution)
myFunction(); 
/* ======================================================
Return value of typeof operator
======================================================

1. Primitive Data Types:
   -----------------------------------------------
   * Number        => "number"
   * String        => "string"
   * Boolean       => "boolean"
   * null          => "object"  (Interview Trick: This is a known JS bug)
   * undefined     => "undefined"
   * Symbol        => "symbol"
   * BigInt        => "bigint"

2. Non-Primitive (Reference) Data Types:
   -----------------------------------------------
   * Arrays ([])   => "object"  (Arrays are technically Objects in JS)
   * Objects ({})  => "object"
   * Functions     => "function" (Technically "object function")
*/

// Example Proofs:
console.log(typeof "Ganesh");       // string
console.log(typeof 42);             // number
console.log(typeof null);           // object
console.log(typeof undefined);      // undefined
console.log(typeof []);             // object
console.log(typeof function(){});   // function
/* ======================================================
   MEMORY STORAGE IN JAVASCRIPT: Stack vs Heap
   ======================================================

   1. Stack Memory (Primitive Types)
   ------------------------------------------------------
   * Who uses it?  => String, Number, Boolean, null, undefined, Symbol, BigInt
   * How it works? => It gives you a COPY of the value.
   * Result:       => Changing the copy DOES NOT change the original.
*/

// --- Stack Example ---
let myYoutubename = "hiteshchoudharydotcom";
let anothername = myYoutubename; // You get a fresh COPY of the value

anothername = "chaiaurcode"; // Changing the copy

console.log(myYoutubename); // Output: "hiteshchoudharydotcom" (Original remains same)
console.log(anothername);   // Output: "chaiaurcode" (Only copy changed)


/* 2. Heap Memory (Non-Primitive Types)
   ------------------------------------------------------
   * Who uses it?  => Arrays, Objects, Functions
   * How it works? => It gives you a REFERENCE (Pointer) to the original value.
   * Result:       => Changing the copy ALSO CHANGES the original.
*/

// --- Heap Example ---
let userOne = {
    email: "user@google.com",
    upi: "user@ybl"
};

let userTwo = userOne; // You get a REFERENCE to the same memory address

userTwo.email = "ganesh@google.com"; // Changing data via the second variable

console.log(userOne.email); // Output: "ganesh@google.com" (Original changed!)
console.log(userTwo.email); // Output: "ganesh@google.com"

/*
   Takeaway:
   - Primitives go to Stack => Safe to copy.
   - Objects go to Heap    => Be careful, they are shared!
*/