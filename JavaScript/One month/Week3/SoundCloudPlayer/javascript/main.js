// 1. Search















// 2. Query Soundcloud API






//var SC;
SC.initialize({
    client_id: "cd9be64eeb32d1741c17cb39e41d254d"
});

SC.get("/tracks", {
    q: "rilo kiley"
}).then(function(tracks) {
    console.log(tracks);
});












// 3. Display the cards.










// 4. Add to playlist and play