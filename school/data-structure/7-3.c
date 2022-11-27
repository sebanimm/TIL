#include <stdio.h>//201p(단어입력) + 203(탐색)
#include <stdlib.h>
#include<string.h>
typedef struct Node{
	char data[100];
	struct Node* next;
}Node;
Node* insertFirst(Node* head, char* data){
	
	
	
}
Node* insert(Node* head, Node* pre, char* data){
	
	
	
}
Node* deleteFirst(Node* head){

	
}
Node* delete(Node* head, Node* pre){
	//프리가 가리키는 다음 노드를 삭제
	
	
}
void printList(Node* head){

	while(head!=NULL){

		
		
	}
	printf("NULL\n");
		
}
int main(){
	Node* head = NULL;
	Node* p;
  char str[3][10] ={"melon","kiwi","appple"};
	char find[10];
	//코드 작성
	head= insertFirst(head,str[0]); //melon 입력
	printList(head);
	//
	//
	//
	//
	printf("찾을 데이터를 입력하세요\n");
	scanf("%s",find);
	for(p=head;p!=NULL;p=p->next){
		//printf("%s",p->data);
	if	(strcmp(p->data,find) == 0) printf("%s를 찾았습니다.",find);
		
	}
	return 0;
}

