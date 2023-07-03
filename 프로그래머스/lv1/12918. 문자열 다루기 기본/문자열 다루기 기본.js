function solution(s) {
    var answer = true;
    
    if(s.length == 4 || s.length == 6){
        for(const letter of s){
            if(Number(letter) - 1 >= - 1){
                answer = true;
            } else {
                answer = false;
                break;
            }
        }
    } else {
        answer = false;
    }
    
    return answer;
}