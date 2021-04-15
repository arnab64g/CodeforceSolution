fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var s = readLine()!!.split(' ')
        var n = s[0].toInt()
        var m = s[1].toInt()
        var ans:Int
        ans = (n*m)/2
        if(n%2==1 && m%2==1)
            ans++
        println(ans)
    }
}