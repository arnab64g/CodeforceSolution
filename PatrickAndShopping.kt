fun main(args: Array<String>) {
    val (s1, s2, s3) = readLine()!!.split(' ')
    val d1 = s1.toInt()
    val d2 = s2.toInt()
    val d3 = s3.toInt()
    var min= d1+d2+d3
    var d4 = (d1+d2)*2
    if(d4 < min)
        min = d4
    d4 = (d3+d2) * 2
    if(d4 < min)
        min = d4
    d4 = (d1+d3) * 2
    if(d4 < min)
        min = d4
    println(min)
}