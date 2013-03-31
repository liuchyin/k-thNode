//
//  main.cpp
//  k-thNode
//
//  Created by Cong on 13-3-2.
//  Copyright (c) 2013年 liuchyin. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


Node* findKthToTail(Node* phead, int k){
    if(k == 0 || phead == NULL)
        return NULL;

    Node* ptr1 = phead;
    Node* ptr2 = phead;
    int n = k - 1;
    while(n--){
        if(!ptr1->next){
            cout<<"the length of link is less than k!"<<endl;
            return NULL;
        }
        ptr1 = ptr1->next;
    }
    while(ptr1->next){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return ptr2;
}

int main(int argc, const char * argv[])
{

    
    return 0;
}

