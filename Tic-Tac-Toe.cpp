#include <iostream>

using namespace std;

void displayBoard(int playBoard[][3])
{
    int flag = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            playBoard[i][j] = flag;
            flag++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << playBoard[i][j] << '|';
        }
        cout << endl;
    }

    cout << "---------" << endl;
    cout << "---------" << endl;
}

void createplayingBoard(int backBoard[][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            backBoard[i][j] = 0;
        }
    }
}

void printplayingBoard(int backBoard[][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (backBoard[i][j] == 0)
            {
                cout << '|' << ' ' << '|';
            }
            else if (backBoard[i][j] == 1)
            {
                cout << '|' << 'X' << '|';
            }
            else if (backBoard[i][j] == 4)
            {
                cout << '|' << 'O' << '|';
            }
        }
        cout << endl;
    }
}

void playerMove(int backBoard[][3])
{
    int key;
    cout << "enter key for your play: ";
    cin >> key;

    switch (key)
    {
    case 1:
        if (backBoard[0][0] == 0)
        {
            backBoard[0][0] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }

        break;
    case 2:
        if (backBoard[0][1] == 0)
        {
            backBoard[0][1] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }
        break;
    case 3:
        if (backBoard[0][2] == 0)
        {
            backBoard[0][2] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }
        break;
    case 4:
        if (backBoard[1][0] == 0)
        {
            backBoard[1][0] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }
        break;
    case 5:
        if (backBoard[1][1] == 0)
        {
            backBoard[1][1] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }
        break;
    case 6:
        if (backBoard[1][2] == 0)
        {
            backBoard[1][2] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }
        break;
    case 7:
        if (backBoard[2][0] == 0)
        {
            backBoard[2][0] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }
        break;
    case 8:
        if (backBoard[2][1] == 0)
        {
            backBoard[2][1] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }
        break;
    case 9:
        if (backBoard[2][2] == 0)
        {
            backBoard[2][2] = 1;
        }
        else
        {
            cout << "Warning block not empty!" << endl;
            cout << "Try again." << endl;
            playerMove(backBoard);
        }
        break;

    default:
        cout << "Enter valid choice" << endl;
        break;
    }
}

void aiPlayCentreD(int tempArr[][3])
{
    if (tempArr[1][1] == 0)
    {
        tempArr[1][1] = 17;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (tempArr[i][j] != 17)
                {
                    cout << tempArr[i][j] << " ";
                }
                else
                {
                    cout << 2 << " ";
                }
            }
        }
        cout << "Score Obtainable = 4";
        cout << endl;
    }
}

void aiWinD(int tempArr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (tempArr[i][j] + tempArr[i][j + 1] + tempArr[i][j + 2] == 8)
        {
            for (int j = 0; j < 3; j++)
            {
                if (tempArr[i][j] == 0)
                {
                    tempArr[i][j] = 4;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (tempArr[i][j] != 4)
                    {
                        cout << tempArr[i][j] << " ";
                    }
                    else
                    {
                        cout << "2"
                             << " ";
                    }
                }
            }
            cout << "Score Obtainable = 100";
            cout << endl;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (tempArr[j][i] + tempArr[j + 1][i] + tempArr[j + 2][i] == 8)
        {
            for (int j = 0; j < 3; j++)
            {
                if (tempArr[j][i] == 0)
                {
                    tempArr[j][i] = 4;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (tempArr[i][j] != 4)
                    {
                        cout << tempArr[i][j] << " ";
                    }
                    else
                    {
                        cout << "2"
                             << " ";
                    }
                }
            }
            cout << "Score Obtainable = 100";
            cout << endl;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (tempArr[0][0] + tempArr[1][1] + tempArr[2][2] == 8)
        {
            int j = 0;
            while (j < 3)
            {
                if (tempArr[i][i] == 0)
                {
                    tempArr[i][i] = 4;
                }

                j++;
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (tempArr[i][j] != 4)
                    {
                        cout << tempArr[i][j] << " ";
                    }
                    else
                    {
                        cout << "2"
                             << " ";
                    }
                }
            }
            cout << "Score Obtainable = 100";
            cout << endl;
        }
        else if (tempArr[0][2] + tempArr[1][1] + tempArr[2][0] == 8)
        {
            int j = 2;
            for (int i = 0; i < 3; i++)
            {

                if (tempArr[i][j] == 0)
                {
                    tempArr[i][j] = 4;
                }

                j--;
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (tempArr[i][j] != 4)
                    {
                        cout << tempArr[i][j] << " ";
                    }
                    else
                    {
                        cout << "2"
                             << " ";
                    }
                }
            }
            cout << "Score Obtainable = 100";
            cout << endl;
        }
    }
}

