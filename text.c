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

int climbStairs(int n) {
    int i=0,j=1,k,cnt=0;
    while(cnt!=n)
    {k=i+j;
        i=j;
        j=k;
        cnt++; }
    return k;

    void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p1=m-1;
    int p2=n-1;
    int p=m+n-1;
    while(p1>=0 && p2>=0){
        if(nums1[p1]>nums2[p2])
            nums1[p--]=nums1[p1--];
        else
        nums1[p--]=nums2[p2--];
    }
    while(p2>=0)
     nums1[p--]=nums2[p2--];
}

char* addBinary(char* a, char* b) {
    int i=strlen(a), j=strlen(b);
    int aux=0,k=fmax(i, j)+2;
    char* result = (char*) malloc (sizeof(char) * k);
    
    result[--k] = '\0';
    i--; j--;
    while(--k >= 0){
        aux += i >= 0 ? a[i--] - '0': 0;
        aux += j >= 0 ? b[j--] - '0': 0;
        result[k] = aux % 2 + '0';
        aux /= 2;
    }
    if(result[0] == '0') return result+1;
    return result;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p1=m-1;
    int p2=n-1;
    int p=m+n-1;
    while(p1>=0 && p2>=0){
        if(nums1[p1]>nums2[p2])
            nums1[p--]=nums1[p1--];
        else
        nums1[p--]=nums2[p2--];
    }
    while(p2>=0)
     nums1[p--]=nums2[p2--];
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

int removeDuplicates(int* nums, int numsSize) {
  int c=1;
  for(int i=0;i<numsSize;i++){
    if( nums[i]!=nums[c-1]){
        nums[c]=nums[i];
        c++;
    }
  }
  return c;
}

int removeDuplicates(int* nums, int numsSize) {
  int c=1;
  for(int i=0;i<numsSize;i++){
    if( nums[i]!=nums[c-1]){
        nums[c]=nums[i];
        c++;
    }
  }
  return c;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode head;
    struct ListNode *h = &head;
    
    if (l1 == NULL && l2 == NULL)
        return NULL;
    
    while (l1 && l2) {
        if (l1->val < l2->val) {
            h->next = l1;
            l1 = l1->next;
            h = h->next;
        } else {
            h->next = l2;
            l2 = l2->next;
            h = h->next;
        }
    }

    if (l1) {
        h->next = l1;
    }
    if (l2) {
        h->next = l2;
    }
  
    return head.next;
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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    int x,y;
    if(root == NULL)
        return 0;
    else{
    x=minDepth(root->left);
    y=minDepth(root->right);
    if ((x==0) ^ (y==0)) 
    return (x>y?x:y)+1 ;
    if(x > y)
    return y + 1;
    else
    return x + 1;
    }

}

