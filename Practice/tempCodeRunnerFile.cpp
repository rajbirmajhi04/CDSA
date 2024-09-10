void Full_Number_Pyramid(int rows){
    for(int i = 1; i <= rows; i++){
        for(int space = 1; space <= rows - i; space++){
            cout << " ";
        }

        int num = i;
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        
        num = num - 2;
        for(int k = 1; k < i; k++){
            cout << num << " ";
            num--;
        }

        cout << endl;
    }
}