void aiBlockD(int tempArr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (tempArr[i][j] + tempArr[i][j + 1] + tempArr[i][j + 2] == 2)
        {
            for (int j = 0; j < 3; j++)
            {
                if (tempArr[i][j] == 0)
                {
                    tempArr[i][j] = 4;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (tempArr[i][j] != 4)
                    {
                        cout << tempArr[i][j] << " ";
                    }
                    else
                    {
                        cout << "2"
                             << " ";
                    }
                }
            }
            cout << "Score Obtainable = 50";
            cout << endl;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (tempArr[j][i] + tempArr[j + 1][i] + tempArr[j + 2][i] == 2)
        {
            for (int j = 0; j < 3; j++)
            {
                if (tempArr[j][i] == 0)
                {
                    tempArr[j][i] = 4;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (tempArr[i][j] != 4)
                    {
                        cout << tempArr[i][j] << " ";
                    }
                    else
                    {
                        cout << "2"
                             << " ";
                    }
                }
            }
            cout << "Score Obtainable = 50";
            cout << endl;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (tempArr[0][0] + tempArr[1][1] + tempArr[2][2] == 2)
        {
            int i = 0;
            while (i < 3)
            {
                if (tempArr[i][i] == 0)
                {
                    tempArr[i][i] = 4;
                }

                i++;
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (tempArr[i][j] != 4)
                    {
                        cout << tempArr[i][j] << " ";
                    }
                    else
                    {
                        cout << "2"
                             << " ";
                    }
                }
            }
            cout << "Score Obtainable = 50";
            cout << endl;
        }
        else if (tempArr[0][2] + tempArr[1][1] + tempArr[2][0] == 2)
        {
            int j = 2;
            for (int i = 0; i < 3; i++)
            {
                if (tempArr[i][j] == 0)
                {
                    tempArr[i][j] = 4;
                }
                j--;
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (tempArr[i][j] != 4)
                    {
                        cout << tempArr[i][j] << " ";
                    }
                    else
                    {
                        cout << "2"
                             << " ";
                    }
                }
            }
            cout << "Score Obtainable = 50";
            cout << endl;
        }
    }
}

void aiPlayCornerD(int tempArr[][3], int backBoard[][3])
{
    for (int i = 0; i < 3; i = i + 2)
    {
        for (int j = 0; j < 3; j = j + 2)
        {
            if (tempArr[i][j] == 0)
            {
                tempArr[i][j] = 4;
                for (int p = 0; p < 3; p++)
                {
                    for (int q = 0; q < 3; q++)
                    {
                        if (tempArr[p][q] != 4)
                        {
                            cout << tempArr[p][q] << " ";
                        }
                        else
                        {
                            cout << "2"
                                 << " ";
                        }
                    }
                }

                cout << "Score Obtainable = 3";
                cout << endl;

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        tempArr[i][j] = backBoard[i][j];
                    }
                }
            }
        }
    }
}

