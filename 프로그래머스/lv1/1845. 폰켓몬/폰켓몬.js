function solution(nums) {
    var answer = 0;
    let hashTable = {};
    for(const num of nums){
        if(!hashTable[num]){
            hashTable[num] = 1;
        } else {
            hashTable[num] ++;
        }
    }
    
    if(Math.floor(nums.length / 2) < Object.keys(hashTable).length){
        answer = Math.floor(nums.length / 2);
    } else {
        answer = Object.keys(hashTable).length 
    }
    
    return answer;
}