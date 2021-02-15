#include<iostream>
#include<algorithm>
using namespace std;

struct Job {
   int id;
   int deadLine;
   int profit;
};

bool comp(Job j1, Job j2) {
   return (j1.profit > j2.profit);  
}

void jobSequence(Job jobList[], int n) {
   sort(jobList, jobList+n, comp);

   int jobSeq[n];     
   bool slot[n];      

   for (int i=0; i<n; i++)
      slot[i] = false;

   for (int i=0; i<n; i++) {    
      for (int j=min(n, jobList[i].deadLine)-1; j>=0; j--) {
         if (slot[j]==false) {
            jobSeq[j] = i;   
            slot[j] = true;  
            break;
         }
      }
   }
   
   int totalProfit = 0;

    for (int i=0; i<n; i++)
        if (slot[i]){
            cout << jobList[jobSeq[i]].id+1 << " ";
            totalProfit += jobList[jobSeq[i]].profit;
        }
    cout<<endl<<"The maximum profit earned is "<<totalProfit<<endl;
}

int main() {
    
   // Identification
    string collision = "\U0001F4A5";
    string copyright = "️\U000000A9";
    string fire_emoji = "\U0001F525";
    cout << endl
         << endl
         << copyright << " COPYRIGHT" << endl
         << fire_emoji << "DANIEL LIVINGSTON" << fire_emoji << endl
         << collision << "URK19CS2001" << collision << endl
         << endl;
    // End Identification - Program Starts
   
   cout<<"Enter total no of Jobs: ";
   int n;
   cin>>n;

   Job jobList[n];
   int deadline,profit;
   for(int i=0;i<n;i++){
       cout<<"Enter Job "<<i+1<<" Deadline : ";
       cin>>deadline;
       cout<<"Enter Job "<<i+1<<" Profit : ";
       cin>>profit;
       jobList[i].deadLine = deadline;
       jobList[i].profit = profit;
       jobList[i].id = i;

   }
   cout << "Following is maximum profit sequence of job sequence: ";
   jobSequence(jobList, n);
}