function solution(genres, plays) {
    var answer = [];
    //장르별로 총 재생 횟수 기록
    //그 장르에서 제일 많이 재생된 2곡 선택 (같은 횟수면 앞에 값 선택)
    //모든 장르에 대해 반복
    
    //필요 정보: 장르, 값, 위치
    
    //1. 장르 순서 정하기 !!순서를 기록해야 함!!
    //  > 순서대로 배열에 넣기?
    //2. 장르 내에서 가장 큰 두 값 고르기
    //3. 장르 순서와 두 값들의 크기에 따라 정렬 [ ...arr1, ...arr2, ...]
    
    let hashTable = {};
    let maxTotal = 0;
    let genreOrder = [];
    
    genres.forEach((genre, i) => {
        if(!hashTable[genre]){
            hashTable[genre] = {};
            hashTable[genre].value = genre;
            hashTable[genre].total = plays[i];
            hashTable[genre].songs = [];
        } else {
            hashTable[genre].total += plays[i];
        }
    })
    
    let genreKeys = Object.keys(hashTable)

    //장르 정렬
    for(let i = 0; i < genreKeys.length - 1; i++){
        let biggestNumI = i;
        for(let j = i + 1; j < genreKeys.length; j++){
            if(hashTable[genreKeys[j]].total > hashTable[genreKeys[biggestNumI]].total){
                biggestNumI = j;
            }
        }
        
        if(biggestNumI != i){
            let tmp = genreKeys[i];
            genreKeys[i] = genreKeys[biggestNumI];
            genreKeys[biggestNumI] = tmp;
        }
    }

    for(let i = 0; i < genres.length; i++){
        //2개씩 고르기
        for(const genre of Object.keys(hashTable)) {
            if(genres[i] == genre){
                if(!hashTable[genre].songs[0] && hashTable[genre].songs[0] != 0) {
                    hashTable[genre].songs[0] = i;
                    
                } else if(plays[i] > plays[hashTable[genre].songs[0]]){
                    let tmpVal = hashTable[genre].songs[0] 
                    hashTable[genre].songs[0] = i;
                    hashTable[genre].songs[1] = tmpVal;  
                    
                } else if (!hashTable[genre].songs[1] || 
                           plays[i] > plays[hashTable[genre].songs[1]]){
                    hashTable[genre].songs[1] = i;
                }
            }
        }
            
        
    }
    
    //정렬된 장르 순으로 songs array 구조 분해 push
    for(const genre of genreKeys){
        answer.push(...hashTable[genre].songs)
    }
    
    return answer;
}