#include <iostream.h>



void InitArray(int **arr, const int N, const int M){   //В параметрах указательная переменная, будущая массивом, и число ячеек массива
    int count = 0;
    for (int i = 0; i<N; i++){
     for (int j=0; j<M; j++){
        arr[i][j] = count++;    //Заполнение массива числами по порядку
     }
    }
}
/*КОНЕЦ ФУНКЦИИ ЗАПОЛНЕНИЯ*/

/*ФУНКЦИЯ ВЫВОДА ДВУМЕРНОГО МАССИВА НА ЭКРАН*/
void print_array(int** arr, const int N, const int M){
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            cout << arr[i][j] << '\t';
        }   cout << '\n';
    }
}
/*КОНЕЦ ФУНКЦИИ ВЫВОДА ДВУМЕРНОГО МАССИВА НА ЭКРАН*/



int main(){
  srand(time(0u));
  int row = 0, col =0;    //Можно вводить с клавиатуры, для этого используйте cin

  /*ЗАДАЁМ ЧИСЛО ЯЧЕЕК ВО ВРЕМЯ РАБОТЫ ПРОГРАММЫ*/
  cout << "input row: ";
  cin >> row;
  cout << "input col: ";
  cin >> col;

  /*ДАЁМ ПРОГРАММЕ ПАМЯТЬ*/
  int **p = new int* [row];   //Создание строк
  for (int i =0 ;i<row; i++){
    p[i] = new int[col];  //Создание колонок для каждой строки
  }
  //=================================

        fill_array(p,row,col);      //Обращение к функции заполнения двумерного массива
        print_array(p,row,col);     //Обращение к функции вывода двумерного массива

  //=================================

  /*ОТБИРАЕМ У ПРОГРАММЫ ПАМЯТЬ*/
  for (int i=0; i<row;i++){
    delete []p[i];        //Отбор у программы выделенной под колонки память
  }
  delete []p;   //Отбор у программы выделенной под указательную переменную памяти
  cin.get();
}