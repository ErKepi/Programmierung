fgets(input, 50, stdin);

    //Entfernen von '\n' im fgets
    //strcspn -> String Complement Scan
    //Sucht das Array nach dem
    //angegebenen String
    input[strcspn(input, "\n")] = 0;