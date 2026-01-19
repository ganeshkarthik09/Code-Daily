// ==========================================
// ARRAYS PART 2: Merging & Spreading
// ==========================================

const marvel_heros = ["Thor", "Iron Man", "Black Panther"]
const dc = ["SM", "flash", "Batman"]

// --- 1. THE PROBLEM WITH PUSH ---
// marvel_heros.push(dc);

// console.log(marvel_heros);
// Output: ["Thor", "Iron Man", "Black Panther", ["SM", "flash", "Batman"]]
// Issue: It pushes the WHOLE array as a single element.
// Now you have an "Array inside an Array" (Nested Array).
// To access Flash, you would need: marvel_heros[3][1] -- (Not good syntax)


// --- 2. CONCAT (Old Way) ---
// Combines two or more arrays.
// Returns a NEW array (does not change existing ones).
const allHeros = marvel_heros.concat(dc);
console.log(allHeros);
// Output: ["Thor", "Iron Man", "Black Panther", "SM", "flash", "Batman"]
// Success! All elements are on the same level.


// --- 3. SPREAD OPERATOR (Modern/Best Way) ---
// Syntax: ... (Three dots)
// Think of it like dropping a glass of water -> The glass breaks and elements spread out.

const allHerosNew = [...marvel_heros, ...dc]

console.log(allHerosNew);
// Output: ["Thor", "Iron Man", "Black Panther", "SM", "flash", "Batman"]

/* WHY USE SPREAD?
   1. It's cleaner.
   2. You can add more than 2 arrays easily:
      const glass = [...arr1, ...arr2, ...arr3, "Extra Element"]
*/


// ==========================================
// 4. BONUS: HANDLING NESTED ARRAYS (flat)
// ==========================================
// Sometimes you get data that is messy and nested deep.

const another_array = [1, 2, 3, [4, 5, 6], 7, [6, 7, [4, 5]]]

// flat(depth): Returns a new array with all sub-array elements concatenated.
// Infinity: A hack to flatten ALL levels deep.
const real_another_array = another_array.flat(Infinity)

console.log(real_another_array);
// Output: [1, 2, 3, 4, 5, 6, 7, 6, 7, 4, 5] (Clean single array)


// ==========================================
// 5. INTERESTING METHODS (Data Scraping)
// ==========================================

// Checking if something is an Array
console.log(Array.isArray("Ganesh")) // false

// Converting String to Array
console.log(Array.from("Ganesh")) 
// Output: ['H', 'i', 't', 'e', 's', 'h']

// The Tricky Interview Question:
console.log(Array.from({name: "Ganesh"})) 
// Output: [] (Empty Array)
// Why? It doesn't know whether to make an array of Keys or Values.
// You have to specify, otherwise it gives [] to stay safe.

// Creating Array from Variables
let score1 = 100
let score2 = 200
let score3 = 300

console.log(Array.of(score1, score2, score3)); 
// Output: [100, 200, 300]