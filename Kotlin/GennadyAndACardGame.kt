fun main() {
    var s = readLine()!!
    var cs = readLine()!!.split(' ')
    var res = false
    for (i in 0 .. 4) {
        if(s[0] == cs[i][0])
            res = true
        else if(s[1] == cs[i][1])
            res = true
        if(res)
            break
    }   
    if(res)
        println("YES")
    else println("NO")
}