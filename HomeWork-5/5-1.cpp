/*
	面试题:替换空格
	题目：请实现一个函数，把字符串中的每个空格替换成"%20"。例如，输入"We are happy",则输出"We%20are%20happy"。
	解题思路：首先开辟一个空间大小相同的字符串进行拷贝赋值，然后从前向后遍历字符串，每次遇到空格赋值为*%20*,向后赋值即可，时间复杂度O(n)，空间复杂度为O(n)。
*/

class Solution {
public:
	void replaceSpace(char *str,int length) {
        int count = 0;
        char *str_1 = (char*)malloc(sizeof(char) * length);
        for(int i = 0; i < length; i++){
            str_1[i] = str[i];
        }
        for(int i = 0, j = 0; i < length; i++){
                if(str_1[i] == ' ') { count += 2; str[j++] = '%'; str[j++] = '2'; str[j++] = '0';}
                else str[j++] = str_1[i];
        }
    }
};
