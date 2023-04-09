// 1. Grab the input value


document.querySelector(".js-go").addEventListener('click',function() {
    var input = document.querySelector("input").value;
    console.log(input);
    showGiphy(input);
});

document.querySelector(".js-userinput").addEventListener('keyup',function(e) {   // every time input change it happens.
    var input = document.querySelector("input").value;
    console.log(e);
    if(e.which === 13) {    // if the key ENTER in pressed.
        showGiphy(input);
    }
});

// 2. Do the data stuff with the API
function showGiphy(input) {
    var myArr = input.split(" ");
    var str = myArr[0];
    for(let i=1;i<myArr.length;i++)
    {
        str = str + "+" + myArr[i];
    }
    var url = "http://api.giphy.com/v1/gifs/search?q="+str+"&api_key=dc6zaTOxFJmzC";

    // fetch api
    fetch(url)
    .then((response) => response.json())
    .then((data) => {
        pushToDOM(data);
    })
    .catch((err) => console.log("Cann't fetch data."));
}
// 3. Show me the GIFs.

function pushToDOM(response) {
    var imageUrls = response.data;
    console.log(response);
    var container = document.querySelector(".giphytv");
    container.innerHTML = "";
    for(let i=0;i<5 && i<imageUrls.length;i++)
    {
        setTimeout(function() {
            container.innerHTML = `<img width=1000 src="${imageUrls[i].images.fixed_height.url}">`;
        },i*2000);
    }
    
    
}
