let a;
console.log("a = " + a); // OK // undefined
a = 0;

let b = 123;
console.log("b = " + b);

let c: number;
// console.log("c  = " + c); // Error Variable 'c' is used before being assigned.
c = 0;

console.log(a + b);

a = a + 1;
console.log("a = " + a);

c += 12.2344;
console.log("c = " + c);

let letter;
console.log("letter = " + letter); // undefined
letter = "Z";

let phrase;
console.log("phrase = " + phrase); // undefined
phrase = "Hello world";
