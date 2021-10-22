public class dicepath {

    public static int dice(int sp, int ep, int[] dp){
        for(sp = ep; sp >= 0; sp--){
            if(sp==ep){
                dp[sp] = 1;
                continue;
            }
            int count = 0;
            for(int dice = 1; sp+dice<=ep && dice<=6;dice++){
                count+=dp[sp+dice];
            }
            dp[sp] = count;
        }
        return dp[0];
    }
    public static void main(String[] args){
        int[] dp = new int[11];
        System.out.println(dice(0,10,dp));
        
    }
    
}
