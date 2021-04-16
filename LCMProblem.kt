fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var s = readLine()!!.split(' ')
        var l = s[0].toInt()
        var r = s[1].toInt()
        if(l*2 > r)
            println("-1 -1")
        else {
            print(l)
            print(' ')
            println(l*2)
        }
    }
}