/**
* QT:输入一个链表的头结点，从尾到头打印所有结点的值
*
* 从题意可知，第一反应是与栈的功能描述十分相近。
* 首先采用栈的结构来实现上述功能。
* @author chenglan
* @date 2014-10
*/

struct ListNode {
    int     m_nKey;
    ListNode* m_pNext;
};

/*
* 运用栈结构来处理
*/
void PrintListReversingly(ListNode * pHead){
    std::stack<ListNode *> nodes;//build the stack container

    ListNode *pNode = pHead;
    //push the listnode to stack
    while(pNode != NULL){
         nodes.push(pNode);
         pNode = pNode->m_pNext;
    }
    
    //pop and print the value
    while(!nodes.empty()){
         pNode = nodes.top();
         printf(" Value = %d \n",pNode->m_nValue);
         nodes.pop();
    }
}

/*
* 基于上述栈实现的方法，又可让大家联想到递归调用来处理。
* 但前提是递归调用的深度不宜过大，如过大易导致堆栈溢出。
* 基于上述思路，写出如下递归调用的code.
*/
void PrintListReversingly(ListNode * pHead){
    if(pHead != NULL){
         if(pHead->m_pNext != NULL){
               PrintListReversingly(pHead->m_pNext);
         }
    }
    
    printf(" Value = %d \n",pHead->m_nValue);
}