void aiPlayLeftOverD(int tempArr[][3], int backBoard[][3])
{
    if (tempArr[0][1] == 0)
    {
        tempArr[0][1] = 4;
        
        for (int p = 0; p < 3; p++)
        {
            for (int q = 0; q < 3; q++)
            {
                if (tempArr[p][q] != 4)
                {
                    cout << tempArr[p][q] << " ";
                }
                else
                {
                    cout << "2"
                         << " ";
                }
            }
        }

        cout << "Score Obtainable = 2";
        cout << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tempArr[i][j] = backBoard[i][j];
            }
        }
    }
    if (tempArr[1][0] == 0)
    {
        tempArr[1][0] = 4;
        
        for (int p = 0; p < 3; p++)
        {
            for (int q = 0; q < 3; q++)
            {
                if (tempArr[p][q] != 4)
                {
                    cout << tempArr[p][q] << " ";
                }
                else
                {
                    cout << "2"
                         << " ";
                }
            }
        }

        cout << "Score Obtainable = 2";
        cout << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tempArr[i][j] = backBoard[i][j];
            }
        }
    }
    if (tempArr[1][2] == 0)
    {
        tempArr[1][2] = 4;
        
        for (int p = 0; p < 3; p++)
        {
            for (int q = 0; q < 3; q++)
            {
                if (tempArr[p][q] != 4)
                {
                    cout << tempArr[p][q] << " ";
                }
                else
                {
                    cout << "2"
                         << " ";
                }
            }
        }

        cout << "Score Obtainable = 2";
        cout << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tempArr[i][j] = backBoard[i][j];
            }
        }
    }
    if (tempArr[2][1] == 0)
    {
        tempArr[2][1] = 4;
        
        for (int p = 0; p < 3; p++)
        {
            for (int q = 0; q < 3; q++)
            {
                if (tempArr[p][q] != 4)
                {
                    cout << tempArr[p][q] << " ";
                }
                else
                {
                    cout << "2"
                         << " ";
                }
            }
        }

        cout << "Score Obtainable = 2";
        cout << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tempArr[i][j] = backBoard[i][j];
            }
        }
    }
}

void aiScoreDisplay(int backBoard[][3], int tempArr[][3])
{
    int flag;

    flag = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tempArr[i][j] = backBoard[i][j];
            if (backBoard[i][j] == 0)
            {
                flag += 1;
            }
        }
    }

    cout << "Available plays for AI: " << endl;

    for (int i = 0; i < flag; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (tempArr[k][j] == 4)
                {
                    cout << "2"
                         << " ";
                }
                else
                {
                    cout << tempArr[k][j] << " ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;

    aiWinD(tempArr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tempArr[i][j] = backBoard[i][j];
        }
    }

    aiBlockD(tempArr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tempArr[i][j] = backBoard[i][j];
        }
    }

    aiPlayCentreD(tempArr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tempArr[i][j] = backBoard[i][j];
        }
    }

    aiPlayCornerD(tempArr, backBoard);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tempArr[i][j] = backBoard[i][j];
        }
    }

    aiPlayLeftOverD(tempArr, backBoard);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tempArr[i][j] = backBoard[i][j];
        }
    }
}

