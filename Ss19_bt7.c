  
#include <string.h>
#include <stdio.h>

struct SinhVien{
    char name[50];
    int age;
    char phoneNumber[50];
};
struct Class {
    struct SinhVien student[5];
    
};
void dltItem(int id,struct Class *class);
int main() {
    struct SinhVien user01={"Sinh vien 01", 18,"0123456789"};
    struct SinhVien user02={"Sinh vien 02", 22,"0987654321"};
    struct SinhVien user03={"Sien vien 03", 20,"0234567890"};
    struct SinhVien user04={"Sinh vien 04", 21,"0345678901"};
    struct SinhVien user05={"Sinh vien 05", 23,"0456789012"};
    struct Class class={.student={user01,user02,user03,user04,user05}
    };
    for(int i=0;i<5;i++){
        printf("ID : %d\n",i+1);
        printf("Name : %s\n",class.student[i].name);
        printf("Age : %d\n",class.student[i].age);
        printf("Phone Nmber : %s\n",class.student[i].phoneNumber);
        printf("\n");
    }
    int id;
    printf("Input the index to delete : ");
    scanf("%d",&id);    
    deleteItem(id, &class);
    for(int i=0;i<4;i++){
        printf("ID : %d\n",i+1);
        printf("Name : %s\n",class.student[i].name);
        printf("Age : %d\n",class.student[i].age);
        printf("Phone Nmber : %s\n",class.student[i].phoneNumber);
        printf("\n");
    }
    return 0;
}
void deleteItem(int id,struct Class *class){
    for(int i=id-1;i<4;i++){
        strcpy(class->student[i].name,class->student[i+1].name);
        class->student[i].age=class->student[i+1].age;
        strcpy(class->student[i].phoneNumber,class->student[i+1].phoneNumber);
    }
}