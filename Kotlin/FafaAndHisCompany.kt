fun main() {
    var n = readLine()!!.toInt()
    var count = 1
    var l = 1
    var emp = n-l
    while(l <= emp){
        l++
        emp--
        if(emp % l == 0 && emp != 0)
            count++
    }
    println(count)

}