fun main() {
    var s = readLine()!!
    var n = s.toInt()
    println(n/2)
    repeat(n/2-1){
        print(2)
        print(' ')
    }
    if(n%2==0){
        print(2)
        print(' ')
    }
    else{
        print(3)
        print(' ')
    }
}