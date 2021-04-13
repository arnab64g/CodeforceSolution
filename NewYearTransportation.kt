fun main() {
    var s = readLine()!!.split(' ')
    var n = s[0].toInt()
    var t = s[1].toInt()
    var st = readLine()!!.split(' ')
    var a = IntArray(n)
    for (i in 0 .. n-2) {
        a[i] = i + st[i].toInt()
    }
    var celpos = 0
    var i = 0
    var result = false
    while(i < n){
        if(a[celpos] == t-1){
            result = true
            break
        }
        else celpos = a[celpos]
        i++
    }
    if(result)
        println("YES")
    else println("NO")
}