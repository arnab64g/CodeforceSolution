fun main()
{
    var l = readLine()!!.toInt();
    var s = readLine()!!.split(' ')
    var num = IntArray(12)
    for(i in 0 .. 11){
        num[i] = s[i].toInt()
    }
    num.sort()
    var k = 0
    var i = 11
    var count = 0
    while(k < l && i >= 0){
        k += num[i--]
        count++
    }
    if(k < l)
        println(-1)
    else
        println(count)
}
