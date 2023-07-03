function solution(arr)
{
    var answer = [];
    
    arr.forEach((data, index) => {
        if(index == 0) {
            answer.push(data)
        } else {
        if(data != arr[index - 1]){
            answer.push(data)}
        }
    })
    
    return answer;
  
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    console.log('Hello Javascript')
    
    return answer;
}