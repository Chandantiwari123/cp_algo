class student {
    constructor(name, age) {
        this.studentname = name;
        this.studentage = age;
        console.log(`When you create an object of this class, constructor function will be automatically called`);
    }

    hello = marks => {
        console.log(`Name of student : ${this.studentname} and age : ${this.studentage} and his marks : ${marks}`);
    }

    static hey()
    {
        console.log(`I don't need an object`);
    }
}

let a = new student('Sujeet Mehra', 21);    // constructor function will be called when you create an object
a.hello(100);                   // Now hello function will be called.
student.hey();         // It doesn't need an object.





// In constructor we are using this.variable(Act like global variable of that class) name beacuse if any variable in hello function is same then it will make the difference.
