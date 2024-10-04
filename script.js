const chatInput= document.querySelector(".chat-input textarea");
const sendChatBtn = document.querySelector("#send-btn");
const chatbox = document.querySelector(".chatbox");


let userMessage;

const createChatLi=(message, className) => {
    // create a chat <li> element with passed message and className
    const chatLi = document.createElement("li");
    chatLi.classList.add("chat", className);
    let chatContent = className ==="outgoing"?`<p>${message}</p>`:`<span class="material-symbols-outlined"></span><p>${message}</p>`;
    chatLi.innerHTML= chatContent;
    return chatLi;
}
const generateResponse =()=>{
    const API_URL="https://api.openai.com/v1/chat/completions";

    const requestOptions={
        method: "POST", 
        headers:{
            "Content-Type": "applications/json",
            "Authorization": `Bearer ${}`
        }
    }
}
const handleChat= () => {
    userMessage= chatInput.value.trim();
    if(!userMessage) return;
    // append user's msg to chatbox
    chatbox.appendChild(createChatLi(userMessage, "outgoing"));

    setTimeout(() => {
        chatbox.appendChild(createChatLi("Thinking...", "incoming"));
        generateResponse();
    }, 600);
}
sendChatBtn.addEventListener("click",handleChat);