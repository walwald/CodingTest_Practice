function solution(s){
    var answer = true;
    
    const stack = [];
    
    //2. 잘못 닫힌 괄호
    //3. 열리지 않은 괄호
    for(const letter of s) {
        if(letter == "("){
            stack.push(letter);              
        } else {
           if(stack.pop()){
               answer = true;
           } else{
               return false;
           }
        }
    }
    
    //1. 열리기만 하고 닫히지 않은 괄호
    if(stack.length > 0){
        return false;
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    console.log('Hello Javascript')

    return answer;
}