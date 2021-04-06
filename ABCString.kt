fun main() {
    var s = readLine()!!
    var t = s.toInt()
    var i:Int
    var res:Boolean
    var len:Int
    var s1:Char
    var s2:Char
    var s3:Char
    var a:Int
    var b:Int
    repeat(t){
        res = true
        s = readLine()!!
        len = s.length;
        var cs = s.toCharArray()
        if(s[0] == s[len-1])
            println("NO")
        else{
            a = 0
            b = 0
            s1 = s[0]
            s2 = s[len-1]
            i = 0
            while(i < len){
                if(s[i] == s1){
                    cs[i] = '('
                    a++
                }
                else if(s[i] == s2){
                    cs[i] = ')'
                    b++
                }
                i++
            }
            if(a > b)
                s3 = ')'
            else if(b > a)
                s3 = '('
            else {
              
                s3 = 'X'
                if(a+b != len)
                    res = false
            }
            i = 0
            while(i < len){
                if(cs[i] != '(' && cs[i] != ')')
                    cs[i] = s3
                i++
            }
        
            i = 0
            while(i < len-1){
                while(i <= len-1){
                    if(cs[i] != '(')
                        i++
                    else break
                }
                var j = i+1
                while(j < len){
                    if(cs[j] != ')')
                        j++
            
                    else break
            }
            if(j < len && i < len){
                cs[i] = '0'
                cs[j] = '0'
            }
            i++
        }
        
        i = 0
        while(i < len){
            if(cs[i] != '0'){
                res = false
                break
            }
            i++
        }      
      
        if(res)
            println("YES")
        else println("NO")
    }
    }
}