// ==========================================
// HIGH ORDER ARRAY LOOPS (Part 1)
// ==========================================

// 1. FOR...OF LOOP
// Best for Arrays and Strings. 
// It gives you the VALUE directly (no need to type arr[i]).

const arr = [1, 2, 3, 4, 5]

for (const num of arr) {
    // console.log(num); // Output: 1, 2, 3...
}

const greetings = "Namaste"
for (const greet of greetings) {
    // console.log(`Each char is ${greet}`); // Output: N, a, m...
}


// ==========================================
// 2. MAP (Data Structure)
// ==========================================
/*
   What is a Map?
   - Like an Object, but remembers the ORDER of insertion.
   - Keys can be ANY type (even arrays or objects), unlike Objects where keys are strings/symbols.
   - No duplicate keys allowed (Unique keys).
*/

const map = new Map()

// Setting values: map.set(key, value)
map.set('IN', "India")
map.set('USA', "United States of America")
map.set('Fr', "France")
map.set('IN', "India") // Duplicate! This will be ignored.

console.log(map);


// --- LOOPING OVER MAPS ---

// Loop 1: Grab everything (returns array [key, value])
for (const key of map) {
    console.log(key); // Output: ['IN', 'India']
}

// Loop 2: Destructuring (Grab key and value separately)
// This is the syntax you must remember!
for (const [key, value] of map) {
    console.log(key, ':-', value);
}


// ==========================================
// 3. CAN WE USE FOR...OF ON OBJECTS?
// ==========================================

const myObject = {
    game1: 'NFS',
    game2: 'Spiderman'
}

/* for (const [key, value] of myObject) {
    console.log(key, ':-', value);
}
*/

// ERROR: myObject is not iterable!
// 'for...of' works on Arrays, Maps, Strings. 
// It does NOT work on plain Objects.
// For Objects, we use 'for...in' (Coming next).
// ==========================================
// 1. FOR...IN LOOP (Iterating Objects)
// ==========================================

const myObject1 = {
    js: 'javascript',
    cpp: 'C++',
    rb: "ruby",
    swift: "swift by apple"
}

// "for...in" gives you the KEYS (the property names).
for (const key in myObject) {
    // console.log(key); // Output: js, cpp, rb...
    
    // To get Values, use myObject[key]
    console.log(`${key} shortcut is for ${myObject[key]}`);
}

// Q: Can we use for...in on Arrays?
const programming = ["js", "rb", "py", "java", "cpp"]

for (const key in programming) {
    // console.log(key); 
    // Output: 0, 1, 2, 3... (Arrays have numeric keys by default!)
    
    // console.log(programming[key]); // Output: js, rb...
}

/* TAKEAWAY:
   - for...of = Returns Values (Better for Arrays)
   - for...in = Returns Keys (Better for Objects)
*/


// ==========================================
// 2. FOREACH LOOP (The Array Method)
// ==========================================
// Most used method in React/Frontend development.
// Note: It is a METHOD, not a generic loop keyword.

const coding = ["js", "ruby", "java", "python", "cpp"]

// Syntax: array.forEach( callbackFunction )

// Style 1: Normal Function
coding.forEach( function (val){
    // console.log(val);
} )

// Style 2: Arrow Function (Modern)
coding.forEach( (item) => {
    // console.log(item);
} )


// --- POWER OF FOREACH (Parameters) ---
// It actually gives you 3 things: (Item, Index, WholeArray)

coding.forEach( (item, index, arr)=> {
    console.log(item, index, arr);
} )


// ==========================================
// 3. ARRAY OF OBJECTS (Real World Scenario)
// ==========================================
// This is exactly how data comes from a Database (API).

const myCoding = [
    {
        languageName: "javascript",
        languageFileName: "js"
    },
    {
        languageName: "java",
        languageFileName: "java"
    },
    {
        languageName: "python",
        languageFileName: "py"
    },
]

myCoding.forEach( (item) => {
    // 'item' is the whole object { languageName: "...", ... }
    
    console.log(item.languageName);
} )
// ==========================================
// THE PROBLEM WITH FOREACH
// ==========================================

const coding1 = ["js", "ruby", "java", "python", "cpp"]

const values = coding1.forEach( (item) => {
    // console.log(item);
    return item;
} )

