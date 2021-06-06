fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var s = readLine()!!.split(' ')
        var n = s[0].toInt()
        var m = s[1].toInt()
        var score = readLine()!!.split(' ')
        var total = 0
        for (i in 0 .. n-1) 
            total += score[i].toInt()
        if(total > m)
            println(m)
        else println(total)
    }
}