fun main() {
    var p = IntArray(5005)
    var m = IntArray(5005)
    var ps = IntArray(5005)
    var pt = 0
    var mt = 0
    var pst = 0
    var t:Int
    var min:Int
    var s = readLine()!!
    var n = s.toInt()
    var tm = readLine()!!.split(' ')
    for(i in 0 .. n-1) {  
        t = tm[i].toInt()
        when(t){
            1->p[pt++] = i+1
            2->m[mt++] = i+1
            3->ps[pst++] =i+1
        }
    }
    if(pt > mt)
        min = mt
    else min = pt 
    if(pst < min)
        min = pst
    println(min)
    for(i in 0 .. min-1){
        print(p[i])
        print(" ")
        print(m[i])
        print(" ")
        println(ps[i])
    }
}