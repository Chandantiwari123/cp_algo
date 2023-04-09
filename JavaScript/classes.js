class class1 {
    constructor(y) {
        this.x = y;
        console.log("This is main class constructor");
    }
    fun = () => {
        console.log("This is main class fun");
    }
}

class subclass extends class1 {
    hey = () => {
        console.log("This is subclass hey and this.x = "+this.x);
    }
}

let a = new subclass(10);
a.fun();              //If in class subclass there is no fun() function then it will extends in main class.
a.hey();

/////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////

class class2 {
    constructor() {
        console.log(`This is main class constructor`);
    }
    fun1(){
        console.log(`This is main class fun1`);
    }
}

class subclass1 extends class2 {
    constructor() {
        console.log(`This is subclass constructor`);
        super();         // This will call the main class constructor
    }
    fun1() {
        console.log(`This is subclass fun1`);
        super.fun1();           // This will call the main class fun1()
    }
}

let b = new subclass1();   // A constructor is present in subclass then it will not call the main class constructor.
b.fun1()           // same like constructor it will call the subclass fun1();
