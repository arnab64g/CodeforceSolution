fun main() {
    var n = readLine()!!.toInt()
    var count = 0
    var prev = 2
    while(n >= 0){
        if(prev == 2){
            count++
            n--
            prev = 1
        }
        else if(prev == 1){
            count++
            n -= 2
            prev = 2
        }
    }
    if(n < 0)
        count--
    println(count)
}