fun main() {
    var n = readLine()!!.toInt()
    var count = 0
    while(true){
        if(n==1){
            count++
            break
        }
        if(n%2 == 1){
            count++
            n--
        }
        n /= 2
        
    }
    println(count)
}