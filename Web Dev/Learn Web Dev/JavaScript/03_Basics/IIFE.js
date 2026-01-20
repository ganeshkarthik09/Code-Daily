// ==========================================
// IIFE: Immediately Invoked Function Expression
// ==========================================

/* WHAT IS IT? 
  A function that runs as soon as it is defined.

  WHY USE IT? (Interview Answer)
  1. To execute code immediately (like connecting to a DB).
  2. To avoid "Global Scope Pollution".
     (Variables inside IIFE don't leak out and conflict with global variables).
*/


// 1. NAMED IIFE
// (function name() { ... })();
(function chai() {
    // Named IIFE because it has a name "chai"
    console.log(`DB CONNECTED`);
})(); 
// ^ IMPORTANT: You MUST add a semicolon (;) here!
// If you don't, JS doesn't know this line ended, and the next IIFE will crash.


// 2. UNNAMED / ARROW IIFE
// ( () => { ... } )();
( (name) => {
    // Simple IIFE (Arrow function)
    console.log(`DB CONNECTED TWO ${name}`);
} )('Ganesh'); 


/* SYNTAX BREAKDOWN:
   ( ...definition... ) ( ...execution... );
   
   1st (): Writes the function definition.
   2nd (): Executes it immediately (like calling anyFunction()).
*/
/*
(function one() { ... })()  // <--- If you forget ';' here
(function two() { ... })()  // <--- This line will throw an error!
*/