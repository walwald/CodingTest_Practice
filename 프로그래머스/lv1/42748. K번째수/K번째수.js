function solution(array, commands) {
    var answer = [];
    
    commands.forEach((command) =>{
        const newArr = array.slice(command[0] - 1, command[1])
        
        newArr.sort((a, b) => (a < b)? -1:1)
        answer.push(newArr[command[2] - 1])
    })
    
    return answer;
}