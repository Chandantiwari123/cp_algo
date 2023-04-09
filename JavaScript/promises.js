var condition = false;
let a = new Promise(function(resolve,reject){
    setTimeout(() => {        // setTimeout will execute the code after 't' second which is here 2000.
        if(condition) {
            resolve("It's resolve");            // If fullfilled then then it will pass the fullfilled message.
        }
        else{
            reject("It's reject");              // If rejected then it will pass the error message.
        }
    }, 2000);

});
a.then(fullfilled).catch(rejected);   // If promise was fullfileed or condition was true then '.then' will call the fullfilled function else '.catch' will call the rejected function.  

function fullfilled(msg){
    console.log("fullfilled " + msg);
}

function rejected(err) {
        console.log("rejected " + err);
    
}



////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////


area = (length, width) => {
    new Promise((resolve, reject) => {
        if(length>0 && width>0) {
            resolve(length*width);
        }
        else{
            reject("with these parameter rectangle is not possible.")
        }
    }).then(function(msg){
        console.log("Area : "+msg);
    }).catch(function(err){
        console.log("Error : "+err);
    });
}

area(8,9);
area(-2,9);
area(-3,0);

