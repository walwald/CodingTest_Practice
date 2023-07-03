function solution(s) {
    var answer = [0, 0];
    
    function twoNum(str){
        //재귀    
        //edge case = 변환한 이진수가 1이면 재귀 종료 
        if(str == "1") return;
        
        let arr = str.split('');
        
        //0을 제거하면서 숫자++ 하는 메서드

        let filtered = arr.filter((e)=> e != "0");
        
        answer[1] += arr.length - filtered.length;
        
        let newNum = filtered.length;
        
        //newNum을 이진수로 변환
        let newStr = newNum.toString(2);

        //그 이진수를 다시 반복;
        twoNum(newStr);
        
        answer[0] ++;
    }
    
    twoNum(s);
    
    return answer;
}