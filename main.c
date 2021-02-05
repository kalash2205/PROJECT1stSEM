#include <stdio.h>
#include <mysql.h>

int main()
{
    MYSQL *con = mysql_init(NULL);
    if (con==NULL)
    {
        printf("%s\n", mysql_error(con));
    }
    if (mysql_real_connect(con, "localhost", "tushar", "rahsut", "sample", 0, NULL, 0)== NULL)
    {
        printf("%s\n", mysql_error(con));
        mysql_close(con);
        exit(1);
    }
    //printf("\033[1m\t\t\033[7mWELCOME TO PUZZLES!!\033[0m");
    //if(mysql_query(con, "DROP TABLE IF EXISTS cars"))
    //{
    //    printf("Selected");
    //}
    //if(mysql_query(con, "CREATE table cars(id int primary key auto_increment, name varchar(255), price int)"))
    //{
    //    printf("Selected");
    //}
    
    if(mysql_query(con, "SELECT * FROM employees"))
    printf("Error Query Select");

    MYSQL_RES *result = mysql_store_result(con);
    if(result==NULL)
    printf("Result NULL ERROR");

    int numOfFields= mysql_num_fields(result);
    printf("num fields %d", numOfFields);
    MYSQL_ROW row;
    while(row=mysql_fetch_row(result))
    {
            printf("1");

        for(int i=0; i< numOfFields; i++)
        {
            printf("%s", row[i]);
        }
        printf("\n");
    }
    mysql_free_result(result);
    mysql_close(con);
    exit(0);
}