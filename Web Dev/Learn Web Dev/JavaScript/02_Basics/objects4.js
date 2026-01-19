// ==========================================
// OBJECTS IN JAVASCRIPT (Part 2)
// Singleton & Merging
// ==========================================

// --- 1. SINGLETON VS LITERAL ---
// const tinderUser = new Object() // Singleton Object
const tinderUser = {}              // Non-Singleton Object (Literal)

// Both result in the same empty object {}, the difference is only in memory pattern.
tinderUser.id = "123ad"
tinderUser.name = "Gani"
tinderUser.isLoggedIn = false

console.log(tinderUser);


// --- 2. NESTED OBJECTS ---
// Objects inside Objects (common in JSON/API data)

const regularUser = {
    email: "gani@gmail.com",
    fullName: {
        userFullName: {
            firstName: "Ganesh",
            lastName: "Karthik"
        }
    }
}

// Accessing deep properties
// You just keep adding dots (.)
console.log(regularUser.fullName.userFullName.firstName); 


// --- 3. MERGING OBJECTS (Combining Data) ---

const obj1 = { 1: "a", 2: "b" }
const obj2 = { 3: "a", 4: "b" }
const obj4 = { 5: "a", 6: "b" }

// Method A: Object.assign (Old Way)
// Syntax: Object.assign(target, source1, source2)
// The empty {} at the start is the 'target'. It guarantees the result is a NEW object.
const obj3 = Object.assign({}, obj1, obj2, obj4)


// Method B: Spread Operator (Modern/Best Way)
// Just like arrays! "Spread" the properties into a new object.
const obj3Spread = { ...obj1, ...obj2, ...obj4 }

console.log(obj3Spread);


// ==========================================
// 4. WORKING WITH DATABASES (Array of Objects)
// ==========================================
// When fetching data from a DB, you usually get an Array of Objects.

const users = [
    {
        id: 1,
        email: "g@gmail.com"
    },
    {
        id: 2,
        email: "g2@gmail.com"
    },
]

// Accessing the first user's email:
console.log(users[1].email);


// ==========================================
// 5. CRITICAL METHODS (Looping/Validation)
// ==========================================

console.log(tinderUser);

// GET KEYS: Returns an Array of keys
// Very useful when you need to loop through an object or count properties.
console.log(Object.keys(tinderUser)); 
// Output: [ 'id', 'name', 'isLoggedIn' ]

// GET VALUES: Returns an Array of values
console.log(Object.values(tinderUser));
// Output: [ '123ad', 'Gani', false ]

// GET ENTRIES: Returns Array of Arrays [key, value]
console.log(Object.entries(tinderUser));
// Output: [ ['id', '123ad'], ['name', 'Gani'], ... ]


// CHECKING EXISTENCE
// Prevents app crashes if a property is missing.
console.log(tinderUser.hasOwnProperty('isLoggedIn')); // true
console.log(tinderUser.hasOwnProperty('isLoggedOut')); // false
// ==========================================
// OBJECT DESTRUCTURING
// (Extracting values cleanly)
// ==========================================

const course = {
    courseName: "C++",
    price: "79",
    courseInstructor: "GS"
}

// 1. THE OLD WAY
// console.log(course.courseInstructor);


// 2. THE MODERN WAY (Destructuring)
// Syntax: const { key } = objectName

const { courseInstructor } = course;
// console.log(courseInstructor); // Output: "GS"


// 3. RENAMING VARIABLES (Very common in React)
// Syntax: const { key: newName } = objectName

const { courseInstructor: instructor } = course;

console.log(instructor); // Output: "GS"

// console.log(courseInstructor); 
// ^ ERROR! This variable doesn't exist anymore because you renamed it to 'instructor'.


// ==========================================
// API CONCEPTS (JSON)
// ==========================================

/*
  What is JSON? (JavaScript Object Notation)
  - It is how data comes from a Backend/Server.
  - It LOOKS like an object, but it has strict rules.
*/

// RULE 1: Keys must be strings (" ").
// RULE 2: No variables name (It's just data, not a variable assignment).

// Example of a JSON response:
/*
{
    "name": "Ganesh",
    "coursename": "js in hindi",
    "price": "free"
}
*/

// Sometimes APIs return an Array of Objects:
/*
[
    {},
    {},
    {}
]
*/