console.log(values); 
// Output: undefined
// PROOF: forEach does NOT return values. You cannot save the result to a variable.


// ==========================================
// 1. FILTER METHOD
// Returns a NEW array with elements that pass the condition.
// ==========================================

const myNums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// --- SYNTAX 1: Implicit Return (One Liner) ---
// Condition is strictly true/false.
const newNums = myNums.filter( (num) => num > 4 )
console.log(newNums); // [5, 6, 7, 8, 9, 10]


// --- SYNTAX 2: Explicit Return (Scope Trap!) ---
//  INTERVIEW TRAP: If you open scope {}, you MUST write 'return'.
const newNums2 = myNums.filter( (num) => {
    return num > 4
} )
console.log(newNums2);


// ==========================================
// 2. REAL WORLD EXAMPLE (Database Query)
// ==========================================

const books = [
    { title: 'Book One', genre: 'Fiction', publish: 1981, edition: 2004 },
    { title: 'Book Two', genre: 'Non-Fiction', publish: 1992, edition: 2008 },
    { title: 'Book Three', genre: 'History', publish: 1999, edition: 2007 },
    { title: 'Book Four', genre: 'Non-Fiction', publish: 1989, edition: 2010 },
    { title: 'Book Five', genre: 'Science', publish: 2009, edition: 2014 },
    { title: 'Book Six', genre: 'Fiction', publish: 1987, edition: 2010 },
    { title: 'Book Seven', genre: 'History', publish: 1986, edition: 1996 },
    { title: 'Book Eight', genre: 'Science', publish: 2011, edition: 2016 },
    { title: 'Book Nine', genre: 'Non-Fiction', publish: 1981, edition: 1989 },
];

// Goal 1: Get all History books
let userBooks = books.filter( (bk) => bk.genre === 'History' )

// Goal 2: Get books published after 1995 AND are History
// Note: We overwrite 'userBooks' variable here
userBooks = books.filter( (bk) => { 
    return bk.publish >= 1995 && bk.genre === "History"
})

console.log(userBooks);

// ==========================================
// 1. MAP METHOD
// Automatically loops and returns a NEW array.
// Used to TRANSFORM data (e.g., Add 10 to every number).
// ==========================================

const myNums2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// Syntax: array.map( callback )
const newNums3 = myNums.map( (num) => { return num + 10 })

console.log(newNums3); // [11, 12, 13, ..., 20]


// ==========================================
// 2. CHAINING ( The Pipeline )
// ==========================================
// You can hook multiple methods together. 
// The result of the first passes to the second.

const newNumsChain = myNums
                .map((num) => num * 10) // [10, 20, 30...]
                .map((num) => num + 1)  // [11, 21, 31...]
                .filter((num) => num >= 40) // [41, 51...]

console.log(newNumsChain);


// ==========================================
// 3. REDUCE METHOD
// Used to boil down an array to a SINGLE value.
// (e.g., Sum of all numbers, Total Price)
// ==========================================

/* SYNTAX: 
   array.reduce( (accumulator, currentValue) => { ... }, initialValue )

   - accumulator: An empty variable where you store the result (starts as initialValue).
   - currentValue: The item in the array right now.
   - initialValue: Where the math starts (usually 0).
*/

const myTotal = myNums.reduce(function (acc, currval) {
    console.log(`acc: ${acc} and currval: ${currval}`);
    return acc + currval
}, 0) // <--- 0 is the initial value

console.log(myTotal);


// --- MODERN SYNTAX (Arrow Function) ---
const myTotalSmart = myNums.reduce( (acc, curr) => acc + curr, 0)

console.log(myTotalSmart);


// ==========================================
// 4. REAL WORLD: SHOPPING CART
// ==========================================

const shoppingCart = [
    {
        itemName: "js course",
        price: 2999
    },
    {
        itemName: "py course",
        price: 999
    },
    {
        itemName: "mobile dev course",
        price: 5999
    },
    {
        itemName: "data science course",
        price: 12999
    },
]

// Goal: Add up all the prices.
// We set initial value to 0. 'item' represents the object.
const priceToPay = shoppingCart.reduce((acc, item) => acc + item.price, 0)

console.log(priceToPay);