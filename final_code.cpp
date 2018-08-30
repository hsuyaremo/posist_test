#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

class node{
  private:
    int key;
  public:
    string data, val;
    int nodeId, nodeNumber, height;
    node* refNodeId. genRefNodeId; 
    string HashValue;
    vector <node*> childRefNodeId;
  node(int k, int nid, int nnum, int h, node* grid, node* rid, vector <node*> &childs, string dt, string vl){
        key = k;
        nodeId = nid;
        nodeNumber = nnum;
        height = h;
        refNodeId = rid;
        genRefNodeId = grid;
        childRefNodeId = childs;
        data = dt;
        string ref = (rid == NULL)?"":to_string(int(rid)), genref = to_string(int(grid));
        string hshval = data + ":" +
                      to_string(non) + ":" +
                      ref + ":" +
                      genref + ":" ; // different parts of hashValues are being seperated by ':'
        hashValue = hshval;
        val = vl;
  }
}

class genesis{
  node *genNode ;
  int non; // No of nodes
  
  node* add(node* cur){ // recursive function to add node and change heights
    double sum = 0;
    node* temp = cur;
    for(int i=0; i<temp->childRefNodeId.size(); i++){
      node *t = temp->childRefNodeId[i];
      sum += atof(t->val);
    }
    if(sum + atof(value) <= atof(temp->val)){                                    // checking sum condition
      temp->height++;
      return temp;
    }
    else{
      int ind = -1;
      for(int i=0; i<temp->childRefNodeId.size(); i++){
        node *t=temp->childRefNodeId[i];
        if(atof(t->val) >= atof(value)) {
          ind = i;
          break;
        }
      }
      if(ind != -1) { 
        node *rt = add(temp->childRefNodeId[ind]);
        if(rt != NULL) temp->height++;
        return rt;
      }
      else {
        cout<<"Cannot add more";
        return NULL;
      }
    }
  }
  
  void addnode(){
    non++;
    int key;
    string ownername, ownerid, value;
    vector< node*> childs;
    cout<<"Enter ownername, ownerid, key, value:\n";
    cin>>ownername>>ownerid>>key>>value;
    key%=27; 
    if(val.find('.') != val.end()) val = val.substr(0, val.find('.')- val.begin() + 2 + 1); // upto 2 decimal places
    string data =  gethash(ownerid, key) +";"+ gethash(ownername, key) +";"+ gethash(val, key); //different values in hash are seperated by ';'
    
    if(genNode == NULL){
      genNode = new node(key, non, non, 1, genNode, NULL, childs, data, value):
    }
    else{
      node *temp = add(genNode);
      if(temp != NULL){
        node *newnode= new node(key, non, non, 1, genNode, temp, childs, data, value):
      }
      else{
        non--;
      }
    }
  }
  
  string gethash(string val, int key){
    ?/implementing ceaser cypher
    string hsh = "";
    string helper = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<val.length(); i++){
      if(val[i].isalpha()){
        if(val[i].isupper()) val[i].tolower();
        hsh += helper[val[i] - 'a' + key];
      } 
    }
    return hsh;
  }
 
}

void main(){
   genesis newgenesis = new genesis();   
}





