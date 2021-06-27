const form = document.getElementById("register-form")
form.addEventListener("submit", event => {
  event.preventDefault()
  const formData = new FormData(form)
  const data = {}
  for (const [key, value] of formData.entries()) {
    /* USER CODE Begin: Validate data */
    data[key] = value
    /* USER CODE Begin: Validate data */
  }
  console.log(data)
  /* USER CODE Begin: What happened next after recieve form data (Optional) */
  function respond(){
    var txt;
    if(confirm("Confirm your information!")){
      txt="Confirm!";
    }else{
      txt="re-check your information";
    }
    document.getElementById("register-form").innerHTML = txt;
  }
  
  /* USER CODE END: What happened next after recieve form data (Optional) */
})
