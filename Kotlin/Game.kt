fun main() {
    var s = readLine()!!.split(' ')
    var n1 = s[0].toInt();
    var n2 = s[1].toInt();
    var k1 = s[2].toInt();
    var k2 = s[3].toInt();
    var res:String    
    if(n1 > n2)
        res = "First"
    else res = "Second"
    println(res)
}