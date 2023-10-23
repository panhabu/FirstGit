// coding implementation
document.getElementById('submit').onclick = send
function send(){
    var email = document.getElementById("email").value;
    var comment = document.getElementById("com").value;
    var rating = document.getElementById("rate").value;

    var emailPattern = /^[a-zA-Z0-9._-]+@gmail\.com$/;

    if(email.trim() === ""){
        alert("Email không được để trống");
        return;
    }
    if (!email.match(emailPattern)) {
        alert("Email không hợp lệ");
        return false;
    }

    if (comment.trim() === "") {
        alert("Comment không được để trống");
        return false;
    }
    if (isNaN(rating) || rating.trim() === "") {
        alert("Rating phải là một số và không được để trống");
        return false ;
    }


 
}

// end coding implementation