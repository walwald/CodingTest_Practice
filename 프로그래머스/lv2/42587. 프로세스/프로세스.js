function solution(priorities, location) {
    var answer = 0;

    let stack = [];
    
    //정렬

    let original = priorities.filter((data)=>{return true})
    
    let sorted = priorities;    
    sorted.sort((a,b) => (a < b)? -1 : 1);

    //arr[0]이 정렬된 순서로 봤을 때 맞으면 실행
    console.log("sorted: ", sorted)
    while(original.length > 0){
        console.log("location: ", location)
        console.log("priorities[0]:", priorities[0])
        if(original[0] == sorted[sorted.length - 1]){
            original = original.slice(1)
            sorted.pop()
            stack.push(original[0])
            answer ++
            if(location == 0){
                return answer;
            }

        } else {
            original.push(original[0])
            original = original.slice(1)
        }
        
        if(location > 0){
            location -= 1
        } else {
            location = original.length - 1
        }
    }
    
    
    return answer;
}

//slice(1)
//push(arr[0])