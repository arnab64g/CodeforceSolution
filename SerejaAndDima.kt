fun main() {
    var n = readLine()!!.toInt()
    var s = readLine()!!.split(' ')
    var a = IntArray(n)
    for (i in 0 .. n-1) 
        a[i] = s[i].toInt()
    var front = 0
    var rear = n-1
    var count  = 0
    var value:Int  
    var sr = 0
    var dp = 0
    while(front <=  rear){
        if(a[front] > a[rear])
            value = a[front++]
        else value = a[rear--]
        if(count % 2 == 0)
            sr += value
        else dp += value
        count++
    }
    print(sr)
    print(' ')
    println(dp)
}