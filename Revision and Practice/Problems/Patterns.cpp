#include <iostream>
using namespace std;

// Square Patterns
void NumberPattern(int n);
void StarPattern(int n);
void CharPattern(int n);
void NumberPatternOne(int n);
void CharPatterOne(int n);

// Triangle Patterns
void Half_Pyramid(int n);
void Half_Number_Pyramid(int n);
void Half_Character_Pyramid(int n);
void Half_Number_Triangle(int n);
void Half_Reverse_Triangle(int n);
void Floyd_Triangle(int n);
void Floyd_Char_Triangle(int n);

// Inverted Triangle Patterns
void Inverted_Number_Triangle(int n);
void Inverted_Number_Triangle_Two(int n);
void Inverted_Number_Triangle_Three(int n);

// Pyramid Pattern
void Pyramid_One(int n);
void Pyramid_Two(int n);
void Hollow_Diamond(int n);


/*
! Note:-
* Variables outside outerloop don't get reset
* Variables inside outerloop get's reset
*/

int main()
{

    // Square Pattern Functions Calls
    NumberPattern(5);
    StarPattern(5);
    CharPattern(5);
    NumberPatternOne(5);
    CharPatterOne(5);

    // Triangle Pattern Function Calls
    Half_Pyramid(5);
    Half_Number_Pyramid(5);
    Half_Character_Pyramid(5);
    Half_Number_Triangle(5);
    Half_Reverse_Triangle(5);
    Floyd_Triangle(5);
    Floyd_Char_Triangle(5);

    // Inverted Triangle Function Calls
    Inverted_Number_Triangle(5);
    Inverted_Number_Triangle_Two(5);
    Inverted_Number_Triangle_Three(5);

    // Pyramid Pattern Calls
    Pyramid_One(5);
    Pyramid_Two(5);
    Hollow_Diamond(5);
    return 0;
}

// Square Patterns
void NumberPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }    
    cout << endl;
}
void StarPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }    
    cout << endl;
}
void CharPattern(int n){
    for(int i = 1; i <= n; i++){
        char c = 'A';
        for(int j = 1; j <= n; j++){
            cout << c << " ";
            c = c + 1;
        }
        cout << endl;
    }
    cout << endl;
}
void NumberPatternOne(int n){
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
    cout << endl;
}
void CharPatterOne(int n){
    char c = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << c << " ";
            c = c + 1;
        }
        cout << endl;
    }
    cout << endl;
}

// Pyramid Patterns
void Half_Pyramid(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void Half_Number_Pyramid(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void Half_Character_Pyramid(int n){
    char c = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
    cout << endl;
}
void Half_Number_Triangle(int n){
    for(int i = 1; i <= n; i++){
        int num = 1;
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;
}
void Half_Reverse_Triangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void Floyd_Triangle(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;
}
void Floyd_Char_Triangle(int n){
    char c = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    cout << endl;
}

// Inverted Triagnle Patterns
void Inverted_Number_Triangle(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << i << " ";  
        }
        cout << endl;
    }
    cout << endl;
}
void Inverted_Number_Triangle_Two(int n){
    for(int i = n; i >= 1; i--){
        int num = 1;
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;
}
void Inverted_Number_Triangle_Three(int n){
    int num = 1;
    for(int i = n; i >= 1; i--){
        for(int space = 1; space <= (n - i); space++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << num;
        }
        num++;
        cout << endl;
    }
    cout << endl;
}

// Pyramid Patterns
void Pyramid_One(int n){
    for(int i = 1; i <= n; i++){
        for(int space = 1; space <= n - i; space++){
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
void Pyramid_Two(int n){
    for(int i = 0; i < n; i++){
        for(int space = 0; space < n - i; space++){
            cout << " ";
        }
        for(int j = 0; j < (i + 1); j++){
            cout << (j + 1);
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}
void Hollow_Diamond(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - i - 1); j++){
            cout << " ";
        }
        cout << "*";

        if(i != 0){
            for(int j = 0; j < (2 * i - 1); j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < (n - 2); i++){
       for(int j = 0; j < (i + 1); j++){
            cout << " ";
        }
        cout << "*";
        
        if(i != n - 2){
            for(int j = 0; j < 2 * (n - i) - 5; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}



































































