var a = 5;
for(let i=0;i<10;i++)
{
	const x = 3.5;
	console.log([a,i,x]);
}
console.log(a);
//console.log(i);
//console.log(x);
 



let arr = [1,2,3,"Hello bro"];
let arr1 = arr;
let arr2 = [...arr];
arr.push("Hey boy");
console.log(arr1);
console.log(arr2);



fun = (name, ...ar) => {
console.log("name : " + name);
	//for(let i=0;i<10;i++)
	//{
	console.log(ar);
	//}
}
fun("Chandan Tiwari",1,2,3,4,5,6,10,8,9,10);



newfun = ({name,age = 20,marks}) => {
   console.log(name);
   console.log(age);
   console.log(marks);
}

newfun({name:"Chandan",marks:30});  // In here age will be default value means 20.
newfun({name:"Chandan",age: 30,marks:30});


let marks=100,b ="Chandan Tiwari",c="B.tech";

let s = `${b} has ${marks} marks in ${c}`;
console.log(s);



hehe = (marks,total) => {
	{
		if(total-marks<40)
		{
			return {status : "Pass",percentage : (marks/total)*100};
		}
		else
		{
			return {status : "Fail",percentage : (marks/total)*100};
		}
	}
}

let Ram = hehe(80,110);
let Shyam = hehe(20,110);
console.log(`Ram : status = ${Ram.status} and percentage = ${Ram.percentage}`);
console.log(`Shyam : status = ${Shyam.status} and percentage = ${Shyam.percentage}`);



hello = length => {
    return 	{	area : width => {return (length)*width;},
    			perimeter : width => {return 2*((length)+width);}
		}
}

let rectangle = hello(10);
console.log(`Area of rectangle : ${rectangle.area(2)} and perimeter : ${rectangle.perimeter(2)}`);

population = total => {
      return {
      	state : name => {return name;},
        perpop : perpop => {return 100*(perpop)/total;}
      }
}

let country = population(1000000); // pass the country population

console.log(`Name : ${country.state("LA")} and Population in percentage : ${country.perpop(2000)}`);
console.log(`Name : ${country.state("LV")} and Population in percentage : ${country.perpop(3000)}`);


