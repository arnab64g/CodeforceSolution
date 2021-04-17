fun main() {
    var s = readLine()!!
    var n = s.toInt()
    var len:Int
    repeat(n){
        s = readLine()!!
        len =s.length
        var res = false
        var i = 0
        while(i < len){
            if(s[i]!='a'){
                res = true
                break
            }
            i++
        }
        if(res){
            println("YES")
            s += s[len-1]
            len = s.length
            var s1 = s.toCharArray()   
            len = len - 1
            var j = 0
            while(j < i){
                s1[len] = s[len-1]
                len--
                j++
            }
                s1[len ] = 'a'
            println(s1)
        }
        else println("NO")
    }
}
