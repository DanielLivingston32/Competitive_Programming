//Hey guys this is the code i wrote... I used a hashmap to keep track of the count of all the elements in string S....
//Then iterated through through string J and checked if it is in hashmap... If it was present add it to a variable sum... Finally print the result...

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<int, int> hashmap;
        for(int i=0;i<S.size();++i){
            if(hashmap.find(S[i])!=hashmap.end()){
                hashmap[S[i]]+=1;}
            else{
                hashmap[S[i]]=1;
            }

        }
        int sum=0;
        for(int i=0;i<J.size();++i){
            if(hashmap.find(J[i])!=hashmap.end()){
                sum+=hashmap[J[i]];}
        }
        return sum;
    }
};
