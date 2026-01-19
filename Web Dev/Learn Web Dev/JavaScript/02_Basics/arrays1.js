// ==========================================
// ARRAYS IN JAVASCRIPT
// type: Object (Resizable, can contain mixed types)
// ==========================================

// 1. DECLARATION
// Literal Syntax (Most common)
const myArray = [0, 1, 2, 3, 4, 5]

// Accessing Elements (0-based indexing)
console.log(myArray[0]); 

const myHero = ["Bali", "Raga", "Vibhu"];

// Constructor Syntax (Rarely used, but good to know)
const myArray2 = new Array(1, 2, 3, 4)
console.log(myArray2[2]);


// ==========================================
// 2. ARRAY METHODS (Basics)
// ==========================================

// push(): Adds to the END
myArray.push(6)
myArray.push(9)
console.log(myArray); // [0, 1, 2, 3, 4, 5, 6, 9]

// pop(): Removes from the END
myArray.pop() // Removes 9
console.log(myArray);

// unshift(): Adds to the START
// Note: This is "computer heavy" because it has to shift 
// the index of every other number (0 becomes 1, 1 becomes 2, etc.)
myArray.unshift(12); 


// shift(): Removes from the START (Not in your code, but opposite of unshift)
// myArray.shift(); 


// ==========================================
// 3. INQUIRY & CONVERSION
// ==========================================

// includes(): Asking a question (True/False)
console.log(myArray.includes(18)); // false

// indexOf(): Asking for position
console.log(myArray.indexOf(9));   // -1 (Because 9 was popped earlier)
console.log(myArray.indexOf(3));   // returns index (e.g., 4 after unshift)

// join(): Converts Array -> String
// Useful when binding data for UI or URL
const newArray = myArray.join(); 

console.log(myArray);  // [12, 0, 1, 2, 3, 4, 5, 6] (Type: Object/Array)
console.log(newArray); // "12,0,1,2,3,4,5,6"        (Type: String)


// ==========================================
// 4. SLICE vs SPLICE ( INTERVIEW QUESTION)
// ==========================================

console.log("A ", myArray);

// --- SLICE ---
// Definition: Returns a copy of a section of an array.
// Does it modify original array? NO.
const myn1 = myArray.slice(1, 3); 

console.log(myn1); // Returns [0, 1] (Includes Start Index 1, Excludes End Index 3)
console.log("B ", myArray); // Original Array is SAME (Unchanged)


// --- SPLICE ---
// Definition: Changes the contents of an array by removing or replacing elements.
// Does it modify original array? YES.
const myn2 = myArray.splice(1, 3); 

console.log("C ", myn2); // Returns the deleted items [0, 1, 2]
console.log("After Splice: ", myArray); // Original Array is CHANGED (Those items are gone!)

/*
   SUMMARY DIFFERENCE:
   1. Slice: Just "Look" at the data. Returns a piece. Original stays safe.
   2. Splice: "Cut" the data out. Returns the cut piece. Original is permanently modified.
*/