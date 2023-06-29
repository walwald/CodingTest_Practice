function solution(participant, completion) {
    var answer = '';
    let hashTable = {};
    
    for(const runner of completion){
        if(!hashTable[runner]){
            hashTable[runner] = 1;
        } else {
            hashTable[runner] ++;
        }
    }
    for(const runner of participant){
        if(!hashTable[runner] || hashTable[runner] == 0){
            answer = runner
        } else {
            hashTable[runner] --;
        }
    }
    
    return answer;
}