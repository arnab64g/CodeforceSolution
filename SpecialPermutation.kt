fun main() {
    val tc = readLine()!!
    var t = tc.toInt()
    repeat(t){
        var n = readLine()!!
        var num = n.toInt()
        var i = 2
        repeat(num){
            if(i != num + 1)
                print("$i ")
            else print(1)
            i++
        }
        println()
    }
}

