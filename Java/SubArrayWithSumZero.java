import java.util.*;

public class SubArrayWithSumZero {
    
    public static void main( String[] args ) {
        int[] array = new int[]{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
        List<int[]> subArraysWithSumZero = calculateSubArraysWithSumZero( array );
        for ( int[] subArray : subArraysWithSumZero ) {
            System.out.println( Arrays.toString( subArray ) );
        }
    }
    
    /**
     * Efficiently calculates the sub arrays of an array which have a sum of zero
     *
     * <p>
     * We calculate the sum of all sub arrays from index 0
     * and map each sum to the end indices which produce the sum. <br>
     * Every pair of sub arrays from index 0 which produce the same sum
     * generate a sub array with sum zero by subtracting the smaller interval from the larger one.
     * </p>
     *
     * @param array the array
     * @return a list of all sub arrays with a sum of zero
     */
    public static List<int[]> calculateSubArraysWithSumZero( int[] array ) {
        List<int[]> results = new ArrayList<>();
        Map<Integer, List<Integer>> sumEndMap = new HashMap<>();
        // We have to employ a little trick to cover cases where the beginning of the array has a sum of zero
        insert( sumEndMap, 0, -1 );
        
        int cummulativeSum = 0;
        for ( int i = 0; i < array.length; i++ ) {
            cummulativeSum += array[ i ];
            List<Integer> endList = sumEndMap.get( cummulativeSum );
            
            if ( sumEndMap.containsKey( cummulativeSum ) ) {
                // Sub array with sum zero between the end points
                for ( int end : endList ) {
                    int[] subArray = new int[ i - end ];
                    System.arraycopy( array, end + 1, subArray, 0, i - end );
                    results.add( subArray );
                }
            }
            
            insert( sumEndMap, cummulativeSum, i );
        }
        
        return results;
    }
    
    private static void insert( Map<Integer, List<Integer>> sumEndMap, int sum, int end ) {
        List<Integer> endList = sumEndMap.getOrDefault( sum, new ArrayList<>() );
        endList.add( end );
        sumEndMap.put( sum, endList );
    }
}
