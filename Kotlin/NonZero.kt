fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var n = readLine()!!.toInt()
        var s = readLine()!!.split(' ')
        var count = 0
        var total = 0
        for (i in 0 .. n-1) {
            if(s[i] == "0"){
                count += 1
                total += 1
            }
            else total += s[i].toInt()
        }
        if(total == 0)
            println(count+1)
        else println(count)
    }
}