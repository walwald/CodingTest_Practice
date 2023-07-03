function solution(citations) {
    var answer = 0;
    
    for(let i = citations.length; i >= 0; i--){
        let filteredLen = citations.filter(data => data >= i).length
        
        if(filteredLen >= i){
            answer = i
            break;
        }
    }
    
    return answer;
}