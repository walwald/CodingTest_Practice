function solution(s) {
    var answer = '';
    let arr = s.split(" ");
    arr = arr.map((word)=>{
        word = word.toLowerCase();
        if(typeof word[0] == 'string')
        return word[0].toUpperCase() + word.slice(1)
    })
    
    answer = arr.join(" ");
    return answer;
}