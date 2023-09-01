import java.util.*;
public class problem012{
    public static void main(String args[]){
        int arr[]={1,2,0,0,2,1,1};
        int count[]=new int[3];
        for(int i=0;i<arr.length;i++){
            count[arr[i]]++;
        }
        int counter=0;
        for(int i=0;i<3;i++){
            while(count[i]>0){
                arr[counter]=i;
                count[i]--;
                counter++;
            }
        }
        for (int i=0;i<arr.length ;i++ ){
            System.out.print(arr[i]+" ");
        } 

    }
}