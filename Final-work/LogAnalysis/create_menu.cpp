#include <iostream>
#include <cstring>
#include "include/CreateMenu.hpp"
#include "include/IPLocator.hpp"
#include "include/IPint.hpp"

using namespace std;

void show_menu()
{
    printf("--------------menu------------\n");
    printf("---You can input as follows:---\n");
    printf("[1] ---------show all of the logs\n");
    printf("[2] ---------show the detail of the los you want to get\n");
    printf("[3] ---------show the ip ordered by time\n"); 
    printf("[4] ---------show the ip's information\n");
    printf("[5] ---------output all of the action of the ip you input\n");
    printf("[6] ---------get the number of the logs\n");
    printf("[7] ---------show the menu again\n");
    printf("[0] ---------exit this project!\n");
    printf("--------------------------------------------------\n");
}

//获取指令
void get_order(LOG log[], int cnt, int st[]){
    int order;
    scanf("%d", &order);
    int index;
    while(order != 0){
        switch (order)
        {
        case 1:
            show_all_logs(log, cnt);
        case 2:
            printf("input the index of the log you want to get: ");
            scanf("%d", &index);
            show_log(log, index);
            break;
        case 3:
            show_ip_by_time(log, cnt);
            break;
        case 4:
            //show_IPdetail(log, cnt);
            break;
        case 5:
            printf("input the index of the ip's actions you want to get: ");
            scanf("%d", &index);
            show_action(log, index, cnt);
            break;
        case 6:
            show_num(cnt);
            break;
        case 7:
            show_menu();
            break;
        default:
            printf("input ERROR, and input again: ");
            break;
        }
        scanf("%d", &order);
    }
    printf("exit successfully!\n");
    
}

//按下1时
void show_all_logs(LOG log[], int cnt)
{
    for(int i = 0; i < cnt; i ++){
        printf("--------the %dth log-------\n", i + 1);
        show_log(log, i);
    }
    printf("press 7 can return back menu and press 0 can exit!\n");
}

//按下2时
void show_log(LOG log[], int index)
{
    std::cout<<log[index].ip<<std::endl;
    std::cout<<log[index].time<<std::endl;
    std::cout<<log[index].req<<std::endl;
    std::cout<<log[index].path<<std::endl;
    std::cout<<log[index].web_ser<<std::endl;
    printf("press 7 can return back menu and press 0 can exit!\n");
}

//按下4时
// void show_IPdetail(LOG log[], int len){
    
//     for(int i = 0; i < len; i ++){
//         cout << ipl.getIpAddr(log[i].ip) << "\t\t";
//         cout << ipl.getIpRange(log[i].ip) << endl;
//     }
// }

//按下3时
void show_ip_by_time(LOG log[], int cnt){
    //IPLocator ipl("wry utf-8.dat");
    for(int i = 0; i < cnt; i ++){
        std::cout<<log[i].time<<"\t\t";
        std::cout<<log[i].ip<<std::endl;
    }
    printf("press 7 can return back menu and press 0 can exit!\n");
}

void show_action(LOG log[],int index, int cnt){
    int u = log[index].intIP;
    cout << "Ip:\t" << log[index].ip << endl;
    int n = 1;
    for(int j = 0; j < cnt; j ++){
        if(log[j].intIP == u){
            printf("%dth\t", n ++);
            cout << log[j].req ;
            for(int i = strlen(log[j].req); i < 30; i ++) cout << ' ';
            cout << log[j].time << endl;
        }
    }
    printf("press 7 can return back menu and press 0 can exit!\n");
}

void show_num(int num){
    printf("There are %d logs int the file\n", num);
    printf("press 7 can return back menu and press 0 can exit!\n");
}