function solution(n) {
    var answer = 0;
    let arr = [];
    
    for(let i = 0; i < n + 1; i++){
        if(i == 0 || i == 1) {
            arr.push(i);
        } else {
            arr.push(arr[i-2] % 1234567 + arr[i-1] % 1234567);
        }
    }
    
    answer = arr[n] % 1234567
    return answer;
}