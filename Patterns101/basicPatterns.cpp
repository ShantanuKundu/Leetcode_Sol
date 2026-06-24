#include<bits/stdc++.h>
using namespace std;

int main(){
    int range;
    cout<<"Enter range: ";
    cin>>range;
    // for(int i = 0; i<range; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    
    // for(int i = range; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         //cout<<'*';
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //TRIANGLE PATTERNS
    cout<<"Patternn 1: Upstraight triangle"<<endl;
    for(int i = 0; i<range; i++){
        for(int j=1;j<=range-i-1; j++)
            cout<<" ";
          
        for(int j=0; j<(2*i)+1; j++)
            cout<<"*";    

        for(int j=1;j<=range-i-1; j++)
            cout<<" ";
        cout<<endl;     
    }

    cout<<"Pattern 2: Upside down triangle"<<endl;
    for(int i = 0; i<range; i++){
        for(int j=0;j<i; j++)
            cout<<" ";
          
        for(int j=0; j<((2*range)-(2*i+1)); j++)
            cout<<"*";    

        for(int j=0;j<i; j++)
            cout<<" ";

        cout<<endl;     
    }

    cout<<"Pattern 3: Combination triangle"<<endl;
    for(int i = 0; i<range; i++){
        for(int j=1;j<=range-i-1; j++)
            cout<<" ";
          
        for(int j=0; j<(2*i)+1; j++)
            cout<<"*";    

        for(int j=1;j<=range-i-1; j++)
            cout<<" ";
        cout<<endl;     
    }
    for(int i = 0; i<range; i++){
        for(int j=0;j<i; j++)
            cout<<" ";
          
        for(int j=0; j<((2*range)-(2*i+1)); j++)
            cout<<"*";    

        for(int j=0;j<i; j++)
            cout<<" ";

        cout<<endl;     
    }

    cout<<"Pattern 4: Horizontally half triangle."<<endl;
    for(int i=1; i<=range; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //cout<<endl;
    for(int i=range-1; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    
    cout<<"Pattern 5: Binary Triangle"<<endl;
    int flag=1; 
    for(int i=1; i<=range; i++){
        for(int j=1; j<=i; j++){
            cout<<flag;
            if(flag==1)
                flag = 0;
            else if(flag == 0)
                flag = 1;                
        }
        cout<<endl;
    } 

    cout<<"Pattern 6: Numeric Horn Traingle"<<endl;
    int space = 2*(range-1);
    for(int i = 1; i<=range; i++){ 
        for(int j=1; j<=i; j++)
            cout<<j;
        
        for(int j=1; j<=space; j++) 
            cout<<" ";   

        for(int j=i; j>0; j--)
            cout<<j;  
        cout<<endl;
        space-=2;      
    }
    
    cout<<"Pattern 7: Basic ASCII Table"<<endl;
    for(int i= 1; i<=range; i++){
        for(char ch='A'; ch<='A'+i-1; ch++){
            cout<<ch;
        }
        cout<<endl;
    }


    cout<<"Pattern 8: Another ASCII Table"<<endl;
    for(int i=1; i<=range; i++){
        for(int j=range-i; j>0; j--)
            cout<<" ";
       for(char ch='A'; ch<'A'+i-1; ch++) 
            cout<<ch;
       for(char ch='A'+i-1; ch>='A' ; ch--)
            cout<<ch;    
       for(int j=0; j<=range; j++)
            cout<<" "; 
       cout<<endl;         
    }

    cout<<"Pattern 9: Reverse ASCII Table"<<endl;
    for(int i=range; i>0; i--){
        for(char ch='A'+(i-1); ch<'A'+range; ch++){
            cout<<ch;
        }
        cout<<endl;
    }

    cout<<"Pattern 10: Hollow Diamond"<<endl;
    int inSpace = 0, outSpace = 2*(range-1);
    for(int i = 1; i<=range; i++){
        for(int j=1; j<=range-i+1; j++){
            cout<<"*";
        }
        for(int j = 1; j<=inSpace; j++)
            cout<<" ";

        for(int j=1; j<=range-i+1; j++){
            cout<<"*";
        }    
        inSpace +=2;
        cout<<endl;
    }  
    
    for(int i = 1; i<=range; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j = 1; j<=outSpace; j++)
            cout<<" ";

        for(int j=i; j>0; j--){
            cout<<"*";
        }    
        outSpace -=2;
        cout<<endl;
    } 

    cout<<"Pattern 11: Butterfly"<<endl;
    inSpace = 0;
    outSpace = 2*(range-1);
    for(int i = 1; i<=range; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j = 1; j<=outSpace; j++)
            cout<<" ";

        for(int j=i; j>0; j--){
            cout<<"*";
        }    
        outSpace -=2;
        cout<<endl;
    } 
 
    for(int i = 1; i<=range; i++){
        for(int j=1; j<=range-i+1; j++){
            cout<<"*";
        }
        for(int j = 1; j<=inSpace; j++)
            cout<<" ";

        for(int j=1; j<=range-i+1; j++){
            cout<<"*";
        }    
        inSpace +=2;
        cout<<endl;
    }  
    
    cout<<"Pattern 12: Square"<<endl;
    for(int i=1; i<=range; i++){
        if(i == 1 || i == range){
            for(int j=1; j<range;j++)
                cout<<"*";
        }
        else{
            cout<<"*";
            for(int j=1; j<range-2;j++)
                cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Pattern 13: Number Square:"<<endl;
    for(int i=0; i<(2*range-1); i++){
        for(int j=0; j<(2*range-1); j++){
            int top = i, left = j, down = (2*range-1)-1-i, right = (2*range-1)-1-j;    
            int dist =range-min(min(top, down), min(left, right));
            cout<<dist;
        }
        cout<<endl;
    }

    return 0;

}