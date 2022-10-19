package Problems.String;

public class ReverseString{
    static void reverseString(char[] s) {
        int j=s.length-1,i=0;
        while(i<j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            j--;
            i++;
        } 
    
    }
    public static void main(String args[]){
        char s[]={'h','e','l','l','o'};
        // System.out.println(s.());
        reverseString(s);
        System.out.println("Reverse of the String is:"+String.valueOf(s));




    }
}