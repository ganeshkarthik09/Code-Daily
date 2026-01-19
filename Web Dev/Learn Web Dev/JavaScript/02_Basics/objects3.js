// ==========================================
// OBJECTS IN JAVASCRIPT (Part 1)
// ==========================================

// There are two ways to declare objects:
// 1. Literal (Non-Singleton)
// 2. Constructor (Singleton) -> Object.create

// --- SYMBOL DECLARATION (Interview Question) ---
// Question: How do you use a Symbol as a key in an Object?
const mySym = Symbol("key1")


// --- 1. OBJECT LITERALS ---
const jsUser = {
    name: "Ganesh",
    "fullName": "Ganesh Karthik", // Key with space requires quotes
    [mySym]: "mykey1",              // Syntax [ ] is needed for Symbols!
    age: 18,
    location: "Jaipur",
    email: "ganesh@google.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}


// --- 2. ACCESSING VALUES ---

// Method A: Dot Notation (Most Common)
console.log(jsUser.email);

// Method B: Bracket Notation (Important!)
console.log(jsUser["email"]);
// Why use brackets?
// 1. If key has spaces: jsUser.fullName fails. jsUser["fullName"] works.
// 2. For Symbols: jsUser[mySym] is the ONLY way to access it.

console.log(jsUser["fullName"]);
console.log(jsUser[mySym]); 


// --- 3. MODIFYING VALUES ---

jsUser.email = "ganesh@chatgpt.com"; // Overwrite value
// Object.freeze(jsUser); // Locks the object. No changes allowed after this.

jsUser.email = "ganesh@microsoft.com"; // This won't work if frozen
console.log(jsUser);


// --- 4. ADDING FUNCTIONS ---
// Functions are treated as variables in JS.

jsUser.greeting = function() {
    console.log("Hello JS User");
}

jsUser.greetingTwo = function() {
    // 'this' keyword refers to the current object (jsUser)
    console.log(`Hello JS User, ${this.name}`);
}

console.log(jsUser.greeting()); 
console.log(jsUser.greetingTwo());


/* INTERVIEW TIP (Symbols):
   If you write:  mySym: "mykey1" (without brackets)
   It becomes a normal String key, not a Symbol.
   You MUST use [mySym] to tell JS it's a Symbol.
*/