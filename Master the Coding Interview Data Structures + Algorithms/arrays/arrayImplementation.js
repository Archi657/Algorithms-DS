// lookup O(1)
// push O(1) can be O(N)
// insert O(N)  
// delete O(N)

const strings = ['a', 'b', 'c']

strings.unshift('x')
//slice
console.log(strings)

// static arrays fixed size like in c = int a[10]
// js/python/java(arraylist) = dynamic arrays

// implement our own array class
class MyArray{
    constructor(){
        this.length = 0
        this.data = {}
    }

    get(index){
        return this.data[index]
    }

    push(item){
        this.data[this.length] = item
        this.length++
        return this.length
    }

    pop(){
        const lastItem = this.data[this.length-1]
        delete this.data[this.length-1]
        this.length--
        return lastItem
    }

    delete(index){
        const item = this.data[index]
        this.shiftItems(index)
    }

    shiftItems(index){
        for (let i=index; i< this.length-1; i++){
            this.data[i] = this.data[i+1]
        }
        delete this.data[this.length-1]
        this.length--
    }
}

const newArray = new MyArray()
newArray.push('hi')
newArray.push('there')
newArray.push('!')
console.log(newArray)
newArray.delete(1)
console.log(newArray)