bool playerWin(int backBoard[][3])
{
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (backBoard[i][j] + backBoard[i][j + 1] + backBoard[i][j + 2] == 3)
        {
            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (backBoard[j][i] + backBoard[j + 1][i] + backBoard[j + 2][i] == 3)
        {
            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (backBoard[0][0] + backBoard[1][1] + backBoard[2][2] == 3 || backBoard[0][2] + backBoard[1][1] + backBoard[2][0] == 3)
        {
            return true;
        }
    }
    return false;
}

bool aiWin(int backBoard[][3])
{

    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (backBoard[i][j] + backBoard[i][j + 1] + backBoard[i][j + 2] == 8)
        {
            for (int j = 0; j < 3; j++)
            {
                if (backBoard[i][j] == 0)
                {
                    backBoard[i][j] = 4;
                }
            }

            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (backBoard[j][i] + backBoard[j + 1][i] + backBoard[j + 2][i] == 8)
        {
            for (int j = 0; j < 3; j++)
            {
                if (backBoard[j][i] == 0)
                {
                    backBoard[j][i] = 4;
                }
            }

            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (backBoard[0][0] + backBoard[1][1] + backBoard[2][2] == 8)
        {
            int i = 0;
            while (i < 3)
            {
                if (backBoard[i][i] == 0)
                {
                    backBoard[i][i] = 4;
                }

                i++;
            }

            return true;
        }
        else if (backBoard[0][2] + backBoard[1][1] + backBoard[2][0] == 8)
        {
            int j = 2;
            for (int i = 0; i < 3; i++)
            {

                if (backBoard[i][j] == 0)
                {
                    backBoard[i][j] = 4;
                }

                j--;
            }
            return true;
        }
    }

    return false;
}

bool aiBlock(int backBoard[][3])
{
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (backBoard[i][j] + backBoard[i][j + 1] + backBoard[i][j + 2] == 2)
        {
            for (int j = 0; j < 3; j++)
            {
                if (backBoard[i][j] == 0)
                {
                    backBoard[i][j] = 4;
                }
            }

            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        if (backBoard[j][i] + backBoard[j + 1][i] + backBoard[j + 2][i] == 2)
        {
            for (int j = 0; j < 3; j++)
            {
                if (backBoard[j][i] == 0)
                {
                    backBoard[j][i] = 4;
                }
            }

            return true;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (backBoard[0][0] + backBoard[1][1] + backBoard[2][2] == 2)
        {
            int i = 0;
            while (i < 3)
            {
                if (backBoard[i][i] == 0)
                {
                    backBoard[i][i] = 4;
                }

                i++;
            }

            return true;
        }
        else if (backBoard[0][2] + backBoard[1][1] + backBoard[2][0] == 2)
        {
            int j = 2;
            for (int i = 0; i < 3; i++)
            {
                if (backBoard[i][j] == 0)
                {
                    backBoard[i][j] = 4;
                }
                j--;
            }

            return true;
        }
    }

    return false;
}

bool aiPlayCentre(int backBoard[][3])
{
    if (backBoard[1][1] == 0)
    {
        backBoard[1][1] = 4;
        return true;
    }
    return false;
}

bool aiPlayCorner(int backBoard[][3])
{
    for (int i = 0; i < 3; i + 2)
    {
        for (int j = 0; j < 3; j = j + 2)
        {
            if (backBoard[i][j] == 0)
            {
                backBoard[i][j] = 4;
                return true;
            }
        }
    }
    return false;
}

bool aiPlayLeftOver(int backBoard[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (backBoard[i][j] == 0)
            {
                backBoard[i][j] = 4;
                return true;
            }
        }
    }
    return false;
}

void aiMove(int backBoard[][3], int aiScore[])
{
    if (aiWin(backBoard))
    {
        cout << "Computer WINS!!!" << endl;
        printplayingBoard(backBoard);
        aiScore[0] = aiScore[0] + 100;
        cout << "final Ai Score = " << aiScore[0] << endl;
        exit(0);
    }
    else if (aiBlock(backBoard))
    {
        cout << "Computer played Block, your turn." << endl;
        aiScore[0] = aiScore[0] + 50;
        cout << endl;
    }
    else if (aiPlayCentre(backBoard))
    {
        cout << "Computer played Centre, your turn." << endl;
        aiScore[0] = aiScore[0] + 4;
        cout << endl;
    }
    else if (aiPlayCorner(backBoard))
    {
        cout << "Computer played Corner, your turn." << endl;
        aiScore[0] = aiScore[0] + 3;
        cout << endl;
    }
    else if (aiPlayLeftOver(backBoard))
    {
        cout << "Computer played Leftover, your turn." << endl;
        aiScore[0] = aiScore[0] + 2;
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int backBoard[3][3];
    int playBoard[3][3];
    int tempArr[3][3];
    int aiScore[1];
    aiScore[0] = 0;

    cout << "***Welcome to Tic-Tac-Toe***" << endl;
    cout << "-> Refer the following keys shown to play your move." << endl;
    cout << "---------" << endl;
    cout << "---------" << endl;
    displayBoard(playBoard);
    createplayingBoard(backBoard);
    printplayingBoard(backBoard);

    int key = 0;
    int flag = 0;

    while (flag < 9)
    {
        if (flag % 2 == 0)
        {
            playerMove(backBoard);
            if (playerWin(backBoard))
            {
                printplayingBoard(backBoard);
                cout << "Congratulations! you won";
                exit(0);
            }
            // flag++;
        }
        else if (flag % 2 == 1)
        {

            aiScoreDisplay(backBoard, tempArr);
            aiMove(backBoard, aiScore);
            cout << "Ai Score = " << aiScore[0] << endl;
            // flag++;
        }
        else
        {
            cout << "Invalid Move! Try again." << endl;
            // flag++;
        }

        flag++;

        printplayingBoard(backBoard);
    }

    cout << "Hard Luck, it is a DRAW, Try again" << endl;

    return 0;
}
