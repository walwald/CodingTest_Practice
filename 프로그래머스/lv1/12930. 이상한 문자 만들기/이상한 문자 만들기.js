function solution(s) {
    var answer = '';
    let sArr = s.split(' ');
    let stack = [];
    
    for(const word of sArr) {
        let wordArr = word.split('')
        for(let i = 0; i < word.length; i++){
            if(i % 2 == 0 || i == 0){
                wordArr[i] = wordArr[i].toUpperCase()
            } else {
                wordArr[i] = wordArr[i].toLowerCase()
            }
        }
        
        let newWord = wordArr.join('')
        stack.push(newWord)
    }
    
    answer = stack.join(' ')
    
    return answer;
}