function solution(n, lost, reserve) {
    var answer = 0;
    answer = n - lost.length;
    lost.sort((a,b)=> a-b)
    reserve.sort((a,b)=> a-b)
    let rsvSet = new Set(reserve);
    let lostSet = new Set(lost);
    
    console.log(rsvSet)
    
    lostSet.forEach((stdNum) => {
        if (rsvSet.has(stdNum)){
            answer ++;
            rsvSet.delete(stdNum)
            lostSet.delete(stdNum)
        }
    });
    
    
    //둘 중에 뭘 고르느냐에 따라 결과가 달라질 수 있음
    lostSet.forEach((stdNum) => {
         if(rsvSet.has(stdNum + 1) && rsvSet.has(stdNum - 1)){
            if(lostSet.has(stdNum + 2)){
                answer ++;
                rsvSet.delete(stdNum - 1) 
            } else if (lostSet.has(stdNum - 2)){
                answer ++;
                rsvSet.delete(stdNum + 1) 
            } else {
                answer ++;
                rsvSet.delete(stdNum + 1)
            }
        } else if (rsvSet.has(stdNum + 1)){
            answer ++;
            rsvSet.delete(stdNum + 1)
        } else if (rsvSet.has(stdNum - 1)){
            answer ++;
            rsvSet.delete(stdNum - 1)
        }
    })

    return answer;
}
