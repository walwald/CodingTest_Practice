function solution(progresses, speeds) {
    //progresses = 먼저 배포되어야 하는 작업 진도 배열 <= 100
    //speeds = 각 작업의 개발 속도 정수 배열 <= 100
    //return 각 배포마다 몇 개의 기능이 배포되는지
    //배포는 하루에 한 번만 & 하루의 끝에 진행
    
    var answer = [];
    
    //Maht.floor(100 - progresses의 각 진도율 / 속도) + 1 == 걸리는 날짜
    
    //앞에 있는 값의 걸리는 날짜가 내 날짜보다 크면 + 1, 작으면 새로 push 
    //직전이 아니라 수행이 될 때까지 기다려야 함
    
    let times = [];
    let max;
    
    for(let i = 0; i < progresses.length; i++){
        times.push(Math.ceil((100 - progresses[i])/speeds[i]));        
    }
    
    //앞에 애들 중 맥스보다 내가 더 길어야 새로 push
    
    times.forEach((data, index) =>{
        if(max >= data){ 
            answer[answer.length - 1]++
        } else {
            answer.push(1)
            max = data;
        }
    })
    
    return answer;
}