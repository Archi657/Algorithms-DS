function reverse(str){
    for(let i=str.length-1; i>=0; i--){
        console.log(str[i])
    }
}

reverse('nap')

// merge sorted arrays

function mergeSortedArrays(array1, array2){
    const mergedArray = []
    i = 0
    j = 0
    while(i<array1.length && j<array2.length){
        if(array1[i]<array2[j]){
            mergedArray.push(array1[i])
            i++
        }else{
            mergedArray.push(array2[j])
            j++
        }
        console.log(i,j)
    }
    console.log(mergedArray)
    return mergedArray
}

mergeSortedArrays([0,3,4,31], [4,6,30])