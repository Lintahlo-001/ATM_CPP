#include <iostream>
#include <string>

using namespace std;

main()
{
    cout << "     Hello There!!\nWelcome To My ATM System\n";

    char choice, option, choice2;
    string userId1, userId2, pass1, pass2;
    bool intro, loop, loop2, loop3, loop4;
    float num, balance = 0;
    
    do {cout << "_______________________" << endl;
        cout << "1. Login \n2. Create Account \n3. Quit\n";
        cout << "Please Enter A Number: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case '1':
            cout << "_______" << endl;
            cout << "Login:" << endl;
            cout << "Enter your User ID: ";
            getline (cin, userId2);
            cout << "Enter Your Password: ";
            getline (cin, pass2);
            
            if (userId2 == userId1 && pass2 == pass1)
            {
               intro = true;
            } else 
            {
                cout << "___________________________________" << endl;
                cout << "Invalid User ID or Password\n";
                cout << "Please Make Sure You Input The Correct User ID Or Password\n";
                cout << "Also Please Make Sure You Have An Account First Beffore Logging In\n";
                intro = false;               
            }
            break;

        case '2':
            cout << "________________________" << endl;
            cout << "Create Account:" << endl;
            cout << "Please Enter A User ID: ";
            getline (cin, userId1);
            cout << "Please Enter A Password: ";
            getline (cin, pass1);
            cout << "Congratulations! You Have Successfully Created An Account" << endl;
            intro = false;
            break;

        case '3':
            return 0;
            break;

        default: 
            cout << "_____________________________" << endl;
            cout << "Invalid Input: Only Enter 1-3" << endl;
            intro = false;
            break;
        } 
    
    } while (intro == false);
    
    cout << "______________" << endl;
    cout << "Login Success" << endl;
    
    do {cout << "________________________" << endl;
        cout << "What Do You Want To Do?" << endl;
        cout << "1. Deposit \n2. Withdraw \n3. Check Balance \n4. Quit\n";
        cout << "Please Enter A Number: ";
    
        cin >> option;

        switch (option)
        {
        case '1':
            cout << "_________" << endl;
            cout << "Deposit:" << endl;
            cout << "Current Balance: " << balance << endl;
            cout << "How Much Would You Like To Desposit?" << endl;
            cout << "Please Enter A Number: ";
            cin >> num;
            balance = balance + num;
            cout << "Success! Your Current Balance Is: " << balance << endl;
            num = 0;

            do {cout << "_________________________________________________________" << endl;
                cout << "Do You Want To Deposit, Withdraw, or Check Your Balance? \nPress C to Continue Press Q to Quit: ";
                cin >> choice2;
                switch (choice2){
                    case 'C':
                    case 'c':
                        loop2 = true;
                        loop = true;
                        break;

                    case 'Q':
                    case 'q':
                        return 0;
                        break;
                }
                if (loop2 == false){
                    cout << "_____________________________" << endl;
                    cout << "Invalid Input: Only Enter C/Q" << endl;
                }
            } while (loop2 == false);
            loop2 = false;
            break;

        case '2': 
            cout << "_________" << endl;
            cout << "Withdraw:" << endl;
            cout << "Current Balace: " << balance << endl;
            cout << "How Much Would You Like To Withdraw?" << endl;
            cout << "Please Enter A Number: ";
            cin >> num;
            balance = balance - num;
            cout << "Success! Your Current Balance Is: " << balance << endl;
            num = 0;

            do {cout << "_________________________________________________________" << endl;
                cout << "Do You Want To Deposit, Withdraw, or Check Your Balance? \nPress C to Continue Press Q to Quit: ";
                cin >> choice2;
                switch (choice2){
                    case 'C':
                    case 'c':
                        loop3 = true;
                        loop = true;
                        break;

                    case 'Q':
                    case 'q':
                        return 0;
                        break;
                }
                if (loop3 == false){
                    cout << "_____________________________" << endl;
                    cout << "Invalid Input: Only Enter C/Q" << endl;
                }
            } while (loop3 == false);
            loop3 = false;
            break;
        
        case '3':
            cout << "_______________" << endl;
            cout << "Check Balance:" << endl;
            cout << "Your Current Balance is: " << balance << endl;

            do {cout << "_________________________________________________________" << endl;
                cout << "Do You Want To Deposit, Withdraw, or Check Your Balance? \nPress C to Continue Press Q to Quit: ";
                cin >> choice2;
                switch (choice2){
                    case 'C':
                    case 'c':
                        loop4 = true;
                        loop = true;
                        break;

                    case 'Q':
                    case 'q':
                        return 0;
                        break;
                }
                if (loop4 == false){
                    cout << "_____________________________" << endl;
                    cout << "Invalid Input: Only Enter C/Q" << endl;
                }
            } while (loop4 == false);
            loop4 = false;
            break;
                    
        case '4':
            return 0;
            break;
        
        default:
            cout << "Invalid Input Only Enter 1-4" << endl;
            loop = true;
            break;
        }
    } while (loop == true);

    
    return 0;


}
