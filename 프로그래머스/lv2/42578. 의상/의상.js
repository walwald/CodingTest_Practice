function solution(clothes) {
    var answer = 0;
    let hashTable = {};
    let multiple = 1;
    
    for(const clothe of clothes){
        if(!hashTable[clothe[1]]){
            hashTable[clothe[1]] = [clothe[0]]
        } else {
            hashTable[clothe[1]].push(clothe[0]);
        }
    }
    
    //type이 다른 것들끼리 곱한 거 + 전체 개수
    //종류별로 1개
    //종류별로 1개 + 다른 종류 1개
    //종류별로 1개 + 다른 종류 1개 ... 모든 종류 1개
    
    //하나씩만 입을 수도 있고, 하나씩 추가될 수 있고, 최대 모든 종류를 하나 씩 입을 수 있음
    //하나씩만 입는 경우 == n
    //모든 종류 하나씩 입는 경우 (종류별 개수 * 종류별 개수 ... 종류별 개수)
    //종류별로 loop?
    //같은 종류냐 다른 종류냐가 중요함
    // [2] > 2
    // [1, 1] > 3
    // [1, 1, 1] > 3 + 2 + 1 > 6
    // [1, 2] > 3 + 2 > 5
    // [2, 2] > 4 + 4 > 8
    // [2, 2, 2] > 6 + 4 + 4 + 4 + 8 > 26 == 27(종류별 개수 + 1) - 1

    for(const key of Object.keys(hashTable)){
        
        multiple *= (hashTable[key].length + 1)    
    }
    
    answer = multiple - 1
    
    return answer;
}