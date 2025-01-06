/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int target, int* returnSize) {
    int *result=(int*)malloc(2*sizeof(int));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
            result [0]=i;
            result [1]=j;
            *returnSize=2;
            return result;
        }
    }
}
*returnSize=0;
return 0;
}

int DecimalNumericalPlace(char roman_np_value)
    {
        switch(roman_np_value)
        {
            case 'M':
            return 1000;
            break;

             case 'D':
            return 500;
            break;

            case 'C':
            return 100;
            break;

             case 'L':
            return 50;
            break;

             case 'X':
            return 10;
            break;

             case 'V':
            return 5;
            break;

            case 'I':
            return 1;
            break;
            default :
            return -1;
        }
    }
int romanToInt(char * s)
{
    int len=strlen(s);
    int sum=0;
   for(int i=0;s[i]!='\0';i++){
       if(DecimalNumericalPlace(s[i]) < DecimalNumericalPlace(s[i+1])){
       sum = sum-DecimalNumericalPlace(s[i]);
   }
   else{
   sum+=DecimalNumericalPlace(s[i]);
   }
   }
    return sum;
}

char * longestCommonPrefix(char ** str, int size){

    int i,j,flag=0,k=0,min=100000;
    char *s = (char *)malloc(127*sizeof(char));
    strcpy(s,"");
    if(size==0)
        return s;
    char c;
    for(i=0;i<size;i++)
    {
        if(min>strlen(str[i]))
            min = strlen(str[i]);
    }
    for(i=0;i<min;i++,k++)
    {
        c = str[0][i];
        for(j=0;j<size;j++)
        {
            if(str[j][i]!=c)
            {
                flag = 1;
                break;
            }
        }
    //    printf("%d ",flag);
    //    printf("%d ",strlen(str[i]));
        if(flag)
            break;
        else
        {
            s[k] = c;
            s[k+1] = '\0';
        }
    }
 //   printf("%s",s);
    return s;
}

int strStr(char* haystack, char* needle) {
    int haystack_size = strlen(haystack);
    int needle_size = strlen(needle);
    int result = -1;
    int i = 0;  // haystack
    int j = 0;  // needle

    while (i < (haystack_size) && j < needle_size) {
        if (haystack[i] == needle[j]) {
            i++;
            j++;
        }
        else {
            i = i - j + 1;
            j = 0;
        }
    }

    return result = (j == needle_size) ? (i - needle_size) : -1;
}

int searchInsert(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid; 
        }
        if (nums[mid] < target) {
            low = mid + 1;  
        } else {
            high = mid - 1; 
        }
    }
    
    return low;
}