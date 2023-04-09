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

    // AJAX Request
    var GiphyAJAXCall = new XMLHttpRequest();
    GiphyAJAXCall.open( 'GET', url );
    GiphyAJAXCall.send();

    GiphyAJAXCall.addEventListener('load',function(e){

    var data = e.target.response;
    //console.log(data);
    pushToDOM(data);
    });
}
// 3. Show me the GIFs.

function pushToDOM(input) {
    var response = JSON.parse(input);
    var imageUrls = response.data;
    console.log(response);
    var container = document.querySelector(".js-container");
    container.innerHTML = "";
    imageUrls.forEach(function(image){
        var src = image.images.fixed_height.url;
        container.innerHTML = container.innerHTML + `<img src="${src}" class="container-image">`;
    });
    
    
}
