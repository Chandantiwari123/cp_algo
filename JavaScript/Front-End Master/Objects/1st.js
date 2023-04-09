// Object

var person = {}
person.name = "Mrs. White";
var who = person.name;
console.log(who)
person.name = "Mr. White"       // It will reamain unchanged.
console.log(who)

//Note: Primitive value get pass by value, While non-primitive value get passed by reference.


// Array

var person1 = []
person1.name = "Mrs. White";
var who1 = person1.name;
console.log(who1);
console.log(typeof(person1)) // Haha it's not array
console.log(person1)  // Output: [ name: 'Mrs. White' ]

person1[0] = "I'm a javaScript developer";
console.log(person1)    // Output:  [ "I'm a javaScript developer", name: 'Mrs. White' ]
console.log(person1[0]);    // Output: I'm a javaScript developer
console.log(person1["name"]);    // Output: Mrs. White


// Object

var box = {}
box['material'] = "Iron"
box[0] = "Hey this is me"
box["&!*"] = "Just testing"
console.log(box);