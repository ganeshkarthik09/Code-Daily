// ==========================================
// DATES IN JAVASCRIPT
// type: Object
// Represents a single moment in time (since Jan 1, 1970 UTC)
// ==========================================

let myDate = new Date()

console.log(myDate); 
// Output: 2026-01-18T11:45:00.000Z (Not very readable, this is JSON format)

// --- CONVERTING TO READABLE FORMATS ---
console.log(myDate.toString());       
// "Sun Jan 18 2026 17:15:00 GMT+0530 (India Standard Time)"

console.log(myDate.toDateString());   
// "Sun Jan 18 2026" (Clean, just the date)

console.log(myDate.toLocaleString()); 
// "1/18/2026, 5:15:00 PM" (Date + Time, formatted for your local computer settings)

console.log(typeof myDate); // "object"


// ==========================================
// 2. CREATING SPECIFIC DATES
// ==========================================

// Method A: YYYY, MM, DD (Month is 0-indexed!)
// 0 = Jan, 1 = Feb ... 11 = Dec
let myCreateDate = new Date(2025, 0, 23); 
console.log(myCreateDate.toDateString()); // "Thu Jan 23 2025"

// Method B: YYYY, MM, DD, Hr, Min
let myCreateDateWithTime = new Date(2023, 0, 23, 5, 3);
console.log(myCreateDateWithTime.toLocaleString()); // "1/23/2023, 5:03:00 AM"

// Method C: String (YYYY-MM-DD)
// Note: When using string, Month starts at 01 (Standard)
let myDateString = new Date("2023-01-14"); 
console.log(myDateString.toLocaleString()); 


// ==========================================
// 3. TIMESTAMPS (Used for Quizzes, Polls, Fastest Finger First)
// ==========================================

let myTimeStamp = Date.now();

console.log(myTimeStamp); 
// Output: 170557... (Milliseconds since Jan 1, 1970)

console.log(myCreateDate.getTime()); 
// Output: Milliseconds for that specific date.
// Usage: Compare two dates (myTimeStamp > myCreateDate.getTime())

// INTERVIEW TRICK: Convert to Seconds (Smallest integer)
console.log(Math.floor(Date.now() / 1000));


// ==========================================
// 4. GETTING INDIVIDUAL VALUES
// ==========================================

let newDate = new Date();
console.log(newDate);
console.log(newDate.getMonth()); // Output: 0 (if Jan). Remember +1 for real usage!
console.log(newDate.getDay());   // Output: 0 (Sunday) to 6 (Saturday)


// ==========================================
// 5. CUSTOMIZING FORMAT (The Professional Way)
// ==========================================

/* toLocaleString is very powerful. 
   You can define an object to specify exactly what you want.
*/

newDate.toLocaleString('default', {
    weekday: "long",   // "Sunday"
    year: "numeric",   // "2026"
    month: "long"      // "January"
})