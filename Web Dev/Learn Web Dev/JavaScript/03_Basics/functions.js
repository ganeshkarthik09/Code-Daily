// ==========================================
// FUNCTIONS IN JAVASCRIPT (Part 1)
// ==========================================

// 1. FUNCTION DEFINITION & EXECUTION
// ----------------------------------

function sayMyName() {
  console.log("G");
  console.log("A");
  console.log("N");
  console.log("E");
  console.log("S");
  console.log("H");
}

// sayMyName     <-- This is just the REFERENCE (Variable pointing to function)
// sayMyName()   <-- This is the EXECUTION (Runs the code)
sayMyName();

// ==========================================
// 2. PARAMETERS vs ARGUMENTS
// ==========================================

// PARAMETERS: Variables defined in the function definition (input placeholders)
// ARGUMENTS: Actual values passed when calling the function

/* function addTwoNum(num1, num2) { 
    // This function just PRINTS. It returns "undefined".
    console.log(num1 + num2); 
}
*/

function addTwoNum(num1, num2) {
  // 1. Do calculation
  // let res = num1 + num2;
  // 2. Return it to the outside world
  // return res;

  // Short syntax:
  return num1 + num2;

  // Unreachable Code:
  // console.log("Ganesh"); // Anything after 'return' never executes!
}

const res = addTwoNum(3, 5); // 3 and 5 are ARGUMENTS
// console.log("Result:", res);

/* CRITICAL CONCEPT:
   If you used console.log inside the function instead of return,
   the variable 'res' would be UNDEFINED.
   Because the function didn't give anything back!
*/

// ==========================================
// 3. DEFAULT VALUES & STRING INTERPOLATION
// ==========================================

// function loginUserMessage(username) {
//     return `${username} just logged in`
// }

// console.log(loginUserMessage("Ganesh")); // "Ganesh just logged in"
// console.log(loginUserMessage());         // "undefined just logged in"

// PROFESSIONAL WAY (Handling Missing Values):

function loginUserMessage(username = "sam") {
  // Default value is "sam"
  // Check if username is missing (undefined)
  // (!username) is equivalent to (username === undefined)
  if (!username) {
    console.log("Please enter a username");
    return;
  }
  return `${username} just logged in`;
}

console.log(loginUserMessage()); // Uses default: "sam just logged in"
console.log(loginUserMessage("Gani")); // Overwrites default: "Gani just logged in"


//Rest Operator
function calculateCartPrice(val1,v1l2,... num1) {
    return num1;

}
console.log(calculateCartPrice(200,400,500,2000))

const user ={
    username :"Ganesh",
    price : 79
}
function handleObject(anyobject)
{
    console.log(`user name is ${anyobject.username} and price is ${anyobject.price}`);

    
}
handleObject(user)
