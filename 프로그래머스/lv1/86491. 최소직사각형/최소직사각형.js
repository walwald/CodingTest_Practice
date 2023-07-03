function solution(sizes) {
    var answer = 0;
    //긴쪽을 한 쪽으로 몰아준다
    let w = 0;
    let h = 0;
    
    for(const size of sizes){
        if(size[1] > size[0]){
            let tmp = size[1];
            size[1] = size[0];
            size[0] = tmp;
        }
    }
    
    //양 쪽의 max를 구한다
    for(const size of sizes){
        if(size[0] > w){
            w = size[0]
        }
        if(size[1] > h){
            h = size[1]
        }
    }
    
    answer = w*h;
    
    return answer;
}