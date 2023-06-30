function solution(answers) {
    var answer = [];
    
    let tries = [[1,2,3,4,5], [2,1,2,3,2,4,2,5], [3,3,1,1,2,2,4,4,5,5,]]
    
    let scores = [[1,0],[2,0],[3,0]];
    
    for(let i = 0; i < answers.length; i++){
        tries.forEach((student, j)=>{
            let k = i % student.length;
            if(student[k] == answers[i]){
                scores[j][1]++;
            }
        })
    }
    
    let maxScore = scores.reduce((acc,crr)=>{
        return Math.max(acc, crr[1])
    },0)
    
    const filtered = scores.filter((score) => score[1] == maxScore)
    
    filtered.forEach((score)=>{
        answer.push(score[0])
    })
    
    return answer;
}